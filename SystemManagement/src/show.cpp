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
	string error = "����:";
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
		errorReport("������ؼ��֣�");
		return 0;
	}
	string keyWord = argv[1];
	if (keyWord != "DATABASES" && keyWord != "databases" && keyWord != "tables" && keyWord != "TABLES") {
		errorReport("��������ȷ�Ĺؼ���");
		return 0;
	}
	if (argc > 3) {
		errorReport("�������������Ϣ");
		return 0;
	}
		
	switch (keyWord.length()) {
	case 9: //databases

		showDb();  //��ʾ�������ݿ����Ϣ
		break;
	case 6: //tables
		int c = check(); //����Ƿ�ѡ�������ݿ�
		if (c == 1) {
			errorReport("��ѡ�����ݿ�");
			return 0;
		}
		
		showTb();  //��ʾ���б����Ϣ
		break;
	}

	
	
	return 0;
}
