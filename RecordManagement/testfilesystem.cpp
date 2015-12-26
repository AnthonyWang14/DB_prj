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
#include <vector>

using namespace std;

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

void test_create_table() {
	int fileID;
	FileManager* fm = new FileManager();
	fm->openFile("testfile.txt", fileID); //打开文件，fileID是返回的文件id
	RecordManager* test = new RecordManager(fm);
	int attr_num = 3;
	int attr_len[9] = {1, 10, 1, 0, 25, 1, 0, 1, 1};
	int primary_key = 0;
	vector<string> attr_name;
	attr_name.push_back("id");
	attr_name.push_back("name");
	attr_name.push_back("gender");
	test->init(fileID, attr_num, attr_len, primary_key, attr_name);
}

void test_insert_record() {
	int fileID;
	FileManager* fm = new FileManager();
	fm->openFile("testfile.txt", fileID); //打开文件，fileID是返回的文件id
	RecordManager* test = new RecordManager(fm);
	test->load_table_info(fileID);
	vector<string> newRecord;
	newRecord.push_back("106001");
	newRecord.push_back("'CHAD CABELLO'");
	newRecord.push_back("'F'");
	test->insert_record(fileID, newRecord);
	test->insert_record(fileID, newRecord);	
	// for (int i = 0; i < 300; i++) {
	// 	test->insert_record(fileID, newRecord);
	// }
	test->print_all_record(fileID);
}

int main() {
	test_create_table();
	test_insert_record();
	// init();
	// int fileID;
	// fm->openFile("testfile.txt", fileID); //打开文件，fileID是返回的文件id

	// map<string, string> testRecord;
	// testRecord["sex"] = "newman10";
	// testRecord["age"] = "3asd";
	// testRecord["length"] = "1223";
	// RecordManager* test = new RecordManager(fm);
	// test->insertRecord(fileID, testRecord);
	// test->dropRecord(fileID, 0);
	// test->updateRecord(fileID,0, testRecord);
	// test->findRecord(fileID, testRecord);
	// test->printAllRecord(fileID);
	
	return 0;
}
