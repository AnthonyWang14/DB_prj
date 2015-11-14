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
