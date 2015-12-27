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

void dropTb(string tableName) {
	string tableRoute = currentDbRoute  + (string)"\\" + tableName;
	if (!remove(tableRoute.c_str())) {
		string words = (string)"ɾ����"+tableName+(string)"�ɹ�";
		printf("%s\n", words.c_str());
		string a = (string)"dir "+currentDbRoute+(string)" /B >"+currentDbRoute+(string)"\\"+(string)TABLELIST;
		system(a.c_str());
	}
	else {
		string words = (string)"��"+tableName+(string)"������";
		errorReport(words.c_str());
	}

}

void dropDb(string dbName) {
	char route[MAX_PATH];
    getcwd(route, MAX_PATH);
	string routeStr = route;
	while (routeStr[routeStr.length()-1] != '\\') routeStr.erase(routeStr.end()-1);
	routeStr = routeStr + "test\\" + dbName;
	string a = (string)"rmdir "+routeStr+(string)" /S /Q";
	if (!system(a.c_str())) {
		string words = (string)"ɾ�����ݿ�"+(string)dbName+(string)"�ɹ�";
		printf("%s\n", words.c_str());
		ifstream fin(ALLDB);
		string line;
		string ans = "";
		while (getline(fin,line)) {
			if (line != dbName)
				ans = ans + line;
		}
		fin.close();
		ofstream fout(ALLDB);
		fout << ans;
		fout.close();

		if (currentDbRoute == routeStr) {
			ofstream fout(CURRENTDB);
			fout << "";
			fout.close();
		}
	}
	else {
		string words = (string)"���ݿ�"+dbName+(string)"������";
		errorReport(words.c_str());
	}
}

int check() {
	if (!currentDbRoute.length()) return 1;
	return 0;
}

int main(int argc, char** argv) {

	ifstream fin(CURRENTDB);
	fin >> currentDbRoute ;
	fin.close();

	if (argc == 1) {
		errorReport("������ؼ��֣�");
		return 0;
	}
	string keyWord = argv[1];
	if (keyWord != "DATABASE" && keyWord != "database" && keyWord != "table" && keyWord != "TABLE") {
		errorReport("��������ȷ�Ĺؼ���");
		return 0;
	}

	switch (keyWord.length()) {
	case 8: //database

		if (argc == 2) {
			errorReport("��������Ҫɾ�������ݿ�����");
			return 0;
		}
		if (argc > 3) {
			errorReport("�������������Ϣ");
			return 0;
		}
		dropDb(argv[2]);  //ɾ�����ݿ�
		break;
	case 5: //table
		if (argc == 2) {
			errorReport("��������Ҫɾ���ı������");
			return 0;
		}
		if (argc > 3) {
			errorReport("�������������Ϣ");
			return 0;
		}

		int c = check(); //����Ƿ�ѡ�������ݿ�
		if (c == 1) {
			errorReport("��ѡ�����ݿ�");
			return 0;
		}
		dropTb(argv[2]);       //ɾ����
		break;
	}

	
	
	return 0;
}
