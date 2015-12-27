#ifndef RECORD_MANAGER
#define RECORD_MANAGER
#include <string>
#include <stdio.h>
#include <iostream>
#include <sstream>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <map>
#include <list>
#include <vector>
#include "../bufmanager/BufPageManager.h"

using namespace std;

class RecordManager {
private:
	int RIDnumber;
	int record_len;
	int total_pages;
	int record_per_page;
	int attr_num;
	int primary_key;
	vector<string> str_vec;
	// vector<int> record_used_per_page;
	// 关于各种属性的参数
	vector<int> attr_lens;
	vector<int> attr_types;
	vector<int> attr_nulls;
	vector<int> attr_pos;
	vector< vector<string> > all_record;
	FileManager* fileManager;
	BufPageManager* bufPageManager;

public:
	/*
	 * RecordManager构造函数
	 */
	RecordManager(FileManager* f) {
		fileManager = f;
	}

	// 把首页信息读入
	void load_table_info(int fileID) {
		BufPageManager* bpm = new BufPageManager(fileManager);
		int index;
		BufType b = bpm->allocPage(fileID, 0, index, true);

		record_len = b[0];
		total_pages = b[1];
		record_per_page = b[2];
		RIDnumber = b[3];
		BufType record_ptr = b+4;
		// for (int i = 0; i < b[1]; i++) {
		// 	record_used_per_page.push_back(record_ptr[i]);
		// }


		attr_num = b[b[1]+4];
		for (int i = 0; i < attr_num; i++) {
			int attr_type = b[b[1]+5+3*i];
			int attr_len = b[b[1]+5+3*i+1];
			int attr_null = b[b[1]+5+3*i+2];
			attr_types.push_back(attr_type);
			attr_lens.push_back(attr_len);
			attr_nulls.push_back(attr_null);
			attr_pos.push_back((attr_type) ? (attr_len+1) : ((attr_len+1)/4+1));
		}
		primary_key = b[b[1]+5+3*attr_num];
		char* attr_name = (char *)(b+b[1]+6+3*attr_num);

		for (int i = 0; i < attr_num; i++) {
			// int attr_name_len = strlen(attr_name);
			// char* temp;
			// sscanf(attr_name, "%s", temp);
			// printf("%s\n", temp);
			string temp = "";
			while (*attr_name != '\0') {
				temp += *(attr_name++);
				// printf("%c", *(attr_name++));
			}
			attr_name++;
			str_vec.push_back(temp);
			cout << temp << endl;
		}
		show_table_info();
		update_all_record(fileID);
		// cout << "表信息显示完毕*************" << endl;
	}

	void show_table_info() {
		cout << "***************显示表信息***************" << endl;
		cout << "每条记录长度 " 	<< record_len << endl;
		cout << "总页数 "		<< total_pages << endl;
		cout << "每页记录个数 " 	<< record_per_page << endl;
		cout << "RID(记录个数) "	<< RIDnumber << endl;
		cout << "主键 "			<< str_vec[primary_key] << endl;
		cout << "属性个数" 		<< attr_num << endl;
		for (int i = 0; i < attr_num; i++) {
			cout << str_vec[i] << "\t";
			// cout << (attr_types[i])?"int":"char";
			if (attr_types[i]) 
				cout << "int";
			else
				cout << "char";
			cout << "(" << attr_lens[i] << ") \t";
			if (attr_nulls[i])
				cout << "NOT NULL" << endl;
			else
				cout << "NULL" << endl;
		}

		cout << "***************表显示完毕***************" << endl;
	}
  

	void init(int fileID, int attr_num, int* attr_info, int primary_key, vector<string> attr_name) {
		BufPageManager* bpm = new BufPageManager(fileManager);
		// fileManager->createFile("testfile.txt"); //新建文件
		// int fileID;
		// fileManager->openFile("testfile.txt", fileID); //打开文件，fileID是返回的文件id

		int index;
		BufType b = bpm->allocPage(fileID, 0, index, true);
		// 每条记录长度
		b[0] = 0;
		//初始记录长度需要有一个RID
		int record_len = 1;
		// 总页数
		b[1] = 100;
		// 每页的记录数，根据每条记录长度来计算
		b[2] = 256;
		// 总记录条数
		b[3] = 0;
		BufType record_ptr = b+4;
		for (int i = 0; i < b[1]; i++) {
			record_ptr[i] = 0; 
		}

		int int_size = sizeof(int);
		int char_size = sizeof(char);
		cout << "int size" << int_size << endl;
		cout << "char size" << char_size << endl;
		// b[b[1] + 3] = attr_num;
		BufType attr_ptr = b+b[1]+4;
		attr_ptr[0] = attr_num;
		for (int i = 0; i < attr_num; i++) {
			int attr_type = attr_info[3*i];
			int attr_len = attr_info[3*i+1];
			int attr_null = attr_info[3*i+2];
			attr_ptr[1+3*i] = attr_type;
			attr_ptr[2+3*i] = attr_len;
			attr_ptr[3+3*i] = attr_null;
			// b[b[1]+4+3*i] = attr_type;
			// b[b[1]+4+3*i+1] = attr_len;
			// b[b[1]+4+3*i+2] = attr_null;
			cout << attr_len << endl;
			// attr_pos.push_back((attr_type) ? (attr_len+1) : ((attr_len+1)/(int_size/char_size)+1));
			record_len += (attr_type) ? (attr_len+1) : ((attr_len+1)/(int_size/char_size)+1);
		}

		b[0] = record_len;
		b[2] = 8000/(record_len*int_size);
		b[b[1]+5+3*attr_num] = primary_key;
		char* attr_name_str = (char *)(b+b[1]+5+3*attr_num+1);
		for (int i = 0; i < attr_num; i++) {
			string name = attr_name[i];
			for (int j = 0; j < name.length(); j++) {
				*(attr_name_str++) = name[j];
			}
			*(attr_name_str++) = '\0';
			// int len = name.length();
			// name.copy(attr_name_str, len, 0); 
			// *(attr_name_str+len+1) = '\0';
			// attr_name_str += (len+1);
		}
		cout << "每条记录长度" << b[0] << endl;
		cout << "总页数" << b[1] << endl;
		cout << "每页的记录数" << b[2] << endl;

		bpm->markDirty(index);
		fileManager->writePage(fileID, 0, b, 0);
		bpm->close();
	}

	//打印一条记录
	void printOneRecord(BufType record) {
		cout << "Rid:" << record[0];
		cout << " attr num:  " << record[1] << endl;
		BufType attr = record+2; 
		for (int i = 0; i < record[1]*2; i++) {
			while(char(*attr) != '\0') {
				cout << char(*attr);
				attr++;
			}
			attr++;
			cout << "  ";
		}
		cout << endl;
		return;
	}

	//打印所有记录
	void printAllRecord(int fileID) {
		bufPageManager = new BufPageManager(fileManager);
		int index;
		BufType b = bufPageManager->allocPage(fileID, 0, index, true);
		//每条记录长度
		int recordLength   = b[0];
		cout << "recordLength: " << recordLength << endl;
		//总页数
		int pageNum        = b[1];
		cout << "pageNum: " << pageNum << endl;
		//总共记录条数(包括已经删除的)
		int recordNum = b[2];
		cout << "recordNum: " << recordNum << endl;

		//缓存了所有页面record条数
		BufType pageRecordNum;
		pageRecordNum = b+4;
		for (int pageID = 1; pageID < pageNum; pageID++) {
			if (!pageRecordNum[pageID]) continue;
			cout << "pageID:  " << pageID << "  recordNum this page:  " << pageRecordNum[pageID] << endl;
			cout << endl;
			int index_this;
			 BufType b2 = bufPageManager->allocPage(fileID, pageID, index_this, true);
			 for (int i = 0; i < pageRecordNum[pageID]; i++) {
			 	BufType oneRecordPointer = b2 + i * recordLength;
			 	printOneRecord(oneRecordPointer);
				cout << endl;
			 }
		}
	}

	void writeAttr(string str, BufType& attrPointer) {
		cout << str << endl;
		for (int i=0; i<str.length(); i++) {
			*(attrPointer) = (unsigned int)str[i];
			attrPointer++;
		}
		*(attrPointer) = (unsigned int)'\0';
		attrPointer++;
		return;
	}

	// 写入某个属性（属性编号，具体值的字符串，BufType）
	// varchar类型的前后会有单引号，只存单引号之间的部分
	int write_attr(int attr, string record_attr, BufType b) {
		// cout << record_attr << endl;
		// 如果输入长度大于要求长度的话则返回1
		// 分int和varchar判断

		// 对主键进行判断
		if (attr == primary_key) {
			string w;
			if (attr_types[attr] == 0) {
				w = record_attr.substr(1, record_attr.length()-2);
			}
			else {
				w = record_attr;
			}
			for (int i = 0; i < all_record.size(); i++) {
				if (all_record[i][attr+1] == w) {
					cout << "主键重复" << endl;
					return 1;
				}
			}
		}

		if (attr_types[attr]==0) {
			if (record_attr.length()-2 > attr_lens[attr]) {
				cout << "你字符串太长了" << endl;
				return 1;
			}
		}
		else {
			if (record_attr.length() > attr_lens[attr]) {
				cout << "你字符串太长了" << endl;
				return 1;
			}
		} 
		// 如果是字符的话
		if (attr_types[attr] == 0) {
			cout << attr_types[attr] << endl;
			cout << attr_num << endl;
			char *temp = (char*)b;
			if (record_attr[0] != '\'') {
				cout << "你字符串没有用两个引号框起来啊" << record_attr;
				return 1;
			}
			for (int i = 1; i < record_attr.length()-1; i++) {
				temp[i-1] = (char)record_attr[i];
			}
			temp[record_attr.length()-2] = '\0';
			return 0;
		}
		// int
		else {
			int *temp = (int *)b;
			for (int i = 0; i < record_attr.length(); i++) {
				temp[i] = int(record_attr[i]-'0');
			}
			temp[record_attr.length()] = -1;
			return 0;
		}
	}


	void update_all_record(int fileID) {
		all_record.clear();
		bufPageManager = new BufPageManager(fileManager);
		int index;
		BufType b = bufPageManager->allocPage(fileID, 0, index, true);
		//每条记录长度
		int recordLength   = b[0];
		// cout << "recordLength: " << recordLength << endl;
		//总页数
		int pageNum        = b[1];
		// cout << "pageNum: " << pageNum << endl;
		//总共记录条数(包括已经删除的)
		int recordNum = b[3];
		// cout << "RID: " << recordNum << endl;

		//缓存了所有页面record条数
		BufType pageRecordNum;
		pageRecordNum = b+4;
		for (int pageID = 1; pageID < pageNum; pageID++) {
			if (!pageRecordNum[pageID]) continue;
			cout << "pageID:  " << pageID << "  recordNum this page:  " << pageRecordNum[pageID] << endl;
			cout << endl;
			int index_this;
			BufType b2 = bufPageManager->allocPage(fileID, pageID, index_this, true);
			for (int i = 0; i < pageRecordNum[pageID]; i++) {
			 	BufType oneRecordPointer = b2 + i * recordLength;
			 	// print_one_record(oneRecordPointer);
			 	vector<string> test_rtn = get_one_record(oneRecordPointer);
			 	all_record.push_back(test_rtn);
			 // 	cout << "test rtn" << endl;
			 // 	for (int kk = 0; kk < test_rtn.size(); kk++) {
			 // 		cout << test_rtn[kk] << endl;
			 // 	}
				// cout << endl;
			}
		}	
	}

	void print_all_record() {
		cout << "RID\t";
		for (int i = 0; i < str_vec.size(); i++) {
			cout << str_vec[i] << "\t";
		}
		cout << endl;
		for (int i = 0; i < all_record.size(); i++) {
			for (int j = 0; j < all_record[i].size(); j++) {
				cout << all_record[i][j] << "\t";
			}
			cout << endl;
		}
	}
	vector< vector<string> > get_all_record() {
		return all_record;
	}

	int delete_record(int fileID, int RID) {
		int index;
		bufPageManager = new BufPageManager(fileManager);
		BufType b = bufPageManager->allocPage(fileID, 0, index, true);
		//总页数
		int recordLength   = b[0];
		int pageNum        = b[1];
		cout << "pageNum " <<  pageNum << endl;
		int index_this;
		
		BufType pageRecordNum;
		pageRecordNum = b+4;
		int flag = 0;
		for (int pageID = 1; pageID < pageNum; pageID++) { //枚举每一页
			 if (flag) break;
			 BufType b2 = bufPageManager->allocPage(fileID, pageID, index_this, true);
			 for (int i = 0; i < pageRecordNum[pageID]; i++) {//枚举一页中的每条记录
			 	BufType oneRecordPointer = b2 + i * recordLength;
				if (RID == oneRecordPointer[0]) {   //找到符合RID的记录
					cout << "catch you!!" <<endl;
					pageRecordNum[pageID]--;
					b[2]--;
					if (i == (pageRecordNum[pageID]-1)) { //该记录为这一页的最后一条记录,将其删除
						//nothing need to do
					}
					else {                                //该记录不是最后一条，用最后一条将其替代
						BufType endRecordPointer = b2 + (pageRecordNum[pageID]) * recordLength;
						for (int j=0; j<recordLength; j++)
							*(oneRecordPointer+j) = *(endRecordPointer+j);
					}
					flag = 1;
					break;
				}
			 }
		}

		bufPageManager->markDirty(index);
		bufPageManager->markDirty(index_this);
		bufPageManager->close();	
		update_all_record(fileID);
		if (flag)
			return 0;
		else
			return 1;
	}

	int get_attr_key(string attr_key) {
		int attr_key_index = 0;
		for (attr_key_index = 0; attr_key_index < attr_num; attr_key_index++) {
			if (str_vec[attr_key_index] == attr_key) 
				break;
		}
		if (attr_key_index == attr_num) {
			return -1;
		}
		return attr_key_index;
	}

   	vector<string> find_attr(int fileID, string attr_key) {
   		int attr_key_index = get_attr_key(attr_key);
   		vector<string> rtn;
   		update_all_record(fileID);
   		vector< vector<string> > all_record = get_all_record();
   		for (int i = 0; i < all_record.size(); i++) {
   			rtn.push_back(all_record[i][0]);
   			rtn.push_back(all_record[i][1+attr_key_index]);
   		}
   		return rtn;
   	}

	int update_record(int fileID, int RID, string attr_key, string attr_value) {
		int attr_key_index = get_attr_key(attr_key);
		if (attr_key_index < 0) {
			cout << "没有key " << attr_key << endl;
			return 1;
		}
		int index;
		bufPageManager = new BufPageManager(fileManager);
		BufType b = bufPageManager->allocPage(fileID, 0, index, true);
		//总页数
		int recordLength   = b[0];
		int pageNum        = b[1];
		cout << "pageNum " <<  pageNum << endl;
		int index_this;
		BufType pageRecordNum;
		pageRecordNum = b+4;
		int flag = 0;
		for (int pageID = 1; pageID < pageNum; pageID++) { //枚举每一页
			 if (flag) break;
			 BufType b2 = bufPageManager->allocPage(fileID, pageID, index_this, true);
			 for (int i = 0; i < pageRecordNum[pageID]; i++) {//枚举一页中的每条记录
			 	BufType oneRecordPointer = b2 + i * recordLength;
				if (RID == oneRecordPointer[0]) {   //找到符合RID的记录
					cout << "catch you!!" <<endl;
					BufType attrPointer = oneRecordPointer+1;
					int result = write_attr(attr_key_index, attr_value, attrPointer);
					flag = 1;
					if (result == 1) 
						return result; 

					break;
					
				}
			 }
		}
		if (flag == 0) {
			cout << "没有找到对应RID" << RID << endl;
			return 1;
		}
		bufPageManager->markDirty(index_this);
		bufPageManager->close();		
		update_all_record(fileID);	
		return 0;
	}

	int print_one_record(BufType record_ptr) {
		cout << "RID" << *(record_ptr++) << endl;
		for (int i = 0; i < attr_num; i++) {
			cout << str_vec[i] << endl;
			if (attr_types[i] == 0) {
				char* temp = (char*)record_ptr; 
				char c = *(temp++);
				while (c!='\0') {
					cout << c;
					c = *(temp++);
				}
				cout << endl;
			}
			else {
				int* temp = (int*)record_ptr;
				int ii = *(temp++);
				while (ii != -1) {
					cout << ii;
					ii = *(temp++);
				}
				cout << endl;
			}
			record_ptr += attr_pos[i];				
		}
		return 0;
	}

	vector<string> get_one_record(BufType record_ptr) {
		vector<string> rtn;
		stringstream ss;
		ss << *(record_ptr++); 
		string s1 = ss.str();
		rtn.push_back(s1);
		cout<< s1 << endl;
		// cout << "RID" << *(record_ptr++) << endl;
		for (int i = 0; i < attr_num; i++) {
			cout << str_vec[i] << endl;
			string attr_value;
			if (attr_types[i] == 0) {
				char* temp = (char*)record_ptr; 
				char c = *(temp++);
				while (c!='\0') {
					// cout << c;
					attr_value += c;
					c = *(temp++);
				}
				// cout << endl;
			}
			else {
				int* temp = (int*)record_ptr;
				int ii = *(temp++);
				while (ii != -1) {
					// cout << ii;
					attr_value += char(ii+int('0'));
					ii = *(temp++);
				}
				// cout << endl;
			}
			record_ptr += attr_pos[i];		
			rtn.push_back(attr_value);		
		}
		return rtn;
	}

	//每条记录第一个位置要是RID
	int insert_record(int fileID, vector<string> newRecord) {
		bufPageManager = new BufPageManager(fileManager);
		int index;
		BufType b = bufPageManager->allocPage(fileID, 0, index, true);
		
		BufType pageRecordNum;
		pageRecordNum = b+4;
		int flag;
		for (int i = 1; i < total_pages; i++) {
			if (pageRecordNum[i] < record_per_page) {
				flag = i;
				break;
			}
		}
		// cout << "insert test" << endl;
		int index2;
		BufType b2 = bufPageManager->allocPage(fileID, flag, index2, true);
		//找到flag页接下来要插入的记录头指针
		BufType oneRecordPointer = b2 + pageRecordNum[flag] * record_len;
		*(oneRecordPointer++) = b[3];	//Rid
		for (int i = 0; i < attr_num; i++) {
			int result = write_attr(i, newRecord[i], oneRecordPointer);
			if (result != 0)
				return 1;
			else 
				oneRecordPointer += attr_pos[i];
		}
		//总RID数增加
		b[3]++;
		//该页记录数增加
		pageRecordNum[flag]++;
		bufPageManager->markDirty(index);
		bufPageManager->markDirty(index2);
		bufPageManager->close();
		update_all_record(fileID);
		return 0;
	}

	int insertRecord(int fileID, map<string, string> newRecord) {
		bufPageManager = new BufPageManager(fileManager);
		int index;
		BufType b = bufPageManager->allocPage(fileID, 0, index, true);
		//每条记录长度
		int recordLength   = b[0];
		cout << "recordLength " << recordLength << endl;
		//总页数
		int pageNum        = b[1];
		cout << "pageNum " <<  pageNum << endl;
		//总共记录条数(包括已经删除的)
		int recordNum = b[2];
		cout << "recordNum " << recordNum << endl;

		BufType pageRecordNum;
		pageRecordNum = b+4;
		int flag;
		for (int i = 1; i < pageNum; i++) {
			if (pageRecordNum[i] < RECORD_NUM) {
				flag = i;
				break;
			}
		}
		int index2;
		BufType b2 = bufPageManager->allocPage(fileID, flag, index2, true);
		BufType oneRecordPointer = b2 + pageRecordNum[flag] * recordLength;
		*(oneRecordPointer++) = b[3];	//Rid
		*(oneRecordPointer++) = newRecord.size();	//Record size
		BufType attrPointer = oneRecordPointer;

		map<string,string>::iterator it;
		for (it=newRecord.begin(); it!=newRecord.end(); ++it) {
			writeAttr((it->first), attrPointer);
			writeAttr((it->second), attrPointer);
		}
		writeAttr("\r\n",  attrPointer);
			
		//总记录数增加
		b[2]++;
		//总RID数增加
		b[3]++;
		//该页记录数增加
		pageRecordNum[flag]++;
		
		cout << index << endl;
		cout << index2 << endl;
		bufPageManager->markDirty(index);
		bufPageManager->markDirty(index2);
		bufPageManager->close();
		update_all_record(fileID);
		return 0;
	}

	int dropRecord(int fileID, int RID) {
					
		int index;
		bufPageManager = new BufPageManager(fileManager);
		BufType b = bufPageManager->allocPage(fileID, 0, index, true);
		//总页数
		int recordLength   = b[0];
		int pageNum        = b[1];
		cout << "pageNum " <<  pageNum << endl;
		int index_this;
		
		BufType pageRecordNum;
		pageRecordNum = b+4;
		int flag = 0;
		for (int pageID = 1; pageID < pageNum; pageID++) { //枚举每一页
			 if (flag) break;
			 BufType b2 = bufPageManager->allocPage(fileID, pageID, index_this, true);
			 for (int i = 0; i < pageRecordNum[pageID]; i++) {//枚举一页中的每条记录
			 	BufType oneRecordPointer = b2 + i * recordLength;
				if (RID == oneRecordPointer[0]) {   //找到符合RID的记录
					cout << "catch you!!" <<endl;
					pageRecordNum[pageID]--;
					b[2]--;
					if (i == (pageRecordNum[pageID]-1)) { //该记录为这一页的最后一条记录,将其删除
						//nothing need to do
					}
					else {                                //该记录不是最后一条，用最后一条将其替代
						BufType endRecordPointer = b2 + (pageRecordNum[pageID]) * recordLength;
						for (int j=0; j<recordLength; j++)
							*(oneRecordPointer+j) = *(endRecordPointer+j);
					}
					flag = 1;
					break;
					
				}
			 }
		}
		bufPageManager->markDirty(index);
		bufPageManager->markDirty(index_this);
		bufPageManager->close();		
		return 0;
	}

	int updateRecord(int fileID, int RID, map<string, string> newChange) {
		int index;
		bufPageManager = new BufPageManager(fileManager);
		BufType b = bufPageManager->allocPage(fileID, 0, index, true);
		//总页数
		int recordLength   = b[0];
		int pageNum        = b[1];
		cout << "pageNum " <<  pageNum << endl;
		int index_this;
		
		BufType pageRecordNum;
		pageRecordNum = b+4;
		int flag = 0;
		for (int pageID = 1; pageID < pageNum; pageID++) { //枚举每一页
			 if (flag) break;
			 BufType b2 = bufPageManager->allocPage(fileID, pageID, index_this, true);
			 for (int i = 0; i < pageRecordNum[pageID]; i++) {//枚举一页中的每条记录
			 	BufType oneRecordPointer = b2 + i * recordLength;
				if (RID == oneRecordPointer[0]) {   //找到符合RID的记录
					cout << "catch you!!" <<endl;
					BufType attrPointer = oneRecordPointer+2;
					map<string,string>::iterator it;
					for (it=newChange.begin(); it!=newChange.end(); ++it) {
						writeAttr((it->first), attrPointer);
						writeAttr((it->second), attrPointer);
					}
					writeAttr("\r\n",  attrPointer);

					flag = 1;
					break;
					
				}
			 }
		}
		
		bufPageManager->markDirty(index_this);
		bufPageManager->close();		
		return 0;
	}

	int check(map<string, string> condition, BufType record) {
		map<string, string> thisRecord;
		string key, value;
		BufType attr = record+2; 
		for (int i = 0; i < record[1]*2; i++) {
			if (i%2 == 0) {
				key = "";
				value = "";
			}
			while(char(*attr) != '\0') {
				if (i%2) value+=char(*attr); else key+=char(*attr);
				attr++;
			}
			attr++;
			if (i%2 == 1) thisRecord[key] = value;
		}
		map<string,string>::iterator it;
		for (it=thisRecord.begin(); it!=thisRecord.end(); ++it) {
			if (it->second != condition[it->first]) return 0;
		}			
		return 1;
	}


	int findRecord(int fileID, map<string, string> condition) {
		int index;
		bufPageManager = new BufPageManager(fileManager);
		BufType b = bufPageManager->allocPage(fileID, 0, index, true);
		//总页数
		int recordLength   = b[0];
		int pageNum        = b[1];
		cout << "pageNum " <<  pageNum << endl;
		int index_this;
		
		BufType pageRecordNum;
		pageRecordNum = b+4;
		for (int pageID = 1; pageID < pageNum; pageID++) { //枚举每一页
			 BufType b2 = bufPageManager->allocPage(fileID, pageID, index_this, true);
			 for (int i = 0; i < pageRecordNum[pageID]; i++) {//枚举一页中的每条记录
			 	BufType oneRecordPointer = b2 + i * recordLength;
				if ( check(condition, oneRecordPointer) ) {
					printOneRecord(oneRecordPointer);
					return 0;
				//输出
				}
			 }
		} 
		cout << "Not Found!" << endl;
		return 0;
	}

};
	
#endif
