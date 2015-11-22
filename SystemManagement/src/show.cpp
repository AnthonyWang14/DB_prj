#include "def.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <direct.h>
#include <fstream>
#include <stdio.h>
using namespace std;


string currentDbRoute = "";

void errorReport(string text) {
	string error = "错误:";
	printf("%s", error.c_str());
	printf("%s\n",text.c_str());
}

void showTb() {
	string currentDbName = "";
	while (currentDbRoute[currentDbRoute.length()-1] != '\\') {
		currentDbName = currentDbRoute[currentDbRoute.length()-1] + currentDbName;
		currentDbRoute.erase(currentDbRoute.end()-1);
	}
	string line;
	int flag;
	printf("\n%s\n", currentDbName.c_str());
	string tempRoute = currentDbRoute + currentDbName + (string)"\\" + (string)TABLELIST;
	ifstream fin(tempRoute.c_str());
	flag = 1;
	while (getline(fin,line)) {
		if (flag && line == TABLELIST) {
			flag = 0;
			continue;
		}
		printf("	%s\n", line.c_str());
	}
	fin.close();
}

void showDb() {
	char route[MAX_PATH];
    getcwd(route, MAX_PATH);
	string routeStr = route;
	while (routeStr[routeStr.length()-1] != '\\') routeStr.erase(routeStr.end()-1);
	routeStr = routeStr + "test\\";
	ifstream fin(ALLDB);
	string line, line2;
	string tempRoute;
	int flag;
	while (getline(fin,line)) {
		printf("\n%s\n", line.c_str());
		tempRoute = routeStr + line + (string)"\\" + (string)TABLELIST;
		ifstream fin2(tempRoute.c_str());
		flag = 1;
		while (getline(fin2,line2)) {
			if (flag && line2 == TABLELIST) {
				flag = 0;
				continue;
			}
			printf("	%s\n", line2.c_str());
		}
		fin2.close();
	}
	fin.close();
}

int check() {
	if (!currentDbRoute.length()) return 1;
	return 0;
}

int main(int argc, char** argv) {

	ifstream fin(CURRENTDB);
	fin >> currentDbRoute;
	fin.close();

	if (argc == 1) {
		errorReport("请输入关键字！");
		return 0;
	}
	string keyWord = argv[1];
	if (keyWord != "DATABASES" && keyWord != "databases" && keyWord != "tables" && keyWord != "TABLES") {
		errorReport("请输入正确的关键字");
		return 0;
	}
	if (argc > 3) {
		errorReport("请勿输入多余信息");
		return 0;
	}
		
	switch (keyWord.length()) {
	case 9: //databases

		showDb();  //显示所有数据库的信息
		break;
	case 6: //tables
		int c = check(); //检查是否选中了数据库
		if (c == 1) {
			errorReport("请选择数据库");
			return 0;
		}
		
		showTb();  //显示所有表的信息
		break;
	}

	
	
	return 0;
}
