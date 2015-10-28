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
	void printRecord(BufType record) {

	}

	void writeAttr(string str, int length, BufType& attrPointer) {
		cout << str << endl;
		for (int i=0; i<length; i++) {
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
		cout << recordLength << endl;
		//总页数
		int pageNum        = b[1];
		cout << pageNum << endl;
		//页里面记录条数
		int recordNum = b[2];
		cout << recordNum << endl;

		BufType pageRecordNum;
		pageRecordNum = b+3;
		int flag;
		for (int i = 0; i < pageNum; i++) {
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
			writeAttr((it->first), (it->first).length(), attrPointer);
			writeAttr((it->second), (it->first).length(), attrPointer);
		}
		b[2]++;
		pageRecordNum[flag]++;
		cout << index << endl;
		cout << index2 << endl;
		bufPageManager->markDirty(index);
		bufPageManager->markDirty(index2);
		bufPageManager->close();
		return 0;
	}

	int deleteRecord(int fileID) {
		
	}

	int updateRecord() {
	}
	
	int findRecord() {
	
	}
};
#endif