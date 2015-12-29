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
	test->load_table_info(fileID);
}

void test_insert_record() {
	int fileID;
	FileManager* fm = new FileManager();
	fm->openFile("testfile.txt", fileID); //打开文件，fileID是返回的文件id
	RecordManager* test = new RecordManager(fm);
	test->load_table_info(fileID);
	vector<string> newRecord, newRecord2;
	newRecord.push_back("106001");
	newRecord.push_back("'CHAD CABELLO'");
	newRecord.push_back("'F'");
	newRecord2.push_back("106002");
	newRecord2.push_back("'CHAD CABELLO'");
	newRecord2.push_back("'M'");
	test->insert_record(fileID, newRecord);	
	test->insert_record(fileID, newRecord2);	

	// for (int i = 0; i < 50000; i++) {
	// 	if (i%100 == 0)
	// 		cout << i << endl;
	// 	test->insert_record(fileID, newRecord);
	// }
	test->print_all_record(fileID);
}

void test_delete_record() {
	int fileID;
	FileManager* fm = new FileManager();
	fm->openFile("testfile.txt", fileID); //打开文件，fileID是返回的文件id
	RecordManager* test = new RecordManager(fm);
	test->load_table_info(fileID);
	vector<string> newRecord, newRecord2, newRecord3;

	newRecord.push_back("106001");
	newRecord.push_back("'CHAD CABELLO'");
	newRecord.push_back("'F'");
	newRecord2.push_back("106002");
	newRecord2.push_back("'CHAD CABELLO'");
	newRecord2.push_back("'M'");
	newRecord3.push_back("106001");
	newRecord3.push_back("'CHAD CABELLO'");
	newRecord3.push_back("'F'");
	test->insert_record(fileID, newRecord);	
	test->insert_record(fileID, newRecord2);
	test->print_all_record(fileID);
	test->delete_record(fileID, 0);
	test->insert_record(fileID, newRecord);	
	test->print_all_record(fileID);
	// for (int i = 0; i < 9000; i++) {
	// 	test->insert_record(fileID, newRecord);
	// }
	// test->print_all_record();
}

void test_update_record() {
	int fileID;
	FileManager* fm = new FileManager();
	fm->openFile("testfile.txt", fileID); //打开文件，fileID是返回的文件id
	RecordManager* test = new RecordManager(fm);
	test->load_table_info(fileID);
	test->print_all_record(fileID);
	test->update_record(fileID, 0, "id", "106002");
	test->update_record(fileID, 1, "name", "'wangsu'");
	if (test->update_record(fileID, 2, "heheh", "21331312111")) {
		cout << "wrong update" << endl;
	}
	else {
		cout << "success update" << endl;
	}
	test->print_all_record(fileID);
}

void test_find_attr() {
	int fileID;
	FileManager* fm = new FileManager();
	fm->openFile("testfile.txt", fileID); //打开文件，fileID是返回的文件id
	RecordManager* test = new RecordManager(fm);
	test->load_table_info(fileID);
	vector<string> rtn = test->find_attr(fileID, "hehe");
	for (int i = 0; i < rtn.size(); i++) {
		cout << rtn[i] << endl;
	}	

	vector<string> rtn2 = test->find_attr(fileID, "name");
	for (int i = 0; i < rtn2.size(); i++) {
		cout << rtn2[i] << endl;
	}
}

int main() {
	test_create_table();
	// test_insert_record();
	// test_update_record();
	// test_update_record();
	// test_find_attr();
	test_delete_record();
	// test_insert_record();
	// test_update_record();
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
