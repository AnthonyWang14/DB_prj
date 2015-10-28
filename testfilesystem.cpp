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
	b[1] = 10;
	b[2] = 0;
	bpm->markDirty(index);
	fm->writePage(fileID, 0, b, 0);
	bpm->close();
}

int main() {
	// init();
  	FileManager* fm = new FileManager();
	fm->createFile("testfile.txt"); //新建文件
	int fileID;
	fm->openFile("testfile.txt", fileID); //打开文件，fileID是返回的文件id

	map<string, string> whsb;
	whsb["sex"] = "manasdfasdf";
	whsb["age"] = "11";
	whsb["length"] = "3";
	RecordManager* test = new RecordManager(fm);
	test->insertRecord(fileID, whsb);
	test->insertRecord(fileID, whsb);

	// for (int pageID = 0; pageID < 1000; ++ pageID) {
	// 	int index;
	// 	//为pageID获取一个缓存页
	// 	BufType b = bpm->allocPage(fileID, pageID, index, false);
	// 	b[0] = pageID; //对缓存页进行写操作 
	// 	bpm->markDirty(index); //标记脏页
	// }
	// for (int pageID = 0; pageID < 1000; ++ pageID) {
	// 	int index;
	// 	//为pageID获取一个缓存页
	// 	BufType b = bpm->getPage(fileID, pageID, index);
	// 	cout << b[0] << endl; 		//读取缓存页中第一个整数
	// 	bpm->access(index); //标记访问
	// }
	return 0;
}
