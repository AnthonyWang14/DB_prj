#include "def.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <direct.h>
#include <fstream>
using namespace std;

string tableName = "";
string currentDbRoute = "";
void errorReport(string text) {
	string error = "����:";
	printf("%s", error.c_str());
	printf("%s\n",text.c_str());
}

void analyze(string text) {
	int i=0;
	text += '(';
	while (text[i]!='(') {
		tableName += text[i];
		i++;
	}
}

void createTb() {
	string tableRoute = currentDbRoute + (string)"\\" + tableName;
	cout << tableRoute << endl;
	ofstream fout(tableRoute.c_str());
	if (fout) {
		string words = (string)"������"+tableName+(string)"�ɹ�";
		printf("%s\n", words.c_str());
		
		string a = (string)"dir "+currentDbRoute+(string)" /B >"+currentDbRoute+(string)"\\"+(string)TABLELIST;
		cout << a << endl;
		system(a.c_str());
	}
	else {
		string words = (string)"������"+tableName+(string)"ʧ��";
		errorReport(words.c_str());
	}
}

void createDb(string dbName) {
	char route[MAX_PATH];
    getcwd(route, MAX_PATH);
	string routeStr = route;
	while (routeStr[routeStr.length()-1] != '\\') routeStr.erase(routeStr.end()-1);
	routeStr = routeStr + "test\\" + dbName;
	if(_access(routeStr.c_str(), 0)==-1) {
		_mkdir(routeStr.c_str());
		string words = (string)"�������ݿ�"+dbName+(string)"�ɹ�";
		printf("%s\n", words.c_str());
		ofstream fout(ALLDB,ios::app); 
		fout << dbName;
		fout << "\n";
		fout.close();
	}
	else {
		string words = (string)"���ݿ�"+dbName+(string)"�Ѿ�����";
		errorReport(words.c_str());
	}
}

int check(string text) {
	if (!currentDbRoute.length()) return 2;
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
	if (keyWord != "DATABASE" && keyWord != "database" && keyWord != "table" && keyWord != "TABLE" ) {
		errorReport("��������ȷ�Ĺؼ���");
		return 0;
	}
	switch (keyWord.length()) {
	case 8: //database

		if (argc == 2) {
			errorReport("��������Ҫ���������ݿ�����");
			return 0;
		}
		if (argc > 3) {
			errorReport("�������������Ϣ");
			return 0;
		}
		createDb(argv[2]);  //�½����ݿ�
		break;
	case 5: //table
		if (argc == 2) {
			errorReport("��������Ҫ�����ı������");
			return 0;
		}
		int c = check(argv[2]); //��������ʽ�Լ��Ƿ�ѡ�������ݿ�
		if (c==1) {
			errorReport("�����ĸ�ʽ����");
			return 0;
		}
		if (c==2) {
			errorReport("��ѡ�����ݿ�");
			return 0;
		}

		analyze(argv[2]); //��������
		createTb();       //�½���
		
		break;
	}
	return 0;
}
