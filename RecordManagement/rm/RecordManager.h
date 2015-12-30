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
	int first_pageID;
	vector<string> str_vec;
	// vector<int> record_used_per_page;
	// 关于各种属性的参数
	vector<int> attr_lens;
	vector<int> attr_types;
	vector<int> attr_nulls;
	vector<int> attr_pos;
	vector<int> page_record_num;
	vector< vector<string> > all_record;
	vector<string> primary_values;
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
	 	bufPageManager = new BufPageManager(fileManager);
	 	int index;
	 	BufType b = bufPageManager->allocPage(fileID, 0, index, true);

	 	record_len = b[0];
		// 总共的数据页个数
	 	total_pages = b[1];
	 	record_per_page = b[2];
	 	RIDnumber = b[3];
		// for (int i = 0; i < b[1]; i++) {
		// 	record_used_per_page.push_back(record_ptr[i]);
		// }


	 	attr_num = b[4];
	 	for (int i = 0; i < attr_num; i++) {
	 		int attr_type = b[5+3*i];
	 		int attr_len = b[5+3*i+1];
	 		int attr_null = b[5+3*i+2];
	 		attr_types.push_back(attr_type);
	 		attr_lens.push_back(attr_len);
	 		attr_nulls.push_back(attr_null);
	 		attr_pos.push_back((attr_type) ? (attr_len+1) : ((attr_len+1)/4+1));
	 	}
	 	primary_key = b[5+3*attr_num];
	 	char* attr_name = (char *)(b+6+3*attr_num);

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
			//cout << temp << endl;
	 	}
	 	bufPageManager->close();
	 	show_table_info();
	 	load_all_page_record_num(fileID);
	 	update_all_record(fileID);
	 }

	 void show_table_info() {
	 	cout << "***************显示表信息***************" << endl;
	 	cout << "每条记录长度 " 	<< record_len << endl;
	 	cout << "总页数 "		<< total_pages << endl;
	 	cout << "每页记录个数 " 	<< record_per_page << endl;
	 	cout << "RID(记录个数) "	<< RIDnumber << endl;
	 	if (primary_key < 0) 
	 		cout << "没有主键" << endl;
	 	else 
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
	 	b[1] = PAGE_INT_NUM*PAGE_FILE_NUM;
		// 每页的记录数，根据每条记录长度来计算
	 	b[2] = 256;
		// 总记录条数RID
	 	b[3] = 0;
	 	// BufType record_ptr = b+4;
	 	// for (int i = 0; i < b[1]; i++) {
	 	// 	record_ptr[i] = 0; 
	 	// }
	 	cout << "b[1]" << b[1] << endl;
	 	// for (int page_ID = 0; page_ID < b[1]; page_ID++) {
		 // 	int page_in_file = page_ID/PAGE_INT_NUM + 1;
		 // 	int index2;
		 // 	BufType b2 = bufPageManager->allocPage(fileID, page_in_file, index2, true);
		 // 	*(b2 + page_ID%PAGE_INT_NUM) = 0;
		 // 	bufPageManager->markDirty(index2);
	 	// }

	 	//初始化[1,10]页中的数据全为0
	 	for (int i = 1; i < PAGE_FILE_NUM+1; i++) {
	 		int index2;
		 	BufType b2 = bpm->allocPage(fileID, i, index2, true);
		 	for (int j = 0; j < PAGE_INT_NUM; j++)
		 		*(b2+j) = 0;
		 	bpm->markDirty(index2);
	 	}

	 	int int_size = sizeof(int);
	 	int char_size = sizeof(char);
	 	cout << "int size" << int_size << endl;
	 	cout << "char size" << char_size << endl;
		// b[b[1] + 3] = attr_num;
	 	BufType attr_ptr = b+4;
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

	 	// null位图
	 	record_len += attr_num;
	 	b[0] = record_len;
	 	b[2] = PAGE_INT_NUM/record_len;
	 	b[5+3*attr_num] = primary_key;
	 	char* attr_name_str = (char *)(b+5+3*attr_num+1);
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

	// 写入某个属性（属性编号，具体值的字符串，BufType）
	// varchar类型的前后会有单引号，只存单引号之间的部分
	 int write_attr(int attr, string record_attr, BufType b) {
		// cout << record_attr << endl;
		// 如果输入长度大于要求长度的话则返回1
		// 分int和varchar判断

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
			//cout << attr_types[attr] << endl;
			//cout << attr_num << endl;
	 		char *temp = (char*)b;
	 		if (record_attr[0] != '\'') {
	 			cout << str_vec[attr] << "字段必须是字符串" << endl;
	 			// cout << "你字符串没有用两个引号框起来啊" << record_attr;
	 			// cout << "类型错误" << endl;
	 			return 1;
	 		}
	 		for (int i = 1; i < record_attr.length()-1; i++) {
	 			temp[i-1] = (char)record_attr[i];
	 		}
	 		temp[record_attr.length()-2] = '\0';
			//delete temp;
	 		return 0;
	 	}
		// int
	 	else {

	 		int *temp = (int *)b;
	 		if (record_attr[0] == '\'') {
	 			cout << str_vec[attr] << "字段必须是整型" << endl;
	 			return 1;
	 		}
	 		for (int i = 0; i < record_attr.length(); i++) {
	 			temp[i] = int(record_attr[i]-'0');
	 		}
	 		temp[record_attr.length()] = -1;
			//delete temp;
	 		return 0;
	 	}
	 }

	// 从文件中导入每页记录数的向量
	 void load_all_page_record_num(int fileID) {
	 	page_record_num.clear();
	 	bufPageManager = new BufPageManager(fileManager);
	 	for (int i = 1; i < (PAGE_FILE_NUM+1); i++) {
	 		int index;
	 		BufType b = bufPageManager->allocPage(fileID, i, index, true);
	 		for (int j = 0; j < PAGE_INT_NUM; j++) {
	 			page_record_num.push_back(*(b+j));
	 		}
	 	}
	 	bufPageManager->close();
	 	cout << "page_record_num_size" << page_record_num.size() << endl;
	 }

	// // 第page_ID个数据页写回，同时更新内存和文件中的数值
	//  void write_back_page_record_num(int fileID, int page_ID, int record_num) {
	// 	// 更新内存中的值
	//  	page_record_num[page_ID] = record_num;
	// 	// 打开的缓存页编号
	//  	int page_in_file = page_ID/PAGE_INT_NUM + 1;
	//  	bufPageManager = new BufPageManager(fileManager);
	//  	int index;
	//  	BufType b = bufPageManager->allocPage(fileID, page_in_file, index, true);
	//  	*(b + page_ID%PAGE_INT_NUM) = record_num;
	//  	bufPageManager->markDirty(index);
	//  	bufPageManager->close();
	//  }

	 void update_all_record(int fileID) {
	 	all_record.clear();
		primary_values.clear();
	 	bufPageManager = new BufPageManager(fileManager);
	 	int index;
	 	BufType b = bufPageManager->allocPage(fileID, 0, index, true);
		//每条记录长度
	 	int recordLength   = b[0];
		//cout << "recordLength: " << recordLength << endl;
		//总页数
	 	int pageNum        = b[1];
		//cout << "pageNum: " << pageNum << endl;
		//总共记录条数(包括已经删除的)
	 	int recordNum = b[3];

	 	for (int page_ID = 0; page_ID < page_record_num.size(); page_ID++) {
	 		if (!page_record_num[page_ID]) continue;
	 		int index_this;
	 		BufType b2 = bufPageManager->allocPage(fileID, (page_ID+PAGE_FILE_NUM+1), index_this, true);
	 		// cout << page_record_num[page_ID] << endl;
	 		for (int i = 0; i < page_record_num[page_ID]; i++) {
	 			BufType oneRecordPointer = b2 + i * recordLength;
	 			vector<string> test_rtn = get_one_record(oneRecordPointer);
	 			all_record.push_back(test_rtn);
	 			if (primary_key >= 0)
	 				primary_values.push_back(test_rtn[1+primary_key]);
	 		}
	 	}
	 	bufPageManager->close();
	 }

	 void print_all_record(int fileID) {
	 	update_all_record(fileID);
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

	 vector<string> get_attr_name() {
	 	return str_vec;
	 }

	 vector<int> get_attr_type() {
	 	return attr_types;
	 }

	 vector< vector<string> > get_all_record(int fileID) {
	 	update_all_record(fileID);
	 	return all_record;
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
	 	// vector< vector<string> > all_record = get_all_record();
	 	for (int i = 0; i < all_record.size(); i++) {
	 		rtn.push_back(all_record[i][0]);
	 		rtn.push_back(all_record[i][1+attr_key_index]);
	 	}
	 	return rtn;
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
	 	// cout << "get one record" << endl;
	 	vector<string> rtn;
	 	BufType null_ptr = record_ptr + record_len - attr_num;
	 	// cout << null_ptr[1] << endl;
	 	// Rid
	 	stringstream ss;
	 	ss << *(record_ptr++); 
	 	string s1 = ss.str();
	 	rtn.push_back(s1);


	 	for (int i = 0; i < attr_num; i++) {
			//cout << str_vec[i] << endl;
	 		string attr_value;
	 		// cout << null_ptr[i] << endl;
	 		if (null_ptr[i]==0) {

	 			attr_value = "NULL";
	 		}
	 		else {
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
	 		}
	 		record_ptr += attr_pos[i];		
	 		rtn.push_back(attr_value);		
	 	}
	 	return rtn;
	 }

	//每条记录第一个位置要是RID
	 int insert_record(int fileID, vector<string> newRecord, vector<int> nulls) {
	 	// bufPageManager = new BufPageManager(fileManager);
	 	int index;
	 	BufType b = bufPageManager->allocPage(fileID, 0, index, true);

	 	// flag表示要插入的数据页
	 	int flag;
	 	for (int page_ID = 0; page_ID < page_record_num.size(); page_ID++) {
	 		if (page_record_num[page_ID] < record_per_page) {
	 			flag = page_ID;
	 			break;
	 		}
	 		// cout << page_record_num[page_ID];
	 	}
	 	// cout << "要插入第" << flag << "个数据页" << endl;
	 	int index2;
	 	BufType b2 = bufPageManager->allocPage(fileID, flag+PAGE_FILE_NUM+1, index2, true);
		//找到flag页接下来要插入的记录头指针
	 	BufType oneRecordPointer = b2 + page_record_num[flag] * record_len;
	 	BufType null_ptr = oneRecordPointer + record_len - attr_num;
		*(oneRecordPointer++) = b[3];	//Rid

		// for (int i = 0; i < attr_num; i++) {
		// 	null_ptr[i] = nulls[i];
		// 	if (nulls[i] == 0 && attr_nulls[i] ==1) {
		// 		cout << str_vec[i] << "属性不能位NULL" << endl;
		// 		return 1;
		// 	}
		// }
		for (int i = 0; i < attr_num; i++) {
			null_ptr[i] = nulls[i];
			if (nulls[i] == 0) {
				if (attr_nulls[i] == 1) {
					cout << str_vec[i] << "属性不能为NULL" << endl;
					return 1;
				}
				// cout << "null" << i << endl;
				// cout << null_ptr[i] << endl;
				// null_ptr[i] = nulls[i];
				oneRecordPointer += attr_pos[i];				
			}
			else {
				//检查主键
				if (i == primary_key) {
					string w;
			 		if (attr_types[i] == 0) {
			 			w = newRecord[i].substr(1, newRecord[i].length()-2);
			 		}
			 		else {
			 			w = newRecord[i];
			 		}
			 		for (int j = 0; j < primary_values.size(); j++) {
			 			if (primary_values[j] == w) {
			 				cout << "主键重复 " << w << endl;
			 				return 1;
			 			}
			 		}
			 		// 主键不重复则插入
			 		primary_values.push_back(w);
				}
				int result = write_attr(i, newRecord[i], oneRecordPointer);
				if (result != 0)
					return 1;
				else 
					oneRecordPointer += attr_pos[i];
			}
		}		
		//总RID数增加
		b[3]++;
		// //该页记录数增加
		// // write_back_page_record_num(fileID, flag, page_record_num[flag]+1);
		// // 更新内存中的值
	 	page_record_num[flag]++;
		// // 打开的缓存记录个数页编号
	 	int page_in_file = flag/PAGE_INT_NUM + 1;
	 	int index3;
	 	BufType b3 = bufPageManager->allocPage(fileID, page_in_file, index3, true);
	 	*(b3 + flag%PAGE_INT_NUM) = (unsigned int)page_record_num[flag];

		bufPageManager->markDirty(index);
		bufPageManager->markDirty(index2);
		bufPageManager->markDirty(index3);
		bufPageManager->close();
		// delete bufPageManager;
		// update_all_record(fileID);
		return 0;
	}

	void delete_primary_value(string w) {
		cout << "删除主键值" << w << endl;
		vector<string>::iterator it;
		for (it = primary_values.begin(); it!=primary_values.end(); it++) {
			if (*it == w) {
				primary_values.erase(it);
				break;
			}
		}
		cout << "asdas" << endl;
	}
	int update_record(int fileID, int RID, string attr_key, string attr_value, int nulls) {
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
		int index_this;
		int flag = 0;
		// 枚举每一页
		for (int page_ID = 0; page_ID < page_record_num.size(); page_ID++) {
			if (flag) break;
			BufType b2 = bufPageManager->allocPage(fileID, page_ID+PAGE_FILE_NUM+1, index_this, true);
			for (int i = 0; i < page_record_num[page_ID]; i++) {//枚举一页中的每条记录
			 	BufType oneRecordPointer = b2 + i * recordLength;
			 	// 得到该记录原来的字符串
			 	BufType null_ptr = oneRecordPointer + recordLength - attr_num;
				if (RID == oneRecordPointer[0]) {   //找到符合RID的记录
					//cout << "catch you!!" <<endl;
					BufType attrPointer = oneRecordPointer+1;
					// 给null赋值
			 		null_ptr[attr_key_index] = nulls;
			 		if (nulls == 1) {
						// 处理主键问题
						vector<string> test_rtn = get_one_record(oneRecordPointer);
						// 找到对应的属性地址
						for (int k = 0; k < attr_key_index; k++)
							attrPointer += attr_pos[k];
						if (attr_key_index == primary_key) {
							string w;
					 		if (attr_types[attr_key_index] == 0) {
					 			w = attr_value.substr(1, attr_value.length()-2);
					 		}
					 		else {
					 			w = attr_value;
					 		}
					 		for (int value = 0; value < primary_values.size(); value++) {
					 			if (primary_values[value] == w) {
					 				cout << "主键重复 " << w << endl;
					 				return 1;
					 			}
					 		}
					 		// 主键不重复则插入w并删除原来的值
					 		primary_values.push_back(w);
					 		delete_primary_value(test_rtn[1+primary_key]);
						}
						// 处理主键问题
						int result = write_attr(attr_key_index, attr_value, attrPointer);
						flag = 1;
						if (result == 1) {
							bufPageManager->close();
							return result;
						}
						break;
					}
					else {
						if (attr_nulls[attr_key_index] == 1) {
							cout << str_vec[attr_key_index] << "属性不能为NULL" << endl;
							return 1;
						}
					}
				}
			}			
		}
		if (flag == 0) {
			cout << "没有找到对应RID" << RID << endl;
			bufPageManager->close();
			return 1;
		}

		bufPageManager->markDirty(index_this);
		bufPageManager->close();		
		// update_all_record(fileID);	
		return 0;
	}

	int delete_record(int fileID, int RID) {
		int index;
		bufPageManager = new BufPageManager(fileManager);
		BufType b = bufPageManager->allocPage(fileID, 0, index, true);
		//总页数
		int recordLength   = b[0];
		int pageNum        = b[1];
		//cout << "pageNum " <<  pageNum << endl;
		int index_this;
		int flag = 0;
		for (int page_ID = 0; page_ID < page_record_num.size(); page_ID++) { //枚举每一页
			if (flag) break;
			BufType b2 = bufPageManager->allocPage(fileID, page_ID+PAGE_FILE_NUM+1, index_this, true);
			 for (int i = 0; i < page_record_num[page_ID]; i++) {//枚举一页中的每条记录
			 	BufType oneRecordPointer = b2 + i * recordLength;
				if (RID == oneRecordPointer[0]) {   //找到符合RID的记录
					//cout << "catch you!!" <<endl;
					vector<string> test_rtn = get_one_record(oneRecordPointer);
					// for (int k = 0; k < attr_key_index; k++)
					// 	attrPointer += attr_pos[k];
					// if (attr_key_index == primary_key) {
					// 	string w;
				 // 		if (attr_types[attr_key_index] == 0) {
				 // 			w = attr_value.substr(1, attr_value.length()-2);
				 // 		}
				 // 		else {
				 // 			w = attr_value;
				 // 		}
				 // 		for (int value = 0; value < primary_values.size(); value++) {
				 // 			if (primary_values[value] == w) {
				 // 				cout << "主键重复 " << w << endl;
				 // 				return 1;
				 // 			}
				 // 		}
				 // 		// 主键不重复则插入w并删除原来的值
					// }
					//有主键则处理主键
					if (primary_key >= 0)
						delete_primary_value(test_rtn[1+primary_key]);

					cout << "RID " << RID << endl;
					cout << "pageRecordNum" << page_record_num[page_ID] << " record " << i << endl;

					if (i == (page_record_num[page_ID]-1)) { //该记录为这一页的最后一条记录,将其删除
						//nothing need to do
						cout << "delete last record" << endl;
					}
					else {                                //该记录不是最后一条，用最后一条将其替代
						BufType endRecordPointer = b2 + (page_record_num[page_ID]-1) * recordLength;
						for (int j=0; j<recordLength; j++)
							*(oneRecordPointer+j) = *(endRecordPointer+j);
					}
					flag = 1;
				 	page_record_num[page_ID]--;
					// 打开的缓存记录个数页编号
				 	int page_in_file = page_ID/PAGE_INT_NUM + 1;
				 	int index3;
				 	BufType b3 = bufPageManager->allocPage(fileID, page_in_file, index3, true);
				 	*(b3 + page_ID%PAGE_INT_NUM) = (unsigned int)page_record_num[page_ID];
				 	bufPageManager->markDirty(index3);
					break;
				}
			}
		}
		bufPageManager->markDirty(index);
		bufPageManager->markDirty(index_this);
		bufPageManager->close();	
		// update_all_record(fileID);
		if (flag)
			return 0;
		else
			return 1;
	}
};

#endif
