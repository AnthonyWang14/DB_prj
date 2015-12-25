#ifndef RECORD_MANAGER
#define RECORD_MANAGER
#include <string>
#include <stdio.h>
#include <iostream>
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
	void load_table_info() {
		cout << "显示表信息*****************" << endl;
		BufPageManager* bpm = new BufPageManager(fileManager);
		fileManager->createFile("testfile.txt"); //新建文件
		int fileID;
		fileManager->openFile("testfile.txt", fileID); //打开文件，fileID是返回的文件id
		int index;
		BufType b = bpm->allocPage(fileID, 0, index, true);

		cout << "每条记录长度 " 	<< b[0] << endl;
		cout << "总页数 "		<< b[1] << endl;
		cout << "每页记录个数 " 	<< b[2] << endl;
		cout << "已有记录条数 "	<< b[3] << endl;
		cout << "属性个数 "		<< b[b[1] + 4] << endl;
		int attr_num = b[b[1]+4];
		for (int i = 0; i < attr_num; i++) {
			int attr_type = b[b[1]+5+3*i];
			int attr_len = b[b[1]+5+3*i+1];
			int attr_null = b[b[1]+5+3*i+2];
			cout << "第" << i << "个属性" << endl;
			cout << "类型 " << attr_type << endl;
			cout << "长度 " << attr_len << endl;
			cout << "是否为空 " << attr_null << endl;
		}
		cout << "主键 " << b[b[1]+5+3*attr_num] << endl;
		char* attr_name = (char *)(b+b[1]+6+3*attr_num);
		for (int i = 0; i < attr_num; i++) {
			// int attr_name_len = strlen(attr_name);
			// char* temp;
			// sscanf(attr_name, "%s", temp);
			// printf("%s\n", temp);
			while (*attr_name != '\0') {
				printf("%c", *attr_name);
				attr_name += 1;
			}
			printf("\n");
		}
	}

	void init(int attr_num, int* attr_info, int primary_key, vector<string> attr_name) {
		BufPageManager* bpm = new BufPageManager(fileManager);
		fileManager->createFile("testfile.txt"); //新建文件
		int fileID;
		fileManager->openFile("testfile.txt", fileID); //打开文件，fileID是返回的文件id

		int index;
		BufType b = bpm->allocPage(fileID, 0, index, true);
		// 每条记录长度
		b[0] = 0;
		int record_len = 0;
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
			record_len += (attr_type) ? attr_len : (attr_len/(int_size/char_size)+1);
		}
		b[0] = record_len;
		b[2] = 8000/(record_len*int_size);
		b[b[1]+5+3*attr_num] = primary_key;
		char* attr_name_str = (char *)(b+b[1]+5+3*attr_num+1);
		for (int i = 0; i < attr_num; i++) {
			string name = attr_name[i];
			int len = name.length();
			name.copy(attr_name_str, len, 0); 
			*(attr_name_str+len+1) = '\0';
			attr_name_str += (len+1);
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
