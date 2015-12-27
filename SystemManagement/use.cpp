#include "def.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <direct.h>
#include <fstream>
using namespace std;



void errorReport(string text) {
	string error = "����:";
	printf("%s", error.c_str());
	printf("%s\n",text.c_str());
}


int main(int argc, char** argv) {
	if (argc == 1) {
		errorReport("������ؼ��֣�");
		return 0;
	}
	string keyWord = argv[1];
	if (keyWord != "DATABASE" && keyWord != "database") {
		errorReport("��������ȷ�Ĺؼ���");
		return 0;
	}
	if (argc == 2) {
		errorReport("��������Ҫ��ת�����ݿ�����");
		return 0;
	}
	string dbName = argv[2];
	if (argc > 3) {
		errorReport("�������������Ϣ");
		return 0;
	}
	

	char route[MAX_PATH];
    getcwd(route, MAX_PATH);
	string routeStr = route;
	while (routeStr[routeStr.length()-1] != '\\') routeStr.erase(routeStr.end()-1);
	routeStr = routeStr + "test\\" + dbName;
	if(_access(routeStr.c_str(), 0)!=-1) {
		string words = (string)"�л������ݿ�"+dbName+(string)"�ɹ�";
		ofstream fout(CURRENTDB);
		fout << routeStr << endl;
		fout.close();
		printf("%s\n", words.c_str());
	}
	else {
		string words = (string)"���ݿ�"+dbName+(string)"������";
		errorReport(words.c_str());
	}



	return 0;
}
