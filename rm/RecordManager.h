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
		cout << "Rid" << record[0] << endl;
		cout << "attr num" << record[1] << endl;
		BufType attr = record+2; 
		for (int i = 0; i < record[1]; i++) {
			while(char(*attr) != '\0') {
				cout << char(*attr);
				attr++;
			}
			cout << endl;
		}
		return;
	}

	//打印所有记录
	void printAllRecord(int fileID) {
		bufPageManager = new BufPageManager(fileManager);
		int index;
		BufType b = bufPageManager->allocPage(fileID, 0, index, true);
		//每条记录长度
		int recordLength   = b[0];
		cout << recordLength << endl;
		//总页数
		int pageNum        = b[1];
		cout << pageNum << endl;
		//总共记录条数(包括已经删除的)
		int recordNum = b[2];
		cout << recordNum << endl;

		//缓存了所有页面record条数
		BufType pageRecordNum;
		pageRecordNum = b+3;
		for (int pageID = 1; pageID < pageNum; pageID++) {
			cout << "pageID" << pageID << "recordNum this page" << pageRecordNum[pageID] << endl;
			int index_this;
			// BufType b2 = bufPageManager->allocPage(fileID, pageID, index_this, true);
			// for (int i = 0; i < pageRecordNum[pageID]; i++) {
			// 	BufType oneRecordPointer = b2 + pageRecordNum[pageID] * recordLength;
			// 	printOneRecord(oneRecordPointer);
			// }
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
		pageRecordNum = b+3;
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
		*(oneRecordPointer++) = recordNum;	//Rid
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
		//该页记录数增加
		pageRecordNum[flag]++;
		
		cout << index << endl;
		cout << index2 << endl;
		bufPageManager->markDirty(index);
		bufPageManager->markDirty(index2);
		bufPageManager->close();
		return 0;
	}

	int deleteRecord(int fileID) {
		return 0;
	}

	int updateRecord() {
		return 0;
	}
	
	int findRecord() {
		return 0;
	}
};
#endif