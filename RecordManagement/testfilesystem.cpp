/*
 * testfilesystem.cpp
 *
 *  Created on: 2015年10月6日
 *      Author: lql
 */
#include "bufmanager/BufPageManager.h"
#include "fileio/FileManager.h"
#include "rm/RecordManager.h"
#include "utils/pagedef.h"
#include <iostream>
#include <map>

void init() {
	FileManager* fm = new FileManager();
	BufPageManager* bpm = new BufPageManager(fm);
	fm->createFile("testfile.txt"); //新建文件
	int fileID;
	fm->openFile("testfile.txt", fileID); //打开文件，fileID是返回的文件id

	int index;
	BufType b = bpm->allocPage(fileID, 0, index, true);
	b[0] = 256;
	b[1] = 100;
	b[2] = 0;
	b[3] = 0;
	for (int i = 0; i < b[1]; i++) {
		b[i+4] = 0;
	}
	bpm->markDirty(index);
	fm->writePage(fileID, 0, b, 0);
	bpm->close();
}

int main() {
	init();
  	FileManager* fm = new FileManager();
	int fileID;
	fm->openFile("testfile.txt", fileID); //打开文件，fileID是返回的文件id

	map<string, string> testRecord;
	testRecord["sex"] = "newman10";
	testRecord["age"] = "3asd";
	testRecord["length"] = "1223";
	RecordManager* test = new RecordManager(fm);
	test->insertRecord(fileID, testRecord);
	test->dropRecord(fileID, 0);
	test->updateRecord(fileID,0, testRecord);
	test->findRecord(fileID, testRecord);
	test->printAllRecord(fileID);
	
	return 0;
}
