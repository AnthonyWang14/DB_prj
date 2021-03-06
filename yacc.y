%{
#include "main.h"	
#include <vector>
#include <stack>
#include <fcntl.h>
#include <unistd.h>          //chdir()
#include <sys/stat.h>        //mkdir()
#include <sys/types.h>       //mkdir()
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <errno.h>           //perror()
#include "SystemManagement/def.h"

 
#include "RecordManagement/bufmanager/BufPageManager.h"
#include "RecordManagement/fileio/FileManager.h"
#include "RecordManagement/rm/RecordManager.h"
#include "RecordManagement/utils/pagedef.h"
#include <map>
#include <algorithm>
int cnt;
int a;
string type;
char DB_ROOT[MAXBUFSIZE];
string dbName;
string tbName; 
string attrName; 
string attrName1; 
string attrName2; 
string tempName; 
string attrName3; 
string selectType; 
string setName;
string primaryKey;
string currentDb;// = "orderDB";
vector<string>  attrNameList;
vector<string>  tbNameList;
vector<string> 	attrTypeList;
vector<string> 	attrNumList;
vector<vector<string> > 	attrValueList;
vector<string> 	tempList;
vector<string> 	exprValueList;
vector<char> 	exprOpList;
vector<int> 	attrNotNullList;
vector<int> 	nullList;

vector<string>  clauseNameList;
vector<string>	clauseOpList;
vector<string>	clauseRightList;
extern "C"			
{					
	void yyerror(const char *s);
	extern int yylex(void);
	extern int yylineno;
	extern char* yytext;
}

%}


%token<m_sId>NUMBER
%token<m_sId>STRING
%token<m_sId>NAME
%token<m_sId>ATTRNAME
%token<m_sId>ATTRNAME2
%token<m_sId>ATTRNUM

%token<m_sId>EXIT
%token<m_sId>CREATE
%token<m_sId>HAHA
%token<m_sId>DROP
%token<m_sId>USE
%token<m_sId>SHOW
%token<m_sId>DATABASE
%token<m_sId>PRIMARY
%token<m_sId>KEY
%token<m_sId>INSERT
%token<m_sId>INTO
%token<m_sId>VALUES
%token<m_sId>DELETE
%token<m_sId>FROM
%token<m_sId>WHERE
%token<m_sId>AND
%token<m_sId>UPDATE
%token<m_sId>SET
%token<m_sId>SELECT
%token<m_sId>GROUP
%token<m_sId>BY
%token<m_sId>IS
%token<m_sId>NUL
%token<m_sId>DESC
%token<m_sId>TABLE
%token<m_sId>TABLES
%token<m_sId>BLANK
%token<m_sId>NOT

%type<m_sId>file
%type<m_sId>tokenlist
%type<m_sId>tableDetail
%type<m_sId>tableDetail2
%type<m_sId>tableDetail3
%type<m_sId>insertDetail0
%type<m_sId>insertDetail
%type<m_sId>whereclauses
%type<m_sId>namelist
%type<m_sId>namelist1
%type<m_sId>expr

%%

file:						
	tokenlist			
	{
	};
tokenlist:
	{
	}

//create database dbName
	| BLANK CREATE BLANK DATABASE BLANK NAME EXIT	
	{
		dbName = $6;
		type = "create database";		
		YYACCEPT;
	}
	| BLANK CREATE BLANK DATABASE BLANK NAME BLANK EXIT	
	{
		dbName = $6;
		cout << "CREATE database" << endl;
		type = "create database";
		YYACCEPT;
	}
	| CREATE BLANK DATABASE BLANK NAME EXIT
	{
		dbName = $5;
		type = "create database";
		YYACCEPT;
	}
	| CREATE BLANK DATABASE BLANK NAME BLANK EXIT	
	{
		dbName = $5;
		type = "create database";
		YYACCEPT;
	}

//drop database dbName
	| BLANK DROP BLANK DATABASE BLANK NAME EXIT	
	{
		dbName = $6;
		type = "drop database";
		YYACCEPT;
	}
	| BLANK DROP BLANK DATABASE BLANK NAME BLANK EXIT	
	{
		dbName = $6;
		type = "drop database";
		YYACCEPT;
	}
	| DROP BLANK DATABASE BLANK NAME EXIT
	{
		dbName = $5;
		type = "drop database";
		YYACCEPT;
	}
	| DROP BLANK DATABASE BLANK NAME BLANK EXIT	
	{
		dbName = $5;
		type = "drop database";
		YYACCEPT;
	}

//use database dbName
	| BLANK USE BLANK DATABASE BLANK NAME EXIT	
	{
		dbName = $6;
		type = "use database";
		YYACCEPT;
	}
	| BLANK USE BLANK DATABASE BLANK NAME BLANK EXIT	
	{
		dbName = $6;
		type = "use database";
		YYACCEPT;
	}
	| USE BLANK DATABASE BLANK NAME EXIT
	{
		dbName = $6;
		type = "use database";
		YYACCEPT;
	}
	| USE BLANK DATABASE BLANK NAME BLANK EXIT	
	{
		dbName = $6;
		type = "use database";
		YYACCEPT;
	}

//show database
	| BLANK SHOW BLANK DATABASE EXIT	
	{
		type = "show database";
		YYACCEPT;
	}
	| BLANK SHOW BLANK DATABASE BLANK EXIT	
	{
		type = "show database";
		YYACCEPT;
	}
	| SHOW BLANK DATABASE EXIT
	{
		type = "show database";
		YYACCEPT;
	}
	| SHOW BLANK DATABASE  BLANK EXIT	
	{
		type = "show database";
		YYACCEPT;
	}

//show tables
	| BLANK SHOW BLANK TABLES EXIT	
	{
		type = "show table";
		YYACCEPT;
	}
	| BLANK SHOW BLANK TABLES BLANK EXIT	
	{
		type = "show table";
		YYACCEPT;
	}
	| SHOW BLANK TABLES EXIT
	{
		type = "show table";
		YYACCEPT;
	}
	| SHOW BLANK TABLES BLANK EXIT	
	{
		type = "show table";
		YYACCEPT;
	}

//drop table tbName
	| BLANK DROP BLANK TABLE BLANK NAME EXIT	
	{
		tbName = $6;
		type = "drop table";
		YYACCEPT;
	}
	| BLANK DROP BLANK TABLE BLANK NAME BLANK EXIT	
	{
		tbName = $6;
		type = "drop table";
		YYACCEPT;
	}
	| DROP BLANK TABLE BLANK NAME EXIT
	{
		tbName = $5;
		type = "drop table";
		YYACCEPT;
	}
	| DROP BLANK TABLE BLANK NAME BLANK EXIT	
	{
		tbName = $5;
		type = "drop table";
		YYACCEPT;
	}

//desc tbName
	| DESC BLANK NAME EXIT	
	{
		tbName = $3;
		type = "desc";
		YYACCEPT;
	}
	| DESC BLANK NAME BLANK EXIT	
	{
		tbName = $3;
		type = "desc";
		YYACCEPT;
	}
	| BLANK DESC BLANK NAME EXIT	
	{
		tbName = $4;
		type = "desc";
		YYACCEPT;
	}
	| BLANK DESC BLANK NAME BLANK EXIT	
	{
		tbName = $4;
		type = "desc";
		YYACCEPT;
	}
	

//create table tbName(attrName1 Type1, ..., attrNameN TypeN NOT NULL, PRIMARY KEY(attrName1))
	| BLANK CREATE BLANK TABLE BLANK NAME tableDetail EXIT	
	{
		tbName = $6;
		type = "create table";
		YYACCEPT;
	}
	| CREATE BLANK TABLE BLANK NAME tableDetail EXIT
	{
		tbName = $5;
		type = "create table";
		YYACCEPT;
	}

//update tableName set tableName.attrName = expr where whereclauses
	| UPDATE BLANK NAME BLANK SET BLANK NAME '=' expr BLANK WHERE BLANK whereclauses EXIT
	{
		tbName = $3;
		setName = $7;
		type = "update set";
		YYACCEPT;
	}
	| BLANK UPDATE BLANK NAME BLANK SET BLANK NAME '=' expr BLANK WHERE BLANK whereclauses EXIT
	{
		tbName = $4;
		setName = $8;
		type = "update set";
		YYACCEPT;
	}
	| UPDATE BLANK NAME BLANK SET BLANK NAME '=' expr BLANK WHERE BLANK whereclauses BLANK EXIT
	{
		tbName = $3;
		setName = $7;
		type = "update set";
		YYACCEPT;
	}
	| BLANK UPDATE BLANK NAME BLANK SET BLANK NAME '=' expr BLANK WHERE BLANK whereclauses BLANK EXIT
	{
		tbName = $4;
		setName = $8;
		type = "update set";
		YYACCEPT;
	}
	| UPDATE BLANK NAME BLANK SET BLANK NAME BLANK '=' expr BLANK WHERE BLANK whereclauses EXIT
	{
		tbName = $3;
		setName = $7;
		type = "update set";
		YYACCEPT;
	}
	| BLANK UPDATE BLANK NAME BLANK SET BLANK NAME BLANK '=' expr BLANK WHERE BLANK whereclauses EXIT
	{
		tbName = $4;
		setName = $8;
		type = "update set";
		YYACCEPT;
	}
	| UPDATE BLANK NAME BLANK SET BLANK NAME BLANK '=' expr BLANK WHERE BLANK whereclauses BLANK EXIT
	{
		tbName = $3;
		setName = $7;
		type = "update set";
		YYACCEPT;
	}
	| BLANK UPDATE BLANK NAME BLANK SET BLANK NAME BLANK '=' expr BLANK WHERE BLANK whereclauses BLANK EXIT
	{
		tbName = $4;
		setName = $8;
		type = "update set";
		YYACCEPT;
	}
//select tableName.attrName From tableName where whereclauses
	| SELECT BLANK '*' BLANK FROM BLANK NAME BLANK WHERE BLANK whereclauses EXIT
	{
		attrNameList.push_back("*");
		tbNameList.push_back($7);
		type = "select from";
		YYACCEPT;
	}
	| BLANK SELECT BLANK '*' BLANK FROM BLANK NAME BLANK WHERE BLANK whereclauses EXIT
	{
		attrNameList.push_back("*");
		tbNameList.push_back($8);
		type = "select from";
		YYACCEPT;
	}
	| SELECT BLANK '*' BLANK FROM BLANK NAME BLANK WHERE BLANK whereclauses BLANK EXIT
	{
		attrNameList.push_back("*");
		tbNameList.push_back($7);
		type = "select from";
		YYACCEPT;
	}
	| BLANK SELECT BLANK '*' BLANK FROM BLANK NAME BLANK WHERE BLANK whereclauses BLANK EXIT
	{
		attrNameList.push_back("*");
		tbNameList.push_back($8);
		type = "select from";
		YYACCEPT;
	}
	| SELECT BLANK namelist BLANK FROM BLANK namelist1 BLANK WHERE BLANK whereclauses EXIT 
	{
		type = "select from";
		YYACCEPT;
	}
	| BLANK SELECT BLANK namelist BLANK FROM BLANK namelist1 BLANK WHERE BLANK whereclauses EXIT 
	{
		type = "select from";
		YYACCEPT;
	}
	| SELECT BLANK namelist BLANK FROM BLANK namelist1 BLANK WHERE BLANK whereclauses BLANK EXIT 
	{
		type = "select from";
		YYACCEPT;
	}
	| BLANK SELECT BLANK namelist BLANK FROM BLANK namelist1 BLANK WHERE BLANK whereclauses BLANK EXIT 
	{
		type = "select from";
		YYACCEPT;
	}


//select SUM(attrName) From tableName
	| SELECT BLANK '*' BLANK FROM BLANK NAME EXIT
	{
		attrNameList.push_back("*");
		tbNameList.push_back($7);
		type = "select from";
		YYACCEPT;
		
	}
	| SELECT BLANK '*' BLANK FROM BLANK NAME BLANK EXIT
	{
		attrNameList.push_back("*");
		tbNameList.push_back($7);
		type = "select from";
		YYACCEPT;
		
	}
	| SELECT BLANK NAME ATTRNAME BLANK FROM BLANK NAME EXIT 
	{
		type = "select";
		selectType = $3;
		attrName = $4;
		tbName = $8;
		YYACCEPT;
	}
	| BLANK SELECT BLANK NAME ATTRNAME BLANK FROM BLANK NAME EXIT 
	{
		type = "select";
		selectType = $4;
		attrName = $5;
		tbName = $9;
		YYACCEPT;
	}

	
	| SELECT BLANK NAME ATTRNAME BLANK FROM BLANK NAME BLANK EXIT 
	{
		type = "select";
		selectType = $3;
		attrName = $4;
		tbName = $8;
		YYACCEPT;
	}
	| BLANK SELECT BLANK NAME ATTRNAME BLANK FROM BLANK NAME BLANK EXIT 
	{
		type = "select";
		selectType = $4;
		attrName = $5;
		tbName = $9;
		YYACCEPT;
	}




//select attrName1, SUM(attrName2) From tableName GROUP BY attrName1
	| SELECT BLANK ATTRNAME2 BLANK FROM BLANK NAME BLANK GROUP BLANK BY BLANK NAME EXIT 
	{
		tempName =$3;
		type = "select group";
		tbName = $7;
		attrName3 = $13;
		YYACCEPT;
	}
	

//insert into [tableName(attrName1, attrName2,…, attrNameN)] VALUES (attrValue1, attrValue2,…, attrValueN) 
	| INSERT BLANK INTO BLANK NAME BLANK VALUES BLANK insertDetail0 EXIT
	{
		tbName = $5;
		type = "insert into";
		YYACCEPT;
	}
	| INSERT BLANK INTO BLANK NAME BLANK VALUES insertDetail0 EXIT	
	{
		tbName = $5;
		type = "insert into";
		YYACCEPT;
	}
	| BLANK INSERT BLANK INTO BLANK NAME BLANK VALUES BLANK insertDetail0 EXIT
	{
		tbName = $6;
		type = "insert into";
		YYACCEPT;
	}
	| BLANK INSERT BLANK INTO BLANK NAME BLANK VALUES insertDetail0 EXIT
	{
		tbName = $6;
		type = "insert into";
		YYACCEPT;
	}
	| INSERT BLANK INTO BLANK NAME BLANK VALUES BLANK insertDetail0 BLANK EXIT
	{
		tbName = $5;
		type = "insert into";
		YYACCEPT;
	}
	| INSERT BLANK INTO BLANK NAME BLANK VALUES insertDetail0 BLANK EXIT
	{
		tbName = $5;
		type = "insert into";
		YYACCEPT;
	}
	| BLANK INSERT BLANK INTO BLANK NAME BLANK VALUES BLANK insertDetail0 BLANK EXIT
	{
		tbName = $6;
		type = "insert into";
		YYACCEPT;
	}
	| BLANK INSERT BLANK INTO BLANK NAME BLANK VALUES insertDetail0 BLANK EXIT
	{
		tbName = $6;
		type = "insert into";
		YYACCEPT;
	}



//delete from tableName where whereclauses
	| DELETE BLANK FROM BLANK NAME BLANK WHERE BLANK whereclauses EXIT
	{	
		tbName = $5;	
		type = "delete from";
		YYACCEPT;
	}
	| BLANK DELETE BLANK FROM BLANK NAME BLANK WHERE BLANK whereclauses EXIT
	{	
		tbName = $6;
		type = "delete from";
		YYACCEPT;
	}
	| DELETE BLANK FROM BLANK NAME BLANK WHERE BLANK whereclauses BLANK EXIT
	{	
		tbName = $5;
		type = "delete from";
		YYACCEPT;
	}
	| BLANK DELETE BLANK FROM BLANK NAME BLANK WHERE BLANK whereclauses BLANK EXIT
	{	
		tbName = $6;
		type = "delete from";
		YYACCEPT;
	};

whereclauses:
	{
	}
	| NAME BLANK IS BLANK NUL
	{
		cout << 1 << endl;
		clauseNameList.push_back($1);
		clauseOpList.push_back("is");
		clauseRightList.push_back("''");
	}
	| NAME '=' STRING
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("=");
		clauseRightList.push_back($3);
	}
	| NAME BLANK '=' STRING
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("=");
		clauseRightList.push_back($4);
	}
	| NAME '=' BLANK STRING
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("=");
		clauseRightList.push_back($4);
	}
	| NAME BLANK '=' BLANK STRING
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("=");
		clauseRightList.push_back($5);
	}
	| NAME '=' NUMBER
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("=");
		clauseRightList.push_back($3);
	}
	| NAME BLANK '=' NUMBER
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("=");
		clauseRightList.push_back($4);
	}
	| NAME '=' BLANK NUMBER
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("=");
		clauseRightList.push_back($4);
	}
	| NAME BLANK '=' BLANK NUMBER
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("=");
		clauseRightList.push_back($5);
	}
	| NAME '=' NAME
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("=");
		clauseRightList.push_back($3);
	}
	| NAME BLANK '=' NAME
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("=");
		clauseRightList.push_back($4);
	}
	| NAME '=' BLANK NAME
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("=");
		clauseRightList.push_back($4);
	}
	| NAME BLANK '=' BLANK NAME
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("=");
		clauseRightList.push_back($5);
	}

	| NAME '!' '=' STRING
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($4);
	}
	| NAME BLANK '!' '=' STRING
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($5);
	}
	| NAME '!' '=' BLANK STRING
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($5);
	}
	| NAME BLANK '!' '=' BLANK STRING
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($6);
	}
	| NAME '!' '=' NUMBER
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($4);
	}
	| NAME BLANK '!' '=' NUMBER
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($5);
	}
	| NAME '!' '=' BLANK NUMBER
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($5);
	}
	| NAME BLANK '!' '=' BLANK NUMBER
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($6);
	}
	| NAME '!' '=' NAME
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($4);
	}
	| NAME BLANK '!' '=' NAME
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($5);
	}
	| NAME '!' '=' BLANK NAME
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($5);
	}
	| NAME BLANK '!' '=' BLANK NAME
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($6);
	}

	| NAME '<' '>' STRING
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($4);
	}
	| NAME BLANK '<' '>' STRING
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($5);
	}
	| NAME '<' '>' BLANK STRING
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($5);
	}
	| NAME BLANK '<' '>' BLANK STRING
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($6);
	}
	| NAME '<' '>' NUMBER
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($4);
	}
	| NAME BLANK '<' '>' NUMBER
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($5);
	}
	| NAME '<' '>' BLANK NUMBER
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($5);
	}
	| NAME BLANK '<' '>' BLANK NUMBER
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($6);
	}
	| NAME '<' '>' NAME
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($4);
	}
	| NAME BLANK '<' '>' NAME
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($5);
	}
	| NAME '<' '>' BLANK NAME
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($5);
	}
	| NAME BLANK '<' '>' BLANK NAME
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($6);
	}
	| NAME '>' NUMBER
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back(">");
		clauseRightList.push_back($3);
	}
	| NAME BLANK '>' NUMBER
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back(">");
		clauseRightList.push_back($4);
	}
	| NAME '>' BLANK NUMBER
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back(">");
		clauseRightList.push_back($4);
	}
	| NAME BLANK '>' BLANK NUMBER
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back(">");
		clauseRightList.push_back($5);
	}
	| NAME '>' NAME
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back(">");
		clauseRightList.push_back($3);
	}
	| NAME BLANK '>' NAME
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back(">");
		clauseRightList.push_back($4);
	}
	| NAME '>' BLANK NAME
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back(">");
		clauseRightList.push_back($4);
	}
	| NAME BLANK '>' BLANK NAME
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back(">");
		clauseRightList.push_back($5);
	}
	| NAME '<' NUMBER
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("<");
		clauseRightList.push_back($3);
	}
	| NAME BLANK '<' NUMBER
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("<");
		clauseRightList.push_back($4);
	}
	| NAME '<' BLANK NUMBER
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("<");
		clauseRightList.push_back($4);
	}
	| NAME BLANK '<' BLANK NUMBER
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("<");
		clauseRightList.push_back($5);
	}
	| NAME '<' NAME
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("<");
		clauseRightList.push_back($3);
	}
	| NAME BLANK '<' NAME
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("<");
		clauseRightList.push_back($4);
	}
	| NAME '<' BLANK NAME
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("<");
		clauseRightList.push_back($4);
	}
	| NAME BLANK '<' BLANK NAME
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("<");
		clauseRightList.push_back($5);
	}
	| NAME '>' '='  NUMBER
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back(">=");
		clauseRightList.push_back($4);
	}
	| NAME BLANK '>' '=' NUMBER
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back(">=");
		clauseRightList.push_back($5);
	}
	| NAME '>' '=' BLANK NUMBER
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back(">=");
		clauseRightList.push_back($5);
	}
	| NAME BLANK '>' '=' BLANK NUMBER
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back(">=");
		clauseRightList.push_back($6);
	}
	| NAME '>' '=' NAME
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back(">=");
		clauseRightList.push_back($4);
	}
	| NAME BLANK '>' '=' NAME
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back(">=");
		clauseRightList.push_back($5);
	}
	| NAME '>' '=' BLANK NAME
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back(">=");
		clauseRightList.push_back($5);
	}
	| NAME BLANK '>' '=' BLANK NAME
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back(">=");
		clauseRightList.push_back($6);
	}
	
	| NAME '<' '='  NUMBER
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("<=");
		clauseRightList.push_back($4);
	}
	| NAME BLANK '<' '=' NUMBER
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("<=");
		clauseRightList.push_back($5);
	}
	| NAME '<' '=' BLANK NUMBER
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("<=");
		clauseRightList.push_back($5);
	}
	| NAME BLANK '<' '=' BLANK NUMBER
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("<=");
		clauseRightList.push_back($6);
	}
	| NAME '<' '=' NAME
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("<=");
		clauseRightList.push_back($4);
	}
	| NAME BLANK '<' '=' NAME
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("<=");
		clauseRightList.push_back($5);
	}
	| NAME '<' '=' BLANK NAME
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("<=");
		clauseRightList.push_back($5);
	}
	| NAME BLANK '<' '=' BLANK NAME
	{
		clauseNameList.push_back($1);
		clauseOpList.push_back("<=");
		clauseRightList.push_back($6);
	}
	| whereclauses BLANK AND BLANK NAME '=' STRING
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("=");
		clauseRightList.push_back($7);
	}
	| whereclauses BLANK AND BLANK NAME '=' BLANK STRING
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("=");
		clauseRightList.push_back($8);
	}
	| whereclauses BLANK AND BLANK NAME BLANK '=' STRING
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("=");
		clauseRightList.push_back($8);
	}
	| whereclauses BLANK AND BLANK NAME BLANK '=' BLANK STRING
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("=");
		clauseRightList.push_back($9);
	}
	| whereclauses BLANK AND BLANK NAME '=' NUMBER
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("=");
		clauseRightList.push_back($7);
	}
	| whereclauses BLANK AND BLANK NAME BLANK '=' NUMBER
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("=");
		clauseRightList.push_back($8);
	}
	| whereclauses BLANK AND BLANK NAME '=' BLANK NUMBER
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("=");
		clauseRightList.push_back($8);
	}
	| whereclauses BLANK AND BLANK NAME BLANK '=' BLANK NUMBER
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("=");
		clauseRightList.push_back($9);
	}
	| whereclauses BLANK AND BLANK NAME '=' NAME
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("=");
		clauseRightList.push_back($7);
	}
	| whereclauses BLANK AND BLANK NAME BLANK '=' NAME
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("=");
		clauseRightList.push_back($8);
	}
	| whereclauses BLANK AND BLANK NAME '=' BLANK NAME
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("=");
		clauseRightList.push_back($8);
	}
	| whereclauses BLANK AND BLANK NAME BLANK '=' BLANK NAME
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("=");
		clauseRightList.push_back($9);
	}

	| whereclauses BLANK AND BLANK NAME '!' '=' STRING
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($8);
	}
	| whereclauses BLANK AND BLANK NAME '!' '=' BLANK STRING
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($9);
	}
	| whereclauses BLANK AND BLANK NAME BLANK '!' '=' STRING
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($9);
	}
	| whereclauses BLANK AND BLANK NAME BLANK '!' '=' BLANK STRING
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($10);
	}
	| whereclauses BLANK AND BLANK NAME '!' '=' NUMBER
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($8);
	}
	| whereclauses BLANK AND BLANK NAME BLANK '!' '=' NUMBER
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($9);
	}
	| whereclauses BLANK AND BLANK NAME '!' '=' BLANK NUMBER
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($9);
	}
	| whereclauses BLANK AND BLANK NAME BLANK '!' '=' BLANK NUMBER
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($10);
	}
	| whereclauses BLANK AND BLANK NAME '!' '=' NAME
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($8);
	}
	| whereclauses BLANK AND BLANK NAME BLANK '!' '=' NAME
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($9);
	}
	| whereclauses BLANK AND BLANK NAME '!' '=' BLANK NAME
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($9);
	}
	| whereclauses BLANK AND BLANK NAME BLANK '!' '=' BLANK NAME
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($10);
	}
	| whereclauses BLANK AND BLANK NAME '>' NUMBER
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back(">");
		clauseRightList.push_back($7);
	}
	| whereclauses BLANK AND BLANK NAME BLANK '>' NUMBER
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back(">");
		clauseRightList.push_back($8);
	}
	| whereclauses BLANK AND BLANK NAME '>' BLANK NUMBER
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back(">");
		clauseRightList.push_back($8);
	}
	| whereclauses BLANK AND BLANK NAME BLANK '>' BLANK NUMBER
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back(">");
		clauseRightList.push_back($9);
	}
	| whereclauses BLANK AND BLANK NAME '>' NAME
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back(">");
		clauseRightList.push_back($7);
	}
	| whereclauses BLANK AND BLANK NAME BLANK '>' NAME
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back(">");
		clauseRightList.push_back($8);
	}
	| whereclauses BLANK AND BLANK NAME '>' BLANK NAME
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back(">");
		clauseRightList.push_back($8);
	}
	| whereclauses BLANK AND BLANK NAME BLANK '>' BLANK NAME
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back(">");
		clauseRightList.push_back($9);
	}
	| whereclauses BLANK AND BLANK NAME '<' NUMBER
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("<");
		clauseRightList.push_back($7);
	}
	| whereclauses BLANK AND BLANK NAME '<' BLANK NUMBER
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("<");
		clauseRightList.push_back($8);
	}
	| whereclauses BLANK AND BLANK NAME BLANK '<' BLANK NUMBER
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("<");
		clauseRightList.push_back($9);
	}
	| whereclauses BLANK AND BLANK NAME BLANK '<' NUMBER
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("<");
		clauseRightList.push_back($8);
	}
	| whereclauses BLANK AND BLANK NAME '<' NAME
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("<");
		clauseRightList.push_back($7);
	}
	| whereclauses BLANK AND BLANK NAME BLANK '<' NAME
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("<");
		clauseRightList.push_back($8);
	}
	| whereclauses BLANK AND BLANK NAME '<' BLANK NAME
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("<");
		clauseRightList.push_back($8);
	}
	| whereclauses BLANK AND BLANK NAME BLANK '<' BLANK NAME
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("<");
		clauseRightList.push_back($9);
	}
	| whereclauses BLANK AND BLANK NAME '>' '=' NUMBER
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back(">=");
		clauseRightList.push_back($8);
	}
	| whereclauses BLANK AND BLANK NAME BLANK '>' '=' NUMBER
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back(">=");
		clauseRightList.push_back($9);
	}
	| whereclauses BLANK AND BLANK NAME '>' '=' BLANK NUMBER
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back(">=");
		clauseRightList.push_back($9);
	}
	| whereclauses BLANK AND BLANK NAME BLANK '>' '=' BLANK NUMBER
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back(">=");
		clauseRightList.push_back($10);
	}
	| whereclauses BLANK AND BLANK NAME '>' '=' NAME
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back(">=");
		clauseRightList.push_back($8);
	}
	| whereclauses BLANK AND BLANK NAME BLANK '>' '=' NAME
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back(">=");
		clauseRightList.push_back($9);
	}
	| whereclauses BLANK AND BLANK NAME '>' '=' BLANK NAME
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back(">=");
		clauseRightList.push_back($9);
	}
	| whereclauses BLANK AND BLANK NAME BLANK '>' '=' BLANK NAME
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back(">=");
		clauseRightList.push_back($10);
	}

	| whereclauses BLANK AND BLANK NAME '<' '=' NUMBER
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("<=");
		clauseRightList.push_back($8);
	}
	| whereclauses BLANK AND BLANK NAME BLANK '<' '=' NUMBER
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("<=");
		clauseRightList.push_back($9);
	}
	| whereclauses BLANK AND BLANK NAME '<' '=' BLANK NUMBER
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("<=");
		clauseRightList.push_back($9);
	}
	| whereclauses BLANK AND BLANK NAME BLANK '<' '=' BLANK NUMBER
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("<=");
		clauseRightList.push_back($10);
	}
	| whereclauses BLANK AND BLANK NAME '<' '=' NAME
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("<=");
		clauseRightList.push_back($8);
	}
	| whereclauses BLANK AND BLANK NAME BLANK '<' '=' NAME
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("<=");
		clauseRightList.push_back($9);
	}
	| whereclauses BLANK AND BLANK NAME '<' '=' BLANK NAME
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("<=");
		clauseRightList.push_back($9);
	}
	| whereclauses BLANK AND BLANK NAME BLANK '<' '=' BLANK NAME
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("<=");
		clauseRightList.push_back($10);
	}

	| whereclauses BLANK AND BLANK NAME '<' '>' STRING
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($8);
	}
	| whereclauses BLANK AND BLANK NAME '<' '>' BLANK STRING
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($9);
	}
	| whereclauses BLANK AND BLANK NAME BLANK '<' '>' STRING
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($9);
	}
	| whereclauses BLANK AND BLANK NAME BLANK '<' '>' BLANK STRING
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($10);
	}
	| whereclauses BLANK AND BLANK NAME '<' '>' NUMBER
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($8);
	}
	| whereclauses BLANK AND BLANK NAME BLANK '<' '>' NUMBER
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($9);
	}
	| whereclauses BLANK AND BLANK NAME '<' '>' BLANK NUMBER
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($9);
	}
	| whereclauses BLANK AND BLANK NAME BLANK '<' '>' BLANK NUMBER
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($10);
	}
	| whereclauses BLANK AND BLANK NAME '<' '>' NAME
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($8);
	}
	| whereclauses BLANK AND BLANK NAME BLANK '<' '>' NAME
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($9);
	}
	| whereclauses BLANK AND BLANK NAME '<' '>' BLANK NAME
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($9);
	}
	| whereclauses BLANK AND BLANK NAME BLANK '<' '>' BLANK NAME
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("!=");
		clauseRightList.push_back($10);
	}
	| whereclauses BLANK AND BLANK NAME BLANK IS BLANK NUL
	{
		clauseNameList.push_back($5);
		clauseOpList.push_back("is");
		clauseRightList.push_back("''");
	};


insertDetail0:
	{
	}
	| ATTRNAME
	{
		tempList.push_back($1);
		attrValueList.push_back(tempList);
		tempList.clear();
	}
	| ATTRNUM
	{
		tempList.push_back($1);
		attrValueList.push_back(tempList);
		tempList.clear();
	}
	| BLANK ATTRNUM
	{
		tempList.push_back($2);
		attrValueList.push_back(tempList);
		tempList.clear();
	}
	| ATTRNUM BLANK
	{
		tempList.push_back($2);
		attrValueList.push_back(tempList);
		tempList.clear();
	}
	| BLANK ATTRNUM BLANK
	{
		tempList.push_back($2);
		attrValueList.push_back(tempList);
		tempList.clear();
	}
	| '(' insertDetail ')'
	{
		attrValueList.push_back(tempList);
		tempList.clear();
	}
	| '(' insertDetail ')' BLANK
	{
		attrValueList.push_back(tempList);
		tempList.clear();
	}
	| BLANK '(' insertDetail ')'
	{
		attrValueList.push_back(tempList);
		tempList.clear();
	}
	| BLANK '(' insertDetail ')' BLANK
	{ 
		attrValueList.push_back(tempList);
		tempList.clear();
	}	
	| insertDetail0 ',' ATTRNUM
	{
		tempList.push_back($3);
		attrValueList.push_back(tempList);
		tempList.clear();
	}
	| insertDetail0 ',' BLANK ATTRNUM
	{
		tempList.push_back($4);
		attrValueList.push_back(tempList);
		tempList.clear();
	}
	| insertDetail0 ',' ATTRNUM BLANK
	{
		tempList.push_back($3);
		attrValueList.push_back(tempList);
		tempList.clear();
	}
	| insertDetail0 ',' BLANK ATTRNUM BLANK
	{
		tempList.push_back($4);
		attrValueList.push_back(tempList);
		tempList.clear();
	}
	| insertDetail0 ',' ATTRNAME
	{
		tempList.push_back($3);
		attrValueList.push_back(tempList);
		tempList.clear();
	}
	| insertDetail0 ',' BLANK ATTRNAME
	{
		tempList.push_back($4);
		attrValueList.push_back(tempList);
		tempList.clear();
	}
	| insertDetail0 ',' ATTRNAME BLANK
	{
		tempList.push_back($3);
		attrValueList.push_back(tempList);
		tempList.clear();
	}
	| insertDetail0 ',' BLANK ATTRNAME BLANK
	{
		tempList.push_back($4);
		attrValueList.push_back(tempList);
		tempList.clear();
	}
	| insertDetail0 ',' '(' insertDetail ')'
	{
		attrValueList.push_back(tempList);
		tempList.clear();
	}
	| insertDetail0 ',' '(' insertDetail ')' BLANK
	{
		attrValueList.push_back(tempList);
		tempList.clear();
	}
	| insertDetail0 ',' BLANK '(' insertDetail ')'
	{
		attrValueList.push_back(tempList);
		tempList.clear();
	}
	| insertDetail0 ',' BLANK '(' insertDetail ')' BLANK
	{ 
		attrValueList.push_back(tempList);
		tempList.clear();
	}
	
	;

insertDetail:
	{
	}
	| NUMBER	
	{
		tempList.push_back($1);
	}
	| NUL	
	{
		tempList.push_back("NULL");
	}
	| STRING	
	{
		tempList.push_back($1);
	}
	| BLANK NUMBER	
	{
		tempList.push_back($2);
	}
	| BLANK NUL
	{
		tempList.push_back("NULL");
	}
	| BLANK STRING
	{
		tempList.push_back($2);
	}
	| insertDetail ',' STRING
	{
		tempList.push_back($3);
	}
	| insertDetail ',' NUL
	{
		tempList.push_back("NULL");
	}
	| insertDetail ',' NUMBER
	{
		tempList.push_back($3);
	}
	| insertDetail ',' STRING BLANK
	{
		tempList.push_back($3);
	}
	| insertDetail ',' BLANK STRING
	{
		tempList.push_back($4);
	}
	| insertDetail ',' BLANK STRING BLANK
	{
		tempList.push_back($4);
	}
	| insertDetail ',' NUL BLANK
	{
		tempList.push_back("NULL");
	}
	| insertDetail ',' BLANK NUL
	{
		tempList.push_back("NULL");
	}
	| insertDetail ',' BLANK NUL BLANK
	{
		tempList.push_back("NULL");
	}
	| insertDetail ',' NUMBER BLANK
	{
		tempList.push_back($3);
	}
	| insertDetail ',' BLANK NUMBER
	{
		tempList.push_back($4);
	}
	| insertDetail ',' BLANK NUMBER BLANK
	{
		tempList.push_back($4);
	}
	| insertDetail BLANK ',' STRING
	{
		tempList.push_back($4);
	}
	| insertDetail BLANK ',' NUL
	{
		tempList.push_back("NULL");
	}
	| insertDetail BLANK ',' NUMBER
	{
		tempList.push_back($4);
	}
	| insertDetail BLANK ',' STRING BLANK
	{
		tempList.push_back($4);
	}
	| insertDetail BLANK ',' BLANK STRING
	{
		tempList.push_back($5);
	}
	| insertDetail BLANK ',' BLANK STRING BLANK
	{
		tempList.push_back($5);
	}
	| insertDetail BLANK ',' NUL BLANK
	{
		tempList.push_back("NULL");
	}
	| insertDetail BLANK ',' BLANK NUL
	{
		tempList.push_back("NULL");
	}
	| insertDetail BLANK ',' BLANK NUL BLANK
	{
		tempList.push_back("NULL");
	}
	| insertDetail BLANK ',' NUMBER BLANK
	{
		tempList.push_back($4);
	}
	| insertDetail BLANK ',' BLANK NUMBER
	{
		tempList.push_back($5);
	}
	| insertDetail BLANK ',' BLANK NUMBER BLANK
	{
		tempList.push_back($5);
	};

namelist:
	{
	}
	| NAME	
	{
		attrNameList.push_back($1);
	}
	| BLANK NAME
	{
		attrNameList.push_back($2);
	}
	| namelist ',' BLANK NAME
	{
		attrNameList.push_back($4);
	}
	| namelist BLANK ',' NAME
	{
		attrNameList.push_back($4);
	}
	| namelist BLANK ',' BLANK NAME
	{
		attrNameList.push_back($5);
	}
	| namelist ',' NAME
	{
		attrNameList.push_back($3);
	};

namelist1:
	{
	}
	| NAME	
	{
		tbNameList.push_back($1);
	}
	| BLANK NAME
	{
		tbNameList.push_back($2);
	}
	| namelist1 ',' BLANK NAME
	{
		tbNameList.push_back($4);
	}
	| namelist1 BLANK ',' NAME
	{
		tbNameList.push_back($4);
	}
	| namelist1 BLANK ',' BLANK NAME
	{
		tbNameList.push_back($5);
	}
	| namelist1 ',' NAME
	{
		tbNameList.push_back($3);
	};

expr:
	{
	}
	| STRING 
	{
		exprValueList.push_back($1);
	}
	| NUMBER
	{	
		exprValueList.push_back($1);
	}
	| NAME
	{	
		exprValueList.push_back($1);
	}
	| BLANK STRING
	{
		exprValueList.push_back($2);
	}
	| BLANK NUMBER
	{
		exprValueList.push_back($2);
	}
	| BLANK NAME
	{
		exprValueList.push_back($2);
	}
	| expr '+' NUMBER
	{
		exprOpList.push_back('+');
		exprValueList.push_back($3);
	}
	| expr '-' NUMBER
	{
		exprOpList.push_back('-');
		exprValueList.push_back($3);
	}
	| expr '*' NUMBER
	{
		exprOpList.push_back('*');
		exprValueList.push_back($3);
	}
	| expr '/' NUMBER
	{
		exprOpList.push_back('/');
		exprValueList.push_back($3);
	}
	| expr '+' BLANK NUMBER
	{
		exprOpList.push_back('+');
		exprValueList.push_back($4);
	}
	| expr '-' BLANK NUMBER
	{
		exprOpList.push_back('-');
		exprValueList.push_back($4);
	}
	| expr '*' BLANK NUMBER
	{
		exprOpList.push_back('*');
		exprValueList.push_back($4);
	}
	| expr '/' BLANK NUMBER
	{
		exprOpList.push_back('/');
		exprValueList.push_back($4);
	}
	| expr BLANK '+' NUMBER
	{
		exprOpList.push_back('+');
		exprValueList.push_back($4);
	}
	| expr BLANK '-' NUMBER
	{
		exprOpList.push_back('-');
		exprValueList.push_back($4);
	}
	| expr BLANK '*' NUMBER
	{
		exprOpList.push_back('*');
		exprValueList.push_back($4);
	}
	| expr BLANK '/' NUMBER
	{
		exprOpList.push_back('/');
		exprValueList.push_back($4);
	}
	| expr BLANK '+' BLANK NUMBER
	{
		exprOpList.push_back('+');
		exprValueList.push_back($5);
	}
	| expr BLANK '-' BLANK NUMBER
	{
		exprOpList.push_back('-');
		exprValueList.push_back($5);
	}
	| expr BLANK '*' BLANK NUMBER
	{
		exprOpList.push_back('*');
		exprValueList.push_back($5);
	}
	| expr BLANK '/' BLANK NUMBER
	{
		exprOpList.push_back('/');
		exprValueList.push_back($5);
	}

	| expr '+' NAME
	{
		exprOpList.push_back('+');
		exprValueList.push_back($3);
	}
	| expr '-' NAME
	{
		exprOpList.push_back('-');
		exprValueList.push_back($3);
	}
	| expr '*' NAME
	{
		exprOpList.push_back('*');
		exprValueList.push_back($3);
	}
	| expr '/' NAME
	{
		exprOpList.push_back('/');
		exprValueList.push_back($3);
	}
	| expr '+' BLANK NAME
	{
		exprOpList.push_back('+');
		exprValueList.push_back($4);
	}
	| expr '-' BLANK NAME
	{
		exprOpList.push_back('-');
		exprValueList.push_back($4);
	}
	| expr '*' BLANK NAME
	{
		exprOpList.push_back('*');
		exprValueList.push_back($4);
	}
	| expr '/' BLANK NAME
	{
		exprOpList.push_back('/');
		exprValueList.push_back($4);
	}
	| expr BLANK '+' NAME
	{
		exprOpList.push_back('+');
		exprValueList.push_back($4);
	}
	| expr BLANK '-' NAME
	{
		exprOpList.push_back('-');
		exprValueList.push_back($4);
	}
	| expr BLANK '*' NAME
	{
		exprOpList.push_back('*');
		exprValueList.push_back($4);
	}
	| expr BLANK '/' NAME
	{
		exprOpList.push_back('/');
		exprValueList.push_back($4);
	}
	| expr BLANK '+' BLANK NAME
	{
		exprOpList.push_back('+');
		exprValueList.push_back($5);
	}
	| expr BLANK '-' BLANK NAME
	{
		exprOpList.push_back('-');
		exprValueList.push_back($5);
	}
	| expr BLANK '*' BLANK NAME
	{
		exprOpList.push_back('*');
		exprValueList.push_back($5);
	}
	| expr BLANK '/' BLANK NAME
	{
		exprOpList.push_back('/');
		exprValueList.push_back($5);
	};


tableDetail:
	{
	}
	| tableDetail BLANK
	{
	}
	| BLANK tableDetail
	{	
	}
	| '(' tableDetail2 ')'
	{
	};

tableDetail2:
	{
	}
	| tableDetail2 BLANK	
	{
	}
	| tableDetail3	
	{
	}
	| tableDetail3 ',' PRIMARY BLANK KEY ATTRNAME
	{
	  	primaryKey = $6;
	}
	| tableDetail3 ',' PRIMARY BLANK KEY BLANK ATTRNAME
	{
	  	primaryKey = $7;
	}
	| tableDetail3 ',' BLANK PRIMARY BLANK KEY ATTRNAME
	{
	  	primaryKey = $7;
	}
	| tableDetail3 ',' BLANK PRIMARY BLANK KEY BLANK ATTRNAME
	{
	  	primaryKey = $8;
	}


	| tableDetail3 ',' HAHA ',' PRIMARY BLANK KEY ATTRNAME
	{
	  	primaryKey = $8;
	}
	| tableDetail3 ',' HAHA ',' PRIMARY BLANK KEY BLANK ATTRNAME
	{
	  	primaryKey = $9;
	}
	| tableDetail3 ','  HAHA ',' BLANK PRIMARY BLANK KEY ATTRNAME
	{
	  	primaryKey = $9;
	}
	| tableDetail3 ',' HAHA ',' BLANK PRIMARY BLANK KEY BLANK ATTRNAME
	{
	  	primaryKey = $10;
	};

tableDetail3:
	{
	}
	| NAME BLANK NAME ATTRNUM
	{
		attrNameList.push_back($1);
		attrTypeList.push_back($3);
		attrNumList.push_back($4);
		attrNotNullList.push_back(0);
	}
	| NAME BLANK NAME BLANK ATTRNUM
	{
		attrNameList.push_back($1);
		attrTypeList.push_back($3);
		attrNumList.push_back($5);
		attrNotNullList.push_back(0);
	}
	| NAME BLANK NAME ATTRNUM NOT BLANK NUL
	{
		attrNameList.push_back($1);
		attrTypeList.push_back($3);
		attrNumList.push_back($4);
		attrNotNullList.push_back(1);
	}
	| NAME BLANK NAME ATTRNUM BLANK NOT BLANK NUL
	{
		attrNameList.push_back($1);
		attrTypeList.push_back($3);
		attrNumList.push_back($4);
		attrNotNullList.push_back(1);
	}
	| NAME BLANK NAME BLANK ATTRNUM NOT BLANK NUL
	{
		attrNameList.push_back($1);
		attrTypeList.push_back($3);
		attrNumList.push_back($5);
		attrNotNullList.push_back(1);
	}
	| NAME BLANK NAME BLANK ATTRNUM BLANK NOT BLANK NUL
	{
		attrNameList.push_back($1);
		attrTypeList.push_back($3);
		attrNumList.push_back($5);
		attrNotNullList.push_back(1);
	}
	| BLANK NAME BLANK NAME ATTRNUM
	{
		attrNameList.push_back($2);
		attrTypeList.push_back($4);
		attrNumList.push_back($5);
		attrNotNullList.push_back(0);
	}
	| BLANK NAME BLANK NAME BLANK ATTRNUM
	{
		attrNameList.push_back($2);
		attrTypeList.push_back($4);
		attrNumList.push_back($6);
		attrNotNullList.push_back(0);
	}
	| BLANK NAME BLANK NAME ATTRNUM NOT BLANK NUL
	{
		attrNameList.push_back($2);
		attrTypeList.push_back($4);
		attrNumList.push_back($5);
		attrNotNullList.push_back(1);
	}
	| BLANK NAME BLANK NAME ATTRNUM BLANK NOT BLANK NUL
	{
		attrNameList.push_back($2);
		attrTypeList.push_back($4);
		attrNumList.push_back($5);
		attrNotNullList.push_back(1);
	}
	| BLANK NAME BLANK NAME BLANK ATTRNUM NOT BLANK NUL
	{
		attrNameList.push_back($2);
		attrTypeList.push_back($4);
		attrNumList.push_back($6);
		attrNotNullList.push_back(1);
	}
	| BLANK NAME BLANK NAME BLANK ATTRNUM BLANK NOT BLANK NUL
	{
		attrNameList.push_back($2);
		attrTypeList.push_back($4);
		attrNumList.push_back($6);
		attrNotNullList.push_back(1);
	}
	| NAME BLANK NAME ATTRNUM BLANK
	{
		attrNameList.push_back($1);
		attrTypeList.push_back($3);
		attrNumList.push_back($4);
		attrNotNullList.push_back(0);
	}
	| NAME BLANK NAME BLANK ATTRNUM BLANK
	{
		attrNameList.push_back($1);
		attrTypeList.push_back($3);
		attrNumList.push_back($5);
		attrNotNullList.push_back(0);
	}
	| NAME BLANK NAME ATTRNUM NOT BLANK NUL BLANK
	{
		attrNameList.push_back($1);
		attrTypeList.push_back($3);
		attrNumList.push_back($4);
		attrNotNullList.push_back(1);
	}
	| NAME BLANK NAME ATTRNUM BLANK NOT BLANK NUL BLANK
	{
		attrNameList.push_back($1);
		attrTypeList.push_back($3);
		attrNumList.push_back($4);
		attrNotNullList.push_back(1);
	}
	| NAME BLANK NAME BLANK ATTRNUM NOT BLANK NUL BLANK
	{
		attrNameList.push_back($1);
		attrTypeList.push_back($3);
		attrNumList.push_back($5);
		attrNotNullList.push_back(1);
	}
	| NAME BLANK NAME BLANK ATTRNUM BLANK NOT BLANK NUL BLANK
	{
		attrNameList.push_back($1);
		attrTypeList.push_back($3);
		attrNumList.push_back($5);
		attrNotNullList.push_back(1);
	}
	| BLANK NAME BLANK NAME ATTRNUM BLANK
	{
		attrNameList.push_back($2);
		attrTypeList.push_back($4);
		attrNumList.push_back($5);
		attrNotNullList.push_back(0);
	}
	| BLANK NAME BLANK NAME BLANK ATTRNUM BLANK
	{
		attrNameList.push_back($2);
		attrTypeList.push_back($4);
		attrNumList.push_back($6);
		attrNotNullList.push_back(0);
	}
	| BLANK NAME BLANK NAME ATTRNUM NOT BLANK NUL BLANK
	{
		attrNameList.push_back($2);
		attrTypeList.push_back($4);
		attrNumList.push_back($5);
		attrNotNullList.push_back(1);
	}
	| BLANK NAME BLANK NAME ATTRNUM BLANK NOT BLANK NUL BLANK
	{
		attrNameList.push_back($2);
		attrTypeList.push_back($4);
		attrNumList.push_back($5);
		attrNotNullList.push_back(1);
	}
	| BLANK NAME BLANK NAME BLANK ATTRNUM NOT BLANK NUL BLANK
	{
		attrNameList.push_back($2);
		attrTypeList.push_back($4);
		attrNumList.push_back($6);
		attrNotNullList.push_back(1);
	}
	| BLANK NAME BLANK NAME BLANK ATTRNUM BLANK NOT BLANK NUL BLANK
	{
		attrNameList.push_back($2);
		attrTypeList.push_back($4);
		attrNumList.push_back($6);
		attrNotNullList.push_back(1);
	}
	| tableDetail3 ',' NAME BLANK NAME ATTRNUM BLANK
	{
		attrNameList.push_back($3);
		attrTypeList.push_back($5);
		attrNumList.push_back($6);
		attrNotNullList.push_back(0);
	}
	| tableDetail3 ',' NAME BLANK NAME BLANK ATTRNUM BLANK
	{
		attrNameList.push_back($3);
		attrTypeList.push_back($5);
		attrNumList.push_back($7);
		attrNotNullList.push_back(0);
	}
	| tableDetail3 ',' BLANK NAME BLANK NAME ATTRNUM BLANK
	{
		attrNameList.push_back($4);
		attrTypeList.push_back($6);
		attrNumList.push_back($7);
		attrNotNullList.push_back(0);
	}
	| tableDetail3 ',' BLANK NAME BLANK NAME BLANK ATTRNUM BLANK
	{
		attrNameList.push_back($4);
		attrTypeList.push_back($6);
		attrNumList.push_back($8);
		attrNotNullList.push_back(0);
	}	
	| tableDetail3 ',' NAME BLANK NAME ATTRNUM BLANK NOT BLANK NUL BLANK
	{
		attrNameList.push_back($3);
		attrTypeList.push_back($5);
		attrNumList.push_back($6);
		attrNotNullList.push_back(1);
	}
	| tableDetail3 ',' NAME BLANK NAME BLANK ATTRNUM BLANK NOT BLANK NUL BLANK
	{
		attrNameList.push_back($3);
		attrTypeList.push_back($5);
		attrNumList.push_back($7);
		attrNotNullList.push_back(1);
	}
	| tableDetail3 ',' BLANK NAME BLANK NAME ATTRNUM BLANK NOT BLANK NUL BLANK
	{
		attrNameList.push_back($4);
		attrTypeList.push_back($6);
		attrNumList.push_back($7);
		attrNotNullList.push_back(1);
	}
	| tableDetail3 ',' BLANK NAME BLANK NAME BLANK ATTRNUM BLANK NOT BLANK NUL BLANK
	{
		attrNameList.push_back($4);
		attrTypeList.push_back($6);
		attrNumList.push_back($8);
		attrNotNullList.push_back(1);
	}
	| tableDetail3 ',' NAME BLANK NAME ATTRNUM
	{
		attrNameList.push_back($3);
		attrTypeList.push_back($5);
		attrNumList.push_back($6);
		attrNotNullList.push_back(0);
	}
	| tableDetail3 ',' NAME BLANK NAME BLANK ATTRNUM
	{
		attrNameList.push_back($3);
		attrTypeList.push_back($5);
		attrNumList.push_back($7);
		attrNotNullList.push_back(0);
	}
	| tableDetail3 ',' BLANK NAME BLANK NAME ATTRNUM
	{
		attrNameList.push_back($4);
		attrTypeList.push_back($6);
		attrNumList.push_back($7);
		attrNotNullList.push_back(0);
	}
	| tableDetail3 ',' BLANK NAME BLANK NAME BLANK ATTRNUM
	{
		attrNameList.push_back($4);
		attrTypeList.push_back($6);
		attrNumList.push_back($8);
		attrNotNullList.push_back(0);
	}
	| tableDetail3 ',' NAME BLANK NAME ATTRNUM BLANK NOT BLANK NUL
	{
		attrNameList.push_back($3);
		attrTypeList.push_back($5);
		attrNumList.push_back($6);
		attrNotNullList.push_back(1);
	}
	| tableDetail3 ',' NAME BLANK NAME BLANK ATTRNUM BLANK NOT BLANK NUL
	{
		attrNameList.push_back($3);
		attrTypeList.push_back($5);
		attrNumList.push_back($7);
		attrNotNullList.push_back(1);
	}
	| tableDetail3 ',' BLANK NAME BLANK NAME ATTRNUM BLANK NOT BLANK NUL
	{
		attrNameList.push_back($4);
		attrTypeList.push_back($6);
		attrNumList.push_back($7);
		attrNotNullList.push_back(1);
	}
	| tableDetail3 ',' BLANK NAME BLANK NAME BLANK ATTRNUM BLANK NOT BLANK NUL
	{
		attrNameList.push_back($4);
		attrTypeList.push_back($6);
		attrNumList.push_back($8);
		attrNotNullList.push_back(1);
	};


%%

/*void yyerror(const char *s)			
{
	cerr<<s<<endl;		
}
*/
void yyerror(const char* s) {
     	fprintf(stderr, "%s ", s);    
     	fprintf(stderr, "in line %d \n", yylineno);
}	

void errorReport(char* s) {
	printf("%s", s);
}

void createDb() {
	string temp0 = "/";
	string path = DB_ROOT+temp0+dbName;
	int isCreate = mkdir(path.c_str(), S_IRUSR | S_IWUSR | S_IXUSR | S_IRWXG |S_IRWXO);
   	if( !isCreate )
    		printf("successfully create database: %s \n",dbName.c_str());
   	else
  	 	printf("create database %s failed! error code : %d \n",dbName.c_str(),isCreate);
}

void useDb() {
	DIR *dp;
	string temp0 = "/";
	string path = DB_ROOT+temp0+dbName;
    	if ((dp = opendir(path.c_str())) == NULL)
    	{
		printf("database %s doesn't exist! \n", dbName.c_str());
    	    	return;
    	}
	currentDb = dbName;
 	printf("successfully check to database: %s \n", dbName.c_str()); 	
   	closedir(dp);
    	return;
}


void dropDb() {
	string temp0 = "/";	
	string temp1 = "rm -rf ";
	string path1 = DB_ROOT+temp0+dbName;
	string path = temp1 + DB_ROOT+temp0+dbName;
	if (dbName == currentDb) currentDb = "";
	if ((!access(path1.c_str(), F_OK))==0) {
		printf("database doens't exist... \n");
		return;
	} 
    	if (!system(path.c_str()))
		printf("successfully drop database: %s \n",dbName.c_str());
}

void printdir(char *dir, int depth)
{
    	DIR *dp;
    	struct dirent *entry;
    	struct stat statbuf;
   	if((dp = opendir(dir)) == NULL) {
    		fprintf(stderr,"cannot open directory: %s\n", dir);
        	return;
    	}
   	chdir(dir);
    	while((entry = readdir(dp)) != NULL) {
        	lstat(entry->d_name,&statbuf);
        		if(S_ISDIR(statbuf.st_mode)) {
           
            		if(strcmp(".",entry->d_name) == 0 ||
               		 	strcmp("..",entry->d_name) == 0)
               		 	continue;
           		printf("%*s%s/\n",depth,"",entry->d_name); 
            		printdir(entry->d_name,depth+4);
       		}
       		else 
				if (entry->d_name[0]!='.') printf("%*s%s\n",depth,"",entry->d_name);
  	}
   	chdir("..");
    	closedir(dp);
}

void showDb() {
	printdir(DB_ROOT,0);
}

void dropTb() {
	if (currentDb == "") {
		printf("Plz choose a DB first... \n");
		return;
	}	
	string temp0 = "/";	
	string temp1 = "rm -rf ";
	string path1 = DB_ROOT+temp0+currentDb+temp0+tbName;
	string path = temp1 + DB_ROOT+temp0+currentDb+temp0+tbName;
    	if ((access(path1.c_str(), F_OK)))
	{
		printf("table %s doesn't exist... \n", tbName.c_str());
		return;
	} 
    	if (!system(path.c_str()))
		printf("successfully drop table: %s \n",dbName.c_str());
}

void createTb() {
	if (currentDb == "") {
		printf("Plz choose a DB first... \n");
		return;
	}
	string temp0 = "/";
	string temp1 = ".txt";
	string path = DB_ROOT+temp0+currentDb+temp0+tbName;
	if((access(path.c_str(),F_OK))==0)
	{
		printf("table is already exist... \n");
	} 
	else {
		int fd=open(path.c_str(),O_RDWR | O_CREAT, S_IRWXU);
		printf("success... \n");
		FileManager* fm = new FileManager();
		BufPageManager* bpm = new BufPageManager(fm); 

		RecordManager* rm = new RecordManager(fm);
		int fileID;
		fm->openFile(path.c_str(), fileID); 
		int attr_num = attrNameList.size();
		vector<string> attr_name;
		int attr_len[attr_num*3]; // {1, 10, 1, 0, 25, 1, 0, 1, 1};
		int primary_key = -1;
		string temp0 = "\"";
		for (int i=0; i<attr_num; i++) {
			if (attrTypeList[i]=="INT"  || attrTypeList[i]=="int" )attr_len[i*3] = 1; else
			if (attrTypeList[i]=="VARCHAR" || attrTypeList[i]=="varchar" )attr_len[i*3] = 0; else {
				errorReport("Type error! \n");
				dropTb();
				return;
			}
			attr_len[i*3+1] = atoi(attrNumList[i].c_str());
			attr_len[i*3+2] = attrNotNullList[i];
			string temp = temp0+attrNameList[i]+temp0;
			attr_name.push_back(attrNameList[i]);
			if (attrNameList[i] == primaryKey) primary_key = i;		
		}
		rm->init(fileID, attr_num, attr_len, primary_key, attr_name);
	}
}


void showTb() {
	if (currentDb == "") {
		printf("Plz choose a DB first... \n");
		return;
	}
	string temp0 = "/";
	string temp1 = ".txt";
	string path = DB_ROOT+temp0+currentDb+temp0;
	char * ch = (char*)path.c_str();
	printdir(ch,0);
}


void deleteFrom() {
	if (currentDb == "") {
		printf("Plz choose a DB first... \n");
		return;
	}  
	string temp0 = "/";
	string temp1 = ".txt";
	string temp2 = "'";
	string path = DB_ROOT+temp0+currentDb+temp0+tbName;
	if((access(path.c_str(),F_OK)))
	{
		printf("table %s doesn't exist... \n", tbName.c_str());
		return;
	}

	int fileID;
	FileManager* fm = new FileManager();
	fm->openFile(path.c_str(), fileID); //打开文件，fileID是返回的文件id
	RecordManager* rm = new RecordManager(fm);
	rm->load_table_info(fileID);
	
	vector<vector<string> > record = rm->get_all_record(fileID);
	
	vector<string> attr = rm->get_attr_name();
	vector<int> type = rm->get_attr_type();
	vector<int> clauseLeft, clauseRight;
	clauseLeft.clear();
	clauseRight.clear();
	int flag;
	for (int i=0; i<clauseNameList.size(); i++) {
		flag = 0;
		for (int j=0; j<attr.size(); j++)
			if (attr[j] == clauseNameList[i]) {
				flag = j+1;
				break;
			}
		if (flag == 0) {
			printf("attrName %s doesn't exist.. \n", clauseNameList[i].c_str());
			return;	
		}
		clauseLeft.push_back(flag);
		flag = 0;
		if (clauseRightList[i][0] == '\'' || (clauseRightList[i][0]>='0' && clauseRightList[i][0]<='9')) {
			clauseRight.push_back(0);
			continue;
		}
		for (int j=0; j<attr.size(); j++)
			if (attr[j] == clauseRightList[i]) {
				flag = j+1;
				break;
			}
		if (flag == 0) {
			printf("attrName %s doesn't exist.. \n", clauseRightList[i].c_str());
			return;	
		}
		clauseRight.push_back(flag);
	}

	flag = 0;
	vector<string> delList;
	delList.clear();
	string temp = "";
	for (int i=0; i<record.size(); i++) { 
		flag = 0;
		for (int j=0; j<clauseOpList.size(); j++) {	
			if (clauseOpList[j] == "is") {
				if (record[i][clauseLeft[j]] != "NULL") { flag = 1; break;} 
			}			
			if (clauseOpList[j] == "=") {
				if (type[clauseLeft[j]-1]==0 && clauseRight[j]>0 && type[clauseRight[j]-1]==0) {
					if (record[i][clauseLeft[j]] != record[i][clauseRight[j]]) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==0 && clauseRight[j]==0 && clauseRightList[j][0]=='\'') {
					temp = temp2+record[i][clauseLeft[j]]+temp2;
					cout << "a " << record[i][clauseLeft[j]] << endl;
					if (temp != clauseRightList[j]) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]>0 && type[clauseRight[j]-1]==1) {
					if (record[i][clauseLeft[j]] != record[i][clauseRight[j]]) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]==0 && clauseRightList[j][0]!='\'') {
					if (record[i][clauseLeft[j]] != clauseRightList[j]) {
						flag = 1;
						break;
					}
				} else {
					printf("compare error! \n");
					return;
				}
				
			}
			if (clauseOpList[j] == ">") {
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]>0 && type[clauseRight[j]-1]==1) {
					if (atoi(record[i][clauseLeft[j]].c_str()) <= atoi(record[i][clauseRight[j]].c_str())) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]==0 && clauseRightList[j][0]!='\'') {
					if (atoi(record[i][clauseLeft[j]].c_str()) <= atoi(clauseRightList[j].c_str())) {
						flag = 1;
						break;
					}
				} else {
					printf("compare error! \n");
					return;
				}
			}
			if (clauseOpList[j] == "<") {
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]>0 && type[clauseRight[j]-1]==1) {
					if (atoi(record[i][clauseLeft[j]].c_str()) >= atoi(record[i][clauseRight[j]].c_str())) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]==0 && clauseRightList[j][0]!='\'') {
					if (atoi(record[i][clauseLeft[j]].c_str()) >= atoi(clauseRightList[j].c_str())) {
						flag = 1;
						break;
					}
				} else {
					printf("compare error! \n");
					return;
				}
			}
			if (clauseOpList[j] == ">=") {
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]>0 && type[clauseRight[j]-1]==1) {
					if (atoi(record[i][clauseLeft[j]].c_str()) < atoi(record[i][clauseRight[j]].c_str())) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]==0 && clauseRightList[j][0]!='\'') {
					if (atoi(record[i][clauseLeft[j]].c_str()) < atoi(clauseRightList[j].c_str())) {
						flag = 1;
						break;
					}
				} else {
					printf("compare error! \n");
					return;
				}
			}
			if (clauseOpList[j] == "<=") {
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]>0 && type[clauseRight[j]-1]==1) {
					if (atoi(record[i][clauseLeft[j]].c_str()) > atoi(record[i][clauseRight[j]].c_str())) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]==0 && clauseRightList[j][0]!='\'') {
					if (atoi(record[i][clauseLeft[j]].c_str()) > atoi(clauseRightList[j].c_str())) {
						flag = 1;
						break;
					}
				} else {
					printf("compare error! \n");
					return;
				}
			}
			if (clauseOpList[j] == "!=") {
				if (type[clauseLeft[j]-1]==0 && clauseRight[j]>0 && type[clauseRight[j]-1]==0) {
					if (record[i][clauseLeft[j]] == record[i][clauseRight[j]]) {
						flag = 1;
						break;
					} 
				} else
				if (type[clauseLeft[j]-1]==0 && clauseRight[j]==0 && clauseRightList[j][0]=='\'') {
					temp = temp2+record[i][clauseLeft[j]]+temp2;
					if (temp == clauseRightList[j]) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]>0 && type[clauseRight[j]-1]==1) {
					if (record[i][clauseLeft[j]] == record[i][clauseRight[j]]) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]==0 && clauseRightList[j][0]!='\'') {
					if (record[i][clauseLeft[j]] == clauseRightList[j]) {
						flag = 1;
						break;
					}
				} else {
					printf("compare error! \n");
					return;
				}
			}
		}
		if (flag == 0) {
			delList.push_back(record[i][0]);
		}	
	}
	cout << endl;
	for (int i=0; i<delList.size(); i++) 
		rm->delete_record(fileID, atoi(delList[i].c_str()));
	//rm->print_all_record(fileID); 
}

char orderBetween(char top, char now) {
	if (now=='\0' && top =='\0') return '=';
	if (now=='\0') return '>';
	if ((top == '+' || top == '-') && (now == '*' || now == '/')) return '<';
	if (top == '\0') return '<';
	return '>';
}

string to_string_my(int a)
{
   ostringstream ostr;
   ostr << a;
   string astr = ostr.str();
   //cout << astr <<endl;
   return astr ;
}

void updateSet() {
	if (currentDb == "") {
		printf("Plz choose a DB first... \n");
		return;
	}  
	string temp0 = "/";
	string temp1 = ".txt";
	string temp2 = "'";
	string path = DB_ROOT+temp0+currentDb+temp0+tbName;
	string path2 = path;
	if((access(path.c_str(),F_OK)))
	{
		printf("table %s doesn't exist... \n", tbName.c_str());
		return;
	}
	string set1 = "", set2 = "";
	int now = 0;
	while (setName[now]!='_' && now < setName.length()-1) now++;
	if (now!=setName.length()-1) {
		for (int i=0; i<now; i++) set1 += setName[i];
		for (int i=now+1; i<setName.length(); i++) set2 += setName[i];
	}
	path = DB_ROOT+temp0+currentDb+temp0+set1;

	int ofileID;
	FileManager* ofm = new FileManager();
	RecordManager* orm;
	
	vector<vector<string> > orecord;
	
	vector<string> oattr; 
	vector<int> otype; 
	int okey = -1;
	if(set1!="" && !(access(path.c_str(),F_OK)))
	{
		ofm->openFile(path.c_str(), ofileID);
		orm = new RecordManager(ofm);
		orm -> load_table_info(ofileID);
		orecord = orm->get_all_record(ofileID);
		oattr = orm->get_attr_name();
		otype = orm->get_attr_type();
		for (int i=0; i<oattr.size(); i++)
			if (set2 == oattr[i]) { okey = i; break;} 
	}
	cout << "okey: " << okey << endl;
	int fileID;
	FileManager* fm = new FileManager();
	fm->openFile(path2.c_str(), fileID); //打开文件，fileID是返回的文件id
	RecordManager* rm = new RecordManager(fm);
	rm->load_table_info(fileID);
	
	vector<vector<string> > record = rm->get_all_record(fileID);
	
	vector<string> attr = rm->get_attr_name();
	vector<int> type = rm->get_attr_type();
	vector<int> clauseLeft, clauseRight;
	clauseLeft.clear();
	clauseRight.clear();
	int flag;
	for (int i=0; i<clauseNameList.size(); i++) {
		
		flag = 0;
		for (int j=0; j<attr.size(); j++) {
			if (attr[j] == clauseNameList[i]) {
				flag = j+1;
				break;
			}
		}
		if (flag == 0) {
			printf("attrName %s doesn't exist.. \n", clauseNameList[i].c_str());
			return;	
		}
		clauseLeft.push_back(flag);
		flag = 0;
		if (clauseRightList[i][0] == '\'' || (clauseRightList[i][0]>='0' && clauseRightList[i][0]<='9')) {
			clauseRight.push_back(0);
			continue;
		}
		for (int j=0; j<attr.size(); j++)
			if (attr[j] == clauseRightList[i]) {
				flag = j+1;
				break;
			}
		if (flag == 0) {
			printf("attrName %s doesn't exist.. \n", clauseRightList[i].c_str());
			return;	
		}
		clauseRight.push_back(flag);
	}

	flag = 0;
	vector<string> delList;
	delList.clear();
	string temp = "";
	int set = -1;
	for (int i=0; i<attr.size(); i++) {
		if (attr[i] == setName) {
			set = i;
			break;
		}	
	}
	if (set == -1) {
		printf("attrName %s doesn't exist.. \n", setName.c_str());
		return;
	}	
	string ans = "";
	for (int i=0; i<record.size(); i++) { 
		flag = 0;
		for (int j=0; j<clauseOpList.size(); j++) {
			if (clauseOpList[j] == "is") {
				if (record[i][clauseLeft[j]] != "NULL") { flag = 1; break;} 
			}			
					
			if (clauseOpList[j] == "=") {
				if (type[clauseLeft[j]-1]==0 && clauseRight[j]>0 && type[clauseRight[j]-1]==0) {
					if (record[i][clauseLeft[j]] != record[i][clauseRight[j]]) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==0 && clauseRight[j]==0 && clauseRightList[j][0]=='\'') {
					temp = temp2+record[i][clauseLeft[j]]+temp2;
					if (temp != clauseRightList[j]) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]>0 && type[clauseRight[j]-1]==1) {
					if (record[i][clauseLeft[j]] != record[i][clauseRight[j]]) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]==0 && clauseRightList[j][0]!='\'') {
					if (record[i][clauseLeft[j]] != clauseRightList[j]) {
						flag = 1;
						break;
					}
				} else {
					printf("compare error! \n");
					return;
				}
				
			}
			if (clauseOpList[j] == ">") {
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]>0 && type[clauseRight[j]-1]==1) {
					if (atoi(record[i][clauseLeft[j]].c_str()) <= atoi(record[i][clauseRight[j]].c_str())) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]==0 && clauseRightList[j][0]!='\'') {
					if (atoi(record[i][clauseLeft[j]].c_str()) <= atoi(clauseRightList[j].c_str())) {
						flag = 1;
						break;
					}
				} else {
					printf("compare error! \n");
					return;
				}
			}
			if (clauseOpList[j] == "<") {
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]>0 && type[clauseRight[j]-1]==1) {
					if (atoi(record[i][clauseLeft[j]].c_str()) >= atoi(record[i][clauseRight[j]].c_str())) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]==0 && clauseRightList[j][0]!='\'') {
					if (atoi(record[i][clauseLeft[j]].c_str()) >= atoi(clauseRightList[j].c_str())) {
						flag = 1;
						break;
					}
				} else {
					printf("compare error! \n");
					return;
				}
			}
			if (clauseOpList[j] == ">=") {
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]>0 && type[clauseRight[j]-1]==1) {
					if (atoi(record[i][clauseLeft[j]].c_str()) < atoi(record[i][clauseRight[j]].c_str())) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]==0 && clauseRightList[j][0]!='\'') {
					if (atoi(record[i][clauseLeft[j]].c_str()) < atoi(clauseRightList[j].c_str())) {
						flag = 1;
						break;
					}
				} else {
					printf("compare error! \n");
					return;
				}
			}
			if (clauseOpList[j] == "<=") {
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]>0 && type[clauseRight[j]-1]==1) {
					if (atoi(record[i][clauseLeft[j]].c_str()) > atoi(record[i][clauseRight[j]].c_str())) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]==0 && clauseRightList[j][0]!='\'') {
					if (atoi(record[i][clauseLeft[j]].c_str()) > atoi(clauseRightList[j].c_str())) {
						flag = 1;
						break;
					}
				} else {
					printf("compare error! \n");
					return;
				}
			}
			if (clauseOpList[j] == "!=") {
				if (type[clauseLeft[j]-1]==0 && clauseRight[j]>0 && type[clauseRight[j]-1]==0) {
					if (record[i][clauseLeft[j]] == record[i][clauseRight[j]]) {
						flag = 1;
						break;
					} 
				} else
				if (type[clauseLeft[j]-1]==0 && clauseRight[j]==0 && clauseRightList[j][0]=='\'') {
					temp = temp2+record[i][clauseLeft[j]]+temp2;
					if (temp == clauseRightList[j]) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]>0 && type[clauseRight[j]-1]==1) {
					if (record[i][clauseLeft[j]] == record[i][clauseRight[j]]) {
						flag = 1;
						break;
					}
				} else
				if (type[clauseLeft[j]-1]==1 && clauseRight[j]==0 && clauseRightList[j][0]!='\'') {
					if (record[i][clauseLeft[j]] == clauseRightList[j]) {
						flag = 1;
						break;
					}
				} else {
					printf("compare error! \n");
					return;
				}
			}
		}
		if (flag == 0) {
			ans = "";
			int flag1 = 0;
			vector<string> tempexprValueList;
			tempexprValueList.clear();
			for (int k=0; k<exprValueList.size(); k++) {
				if (exprValueList[k][0]!='\'' && (exprValueList[k][0]<'0' || exprValueList[k][0]>'9')) {//is a attrName
					for (int k2=0; k2<attr.size(); k2++)	
						if (attr[k2] == exprValueList[k]) {
							flag1 = 1;
							tempexprValueList.push_back(record[i][k2+1]);
							if (type[k2] == 0) tempexprValueList[k] = temp2 + tempexprValueList[k] + temp2;
							break;
						}	
					if (flag1 == 0)	{
						printf("attrName error! \n");
						return;
					}		 
				} else
				tempexprValueList.push_back(exprValueList[k]);
					
			}
			cout << tempexprValueList.size() << endl;
			if (tempexprValueList[0][0] != '\'' && type[set]==0) {
				printf("Operator error! \n");
				return;
			}
			if (tempexprValueList[0][0] == '\'' && exprOpList.size()==0 && type[set]==0) {
				string tempa = "";
				for (int k=1; k<tempexprValueList[0].length()-1; k++) tempa += tempexprValueList[0][k];
				if (rm->update_record(fileID, atoi(record[i][0].c_str()), attr[set], tempexprValueList[0],1)) {
					cout << "wrong update" << endl;
				}
				else {
					cout << "success update" << endl;
				}
				//rm->print_all_record(fileID);	
				return;		
			} else
			if (type[set]==1) {
				for (int k=0; k<tempexprValueList.size(); k++)
					if (tempexprValueList[k][0] == '\'') {
						printf("type error! \n");
						return;					
					}				
				stack<int> opnd;
				stack<char> optr;
				while( !opnd.empty() ) opnd.pop(); 
				while( !optr.empty() ) optr.pop(); 
				optr.push('\0');
				int now=0,valuePos=0,opPos=0;
				exprOpList.push_back('\0');
				int pOpnd1, pOpnd2;
				while (!optr.empty()) {

					if (now==0) {
						opnd.push(atoi(tempexprValueList[valuePos].c_str()));
						valuePos++;
						now = 1;
						if (exprOpList[opPos] == '\0') now = 2; 
					} else {
						if (now!=2)now = 0;
						switch (orderBetween(optr.top(), exprOpList[opPos])) {
						case '<':
							optr.push(exprOpList[opPos]); opPos++;
	
							break;
						case '=':
							optr.pop();		
							break;
						case '>':
							now = 1; 
							char op = optr.top();
							optr.pop();
							if (op=='+') {
								pOpnd2 = opnd.top();
								opnd.pop();
								pOpnd1 = opnd.top();
								opnd.pop();
								opnd.push(pOpnd1+pOpnd2);
							}
							if (op=='-') {
								pOpnd2 = opnd.top();
								opnd.pop();
								pOpnd1 = opnd.top();
								opnd.pop();
								opnd.push(pOpnd1-pOpnd2);
							}
							if (op=='*') {
								pOpnd2 = opnd.top();
								opnd.pop();
								pOpnd1 = opnd.top();
								opnd.pop();
								opnd.push(pOpnd1*pOpnd2);
							}
							if (op=='/') {
								pOpnd2 = opnd.top();
								opnd.pop();
								pOpnd1 = opnd.top();
								opnd.pop();
								opnd.push(pOpnd1/pOpnd2);
							}
							break;
						}
					}	
				}
				int ans = opnd.top();
				int flag2 = 0;
				for (int j1=0; j1<orecord.size(); j1++)
					if (orecord[j1][okey+1]==to_string_my(ans)) { flag2=1;break;}
				if (flag2 == 0) {
					cout << "out key error!" << endl;
					return;
				}
				if (rm->update_record(fileID, atoi(record[i][0].c_str()), attr[set], to_string_my(ans),1)) {
					cout << "wrong update" << endl;
				}
				else {
					cout << "success update" << endl;
				}
				//
				//rm->print_all_record(fileID);	
			}
			
		}	
	}
} 



void select() {
	if (currentDb == "") {
		printf("Plz choose a DB first... \n");
		return;
	}  
	string temp0 = "/";
	string temp1 = ".txt";
	string temp2 = "'";
	string path = DB_ROOT+temp0+currentDb+temp0+tbName;
	if((access(path.c_str(),F_OK)))
	{
		printf("table %s doesn't exist... \n", tbName.c_str());
		return;
	}

	int fileID;
	FileManager* fm = new FileManager();
	fm->openFile(path.c_str(), fileID); //打开文件，fileID是返回的文件id
	RecordManager* rm = new RecordManager(fm);
	rm->load_table_info(fileID);
	
	vector<vector<string> > record = rm->get_all_record(fileID);
	
	vector<string> attr = rm->get_attr_name();
	vector<int> type = rm->get_attr_type();
	int pos=-1;
	for (int i=0; i<attr.size(); i++) 
		if (attr[i] == attrName) {
			pos = i;
			break;
		}
	if (pos == -1) {
		printf("attrName %s dosent exist... \n", attrName.c_str());
		return;
	}	
	if (type[pos]==0) {
		printf("Type error! \n");
		return;
	}
	if (selectType == "SUM" || selectType == "sum") {
		int ans = 0;
		for (int i=0; i<record.size(); i++) ans += atoi(record[i][pos+1].c_str());
		cout << "sum: " << ans << endl;
		return;
	}
	if (selectType == "AVG" || selectType == "avg") {
		int ans = 0;
		for (int i=0; i<record.size(); i++) ans += atoi(record[i][pos+1].c_str());
		ans/=record.size();
		cout << "avg: " << ans << endl;
		return;
	}
	if (selectType == "MAX" || selectType == "max") {
		int ans = atoi(record[0][pos+1].c_str());
		for (int i=1; i<record.size(); i++) 
			if (atoi(record[i][pos+1].c_str()) > ans) ans = atoi(record[i][pos+1].c_str());
		cout << "max: " << ans << endl;
		return;
	}
	if (selectType == "MIN" || selectType == "min") {
		int ans = atoi(record[0][pos+1].c_str());
		for (int i=1; i<record.size(); i++) 
			if (atoi(record[i][pos+1].c_str()) < ans) ans = atoi(record[i][pos+1].c_str());
		cout << "min: " << ans << endl;
		return;
	}
	printf("select type error! \n");
	return;
	
	
}

void selectGroup() {
	if (currentDb == "") {
		printf("Plz choose a DB first... \n");
		return;
	}  
	string temp0 = "/";
	string temp1 = ".txt";
	string temp2 = "'";
	string path = DB_ROOT+temp0+currentDb+temp0+tbName;
	if((access(path.c_str(),F_OK)))
	{
		printf("table %s doesn't exist... \n", tbName.c_str());
		return;
	}

	int fileID;
	FileManager* fm = new FileManager();
	fm->openFile(path.c_str(), fileID); //打开文件，fileID是返回的文件id
	RecordManager* rm = new RecordManager(fm);
	rm->load_table_info(fileID);
	vector<vector<string> > record = rm->get_all_record(fileID);
	vector<string> attr = rm->get_attr_name();
	vector<int> type = rm->get_attr_type();	
	if (attrName1 != attrName3) {
		printf("group name error! \n");
		return;	
	}
	int pos1 = -1, pos2 = -1;
	for (int i=0; i<attr.size(); i++) {
		if (attr[i] == attrName1) {
			pos1 = i;
		}
		if (attr[i] == attrName2) {
			pos2 = i;
		}
	}
	if (pos1 == -1) {
		printf("attrName %s dosent exist... \n", attrName1.c_str());
		return;
	}	
	if (pos2 == -1) {
		printf("attrName %s dosent exist... \n", attrName2.c_str());
		return;
	}	
	if (type[pos2]==0) {
		printf("Type error! \n");
		return;
	}
	vector<string> name;
	name.clear();
	vector<int> ans;
	vector<int> tim;
	ans.clear();
	for (int i=0; i<record.size(); i++) {
		vector<string>::iterator iter = find(name.begin(), name.end(), record[i][pos1+1]);
		if (iter == name.end()) {
			name.push_back(record[i][pos1+1]);
			ans.push_back(atoi(record[i][pos2+1].c_str()));
			tim.push_back(1);
		} else {
			if (selectType == "SUM" || selectType == "sum") {
				ans[iter-name.begin()] += atoi(record[i][pos2+1].c_str());
			} else
			if (selectType == "AVG" || selectType == "avg") {
				ans[iter-name.begin()] += atoi(record[i][pos2+1].c_str());
				tim[iter-name.begin()]++;
			} else
			if (selectType == "MAX" || selectType == "max") {
				if (atoi(record[i][pos2+1].c_str())>ans[iter-name.begin()]) ans[iter-name.begin()] = atoi(record[i][pos2+1].c_str());
			} else
			if (selectType == "MIN" || selectType == "min") {
				if (atoi(record[i][pos2+1].c_str())<ans[iter-name.begin()]) ans[iter-name.begin()] = atoi(record[i][pos2+1].c_str());
			} else {
				printf("select type error! \n");
				return;
			}
		}
	}
	if (selectType == "AVG" || selectType == "avg") 
		for (int i=0; i<ans.size(); i++) ans[i] /= tim[i];
	cout << attrName1 << "   " << attrName2 << endl;
	for (int i=0; i<name.size(); i++) 
		cout << name[i] << "  " << selectType << ": " << ans[i] << endl; 
}


void insertInto() {
	if (currentDb == "") { 
		printf("Plz choose a DB first... \n");
		return;
	}  
	string temp0 = "/";
	string temp1 = ".txt"; 
	string temp2 = "'"; 
	string path = DB_ROOT+temp0+currentDb+temp0+tbName;
	if((access(path.c_str(),F_OK)))
	{
		printf("table %s doesn't exist... \n", tbName.c_str());
		return;
	} 
	int fileID; 
	FileManager* fm = new FileManager();
	fm->openFile(path.c_str(), fileID); //打开文件，fileID是返回的文件id
	RecordManager* rm = new RecordManager(fm);
	rm->load_table_info(fileID);
	vector<string> newRecord;
	vector<int> nulls;
	int now = 0;
	if (cnt%100==0) cout << cnt<<endl;
	cnt++;
	for (int i=0; i<attrValueList.size(); i++) { 
		newRecord.clear();
		nulls.clear();
		for (int j=0; j<attrValueList[i].size(); j++) {
			if (attrValueList[i][j]=="null" || attrValueList[i][j]=="NULL") {
				nulls.push_back(0);
				if (type[j]==0) newRecord.push_back(temp2+attrValueList[i][j]+temp2); else newRecord.push_back("0");
			}
			else {
				newRecord.push_back(attrValueList[i][j]);
				nulls.push_back(1);			
			}	
		}
		rm->insert_record(fileID, newRecord, nulls );
		//cout << i << endl;
	}
	//delete fm;
	//delete rm;
	//rm->print_all_record(fileID);
}


void selectFrom() {
	if (currentDb == "") {
		printf("Plz choose a DB first... \n");
		return;
	}  
	string temp0 = "/";
	string temp1 = ".txt";
	string temp2 = "'";
	FileManager* fm[tbNameList.size()];
	RecordManager* rm[tbNameList.size()];
	int fileID[tbNameList.size()];
	vector<vector<string> > * record = new vector<vector<string> >[tbNameList.size()];
	vector<string> * attr = new vector<string>[tbNameList.size()];
	vector<int>* type = new vector<int>[tbNameList.size()];
	for (int i=0; i<tbNameList.size(); i++) {
		string path = DB_ROOT+temp0+currentDb+temp0+tbNameList[i];
		if((access(path.c_str(),F_OK)))
		{
			printf("table %s doesn't exist... \n", tbName.c_str());
			return;
		}
		fm[i] = new FileManager();
		fm[i]->openFile(path.c_str(), fileID[i]);
		rm[i] = new RecordManager(fm[i]);
		rm[i]->load_table_info(fileID[i]);
		record[i] = rm[i]->get_all_record(fileID[i]);
		attr[i] = rm[i]->get_attr_name();
		type[i] = rm[i]->get_attr_type();

	}
	
	vector<int> clauseLeftAttr, clauseRightAttr;
	vector<int> clauseLeft, clauseRight;
	vector<int> ans, ansAttr;
	clauseLeftAttr.clear();
	clauseRightAttr.clear();
	clauseLeft.clear();
	clauseRight.clear();
	ans.clear();
	ansAttr.clear();
	if (tbNameList.size() == 1) {
		for (int i=0; i<clauseNameList.size();i++) {
			int now;
			string temp = "";
			clauseLeft.push_back(0);
			temp = clauseNameList[i];
			now=-1;
			for (int j=0; j<attr[clauseLeft[i]].size(); j++) {
				if (attr[clauseLeft[i]][j] == temp) {
					now = j;
					break;
				}
			}
			if (now==-1) {
				printf("attr name doesn't exist!");
				return;	
			}
			clauseLeftAttr.push_back(now);
		}
		for (int i=0; i<clauseRightList.size();i++) {
			if (clauseRightList[i][0]=='\'' || (clauseRightList[i][0]>='0' && clauseRightList[i][0]<='9')) {
				clauseRight.push_back(-1);
				clauseRightAttr.push_back(-1);
				continue;
			}
			int now=0;
			clauseRight.push_back(0);
			string temp = "";
			temp = clauseRightList[i];
			now=-1;
			for (int j=0; j<attr[clauseRight[i]].size(); j++)
				if (attr[clauseRight[i]][j] == temp) {
					now = j;
					break;
				}
			if (now==-1) {
				printf("attr name doesn't exist! \n");
				return;	
			}
			clauseRightAttr.push_back(now);
		}
	} else {
		for (int i=0; i<clauseNameList.size();i++) {
			int now=0;
			while (clauseNameList[i][now] != '.' && now<clauseNameList[i].length()-1) now++;
			if (now==clauseNameList[i].length()-1) {
				printf("table name lost!");
				return;
			}
			string temp = "";
			for (int j=0; j<now; j++) temp += clauseNameList[i][j];
			int now2=-1;	
			for (int j=0; j<tbNameList.size(); j++)
				if (tbNameList[j] == temp) {
					now2 = j;
					break;
				}
			if (now2==-1) {
				printf("table name doesn't exist!");
				return;	
			}
			clauseLeft.push_back(now2);
			temp = "";
			for (int j=now+1; j<clauseNameList[i].length(); j++) temp += clauseNameList[i][j];
			now2=-1;
			for (int j=0; j<attr[clauseLeft[i]].size(); j++)
				if (attr[clauseLeft[i]][j] == temp) {
					now2 = j;
					break;
				}
			if (now2==-1) {
				printf("attr name doesn't exist! \n");
				return;	
			}
			clauseLeftAttr.push_back(now2);
		}
        	
		for (int i=0; i<clauseRightList.size();i++) {
			if (clauseRightList[i][0]=='\'' || (clauseRightList[i][0]>='0' && clauseRightList[i][0]<='9')) {
				clauseRight.push_back(-1);
				clauseRightAttr.push_back(-1);
				continue;
			}
			int now=0;
			while (clauseRightList[i][now] != '.' && now<clauseRightList[i].length()-1) now++;
			if (now==clauseRightList[i].length()-1) {
				printf("table name lost1! \n");
				return;
			}
			string temp = "";
			for (int j=0; j<now; j++) temp += clauseRightList[i][j];
			int now2=-1;
			for (int j=0; j<tbNameList.size(); j++)
				if (tbNameList[j] == temp) {
					now2 = j;
					break;
				}
			if (now2==-1) {
				printf("table name doesn't exist! \n");
				return;	
				}
			clauseRight.push_back(now2);
			temp = "";
			for (int j=now+1; j<clauseRightList[i].length(); j++) temp += clauseRightList[i][j];
			now2=-1;
			for (int j=0; j<attr[clauseRight[i]].size(); j++)
				if (attr[clauseRight[i]][j] == temp) {
					now2 = j;
					break;
				}
			if (now2==-1) {
				printf("attr name doesn't exist! \n");
				return;	
			}
			clauseRightAttr.push_back(now2);
		}
	}
	if (attrNameList.size() == 1 && attrNameList[0] == "*") {
		for (int i=0; i<record[0].size(); i++) { 
			int flag = 0;
			string temp = "";
			for (int j=0; j<clauseOpList.size(); j++) {
				if (clauseOpList[j] == "is") {
					if (record[0][i][clauseLeftAttr[j]+1] != "NULL") { flag = 1; break;} 
				}			
			
				if (clauseOpList[j] == "=") {
					if (type[0][clauseLeftAttr[j]]==0 && clauseRightAttr[j]>-1 && type[0][clauseRightAttr[j]]==0) {
						if (record[0][i][clauseLeftAttr[j]+1] != record[0][i][clauseRightAttr[j]+1]) {
							flag = 1;
							break;
						}
					} else
					if (type[0][clauseLeftAttr[j]]==0 && clauseRightAttr[j]==-1 && clauseRightList[j][0]=='\'') {
						temp = temp2+record[0][i][clauseLeftAttr[j]+1]+temp2;
						if (temp != clauseRightList[j]) {
							flag = 1;
							break;
						}
					} else
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]>-1 && type[0][clauseRightAttr[j]]==1) {
						if (record[0][i][clauseLeftAttr[j]+1] != record[0][i][clauseRightAttr[j]+1]) {
							flag = 1;
							break;
						}
					} else
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
						if (record[0][i][clauseLeftAttr[j]+1] != clauseRightList[j]) {
							flag = 1;
							break;
						}
					} else {
						printf("compare error! \n");
						return;
					}
				
				}
				if (clauseOpList[j] == ">") {
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]>-1 && type[0][clauseRightAttr[j]]==1) {
						if (atoi(record[0][i][clauseLeftAttr[j]+1].c_str()) <= atoi(record[0][i][clauseRightAttr[j]+1].c_str())) {
							flag = 1;
							break;
						}
					} else
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
						if (atoi(record[0][i][clauseLeftAttr[j]+1].c_str()) <= atoi(clauseRightList[j].c_str())) {
							flag = 1;
							break;
						}
					} else {
						printf("compare error! \n");
						return;
					}
				}
				if (clauseOpList[j] == "<") {
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]>-1 && type[0][clauseRightAttr[j]]==1) {
						if (atoi(record[0][i][clauseLeftAttr[j]+1].c_str()) >= atoi(record[0][i][clauseRightAttr[j]+1].c_str())) {
							flag = 1;
							break;
						}
					} else
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
						if (atoi(record[0][i][clauseLeftAttr[j]+1].c_str()) >= atoi(clauseRightList[j].c_str())) {
							flag = 1;
							break;
						}
					} else {
						printf("compare error! \n");
						return;
					}
				}
				if (clauseOpList[j] == ">=") {
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]>-1 && type[0][clauseRightAttr[j]]==1) {
						if (atoi(record[0][i][clauseLeftAttr[j]+1].c_str()) < atoi(record[0][i][clauseRightAttr[j]+1].c_str())) {
							flag = 1;
							break;
						}
					} else
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
						if (atoi(record[0][i][clauseLeftAttr[j]+1].c_str()) < atoi(clauseRightList[j].c_str())) {
							flag = 1;
							break;
						}
					} else {
						printf("compare error! \n");
						return;
					}
				}
				if (clauseOpList[j] == "<=") {
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]>-1 && type[0][clauseRightAttr[j]]==1) {
						if (atoi(record[0][i][clauseLeftAttr[j]+1].c_str()) > atoi(record[0][i][clauseRightAttr[j]+1].c_str())) {
							flag = 1;
							break;
						}
					} else
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
						if (atoi(record[0][i][clauseLeftAttr[j]+1].c_str()) > atoi(clauseRightList[j].c_str())) {
							flag = 1;
							break;
						}
					} else {
						printf("compare error! \n");
						return;
					}
				}
				if (clauseOpList[j] == "!=") {
					if (type[0][clauseLeftAttr[j]]==0 && clauseRightAttr[j]>-1 && type[0][clauseRightAttr[j]]==0) {
						if (record[0][i][clauseLeftAttr[j]+1] == record[0][i][clauseRightAttr[j]+1]) {
							flag = 1;
							break;
						} 
					} else
					if (type[0][clauseLeftAttr[j]]==0 && clauseRightAttr[j]==-1 && clauseRightList[j][0]=='\'') {
						temp = temp2+record[0][i][clauseLeftAttr[j]+1]+temp2;
						if (temp == clauseRightList[j]) {
							flag = 1;
							break;
						}
					} else
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]>-1 && type[0][clauseRightAttr[j]]==1) {
						if (record[0][i][clauseLeftAttr[j]+1] == record[0][i][clauseRightAttr[j]+1]) {
							flag = 1;
							break;
						}
					} else
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
						if (record[0][i][clauseLeftAttr[j]+1] == clauseRightList[j]) {
							flag = 1;
							break;
						}
					} else {
						printf("compare error! \n");
						return;
					}
				}
			}
			if (flag == 0) {
				for (int ii=0; ii<attr[0].size(); ii++) cout << record[0][i][ii+1] << "      ";
				cout << endl;
			}
		}
		return;
	}
	if (tbNameList.size() == 1) {
		for (int i=0; i<attrNameList.size();i++) {
			string temp = "";
			temp = attrNameList[i];
			ans.push_back(0);
			int now2=-1;
			for (int j=0; j<attr[ans[i]].size(); j++)
				if (attr[ans[i]][j] == temp) {
					now2 = j;
					break;
				}
			if (now2==-1) {
				printf("attr name doesn't exist1! \n");
				return;	
			}
			ansAttr.push_back(now2);
		}	
	} else {

		for (int i=0; i<attrNameList.size();i++) {
			int now=0;
			while (attrNameList[i][now] != '.' && now<attrNameList[i].length()-1) now++;
			if (now==attrNameList[i].length()-1) {
				printf("table name lost! \n");
				return;
			}
			string temp = "";
			for (int j=0; j<now; j++) temp += attrNameList[i][j];
			int now2=-1;
			for (int j=0; j<tbNameList.size(); j++)
				if (tbNameList[j] == temp) {
					now2 = j;
					break;
				}
			if (now2==-1) {
				printf("table name doesn't exist! \n");
				return;	
			}
			ans.push_back(now2);
			temp = "";
			for (int j=now+1; j<attrNameList[i].length(); j++) temp += attrNameList[i][j];
			now2=-1;
			for (int j=0; j<attr[ans[i]].size(); j++)
				if (attr[ans[i]][j] == temp) {
					now2 = j;
					break;
				}
			if (now2==-1) {
				printf("attr name doesn't exist! \n");
				return;	
			}
			ansAttr.push_back(now2);
		}
	}        
		
	if (tbNameList.size() == 1) {
		for (int i=0; i<record[0].size(); i++) { 
			int flag = 0;
			string temp = "";
			for (int j=0; j<clauseOpList.size(); j++) {
				if (clauseOpList[j] == "is") {
					if (record[0][i][clauseLeftAttr[j]+1] != "NULL") { flag = 1; break;} 
				}			
				if (clauseOpList[j] == "=") {
					if (type[0][clauseLeftAttr[j]]==0 && clauseRightAttr[j]>-1 && type[0][clauseRightAttr[j]]==0) {
						if (record[0][i][clauseLeftAttr[j]+1] != record[0][i][clauseRightAttr[j]+1]) {
							flag = 1;
							break;
						}
					} else
					if (type[0][clauseLeftAttr[j]]==0 && clauseRightAttr[j]==-1 && clauseRightList[j][0]=='\'') {
						temp = temp2+record[0][i][clauseLeftAttr[j]+1]+temp2;
						if (temp != clauseRightList[j]) {
							flag = 1;
							break;
						}
					} else
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]>-1 && type[0][clauseRightAttr[j]]==1) {
						if (record[0][i][clauseLeftAttr[j]+1] != record[0][i][clauseRightAttr[j]+1]) {
							flag = 1;
							break;
						}
					} else 
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
						if (record[0][i][clauseLeftAttr[j]+1] != clauseRightList[j]) {
							flag = 1;
							break;
						}
					} else {
						printf("compare error! \n");
						return;
					}
				
				}
				if (clauseOpList[j] == ">") {
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]>-1 && type[0][clauseRightAttr[j]]==1) {
						if (atoi(record[0][i][clauseLeftAttr[j]+1].c_str()) <= atoi(record[0][i][clauseRightAttr[j]+1].c_str())) {
							flag = 1;
							break;
						}
					} else
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
						if (atoi(record[0][i][clauseLeftAttr[j]+1].c_str()) <= atoi(clauseRightList[j].c_str())) {
							flag = 1;
							break;
						}
					} else {
						printf("compare error! \n");
						return;
					}
				}
				if (clauseOpList[j] == "<") {
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]>-1 && type[0][clauseRightAttr[j]]==1) {
						if (atoi(record[0][i][clauseLeftAttr[j]+1].c_str()) >= atoi(record[0][i][clauseRightAttr[j]+1].c_str())) {
							flag = 1;
							break;
						}
					} else
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
						if (atoi(record[0][i][clauseLeftAttr[j]+1].c_str()) >= atoi(clauseRightList[j].c_str())) {
							flag = 1;
							break;
						}
					} else {
						printf("compare error! \n");
						return;
					}
				}
				if (clauseOpList[j] == ">=") {
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]>-1 && type[0][clauseRightAttr[j]]==1) {
						if (atoi(record[0][i][clauseLeftAttr[j]+1].c_str()) < atoi(record[0][i][clauseRightAttr[j]+1].c_str())) {
							flag = 1;
							break;
						}
					} else
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
						if (atoi(record[0][i][clauseLeftAttr[j]+1].c_str()) < atoi(clauseRightList[j].c_str())) {
							flag = 1;
							break;
						}
					} else {
						printf("compare error! \n");
						return;
					}
				}
				if (clauseOpList[j] == "<=") {
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]>-1 && type[0][clauseRightAttr[j]]==1) {
						if (atoi(record[0][i][clauseLeftAttr[j]+1].c_str()) > atoi(record[0][i][clauseRightAttr[j]+1].c_str())) {
							flag = 1;
							break;
						}
					} else
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
						if (atoi(record[0][i][clauseLeftAttr[j]+1].c_str()) > atoi(clauseRightList[j].c_str())) {
							flag = 1;
							break;
						}
					} else {
						printf("compare error! \n");
						return;
					}
				}
				if (clauseOpList[j] == "!=") {
					if (type[0][clauseLeftAttr[j]]==0 && clauseRightAttr[j]>-1 && type[0][clauseRightAttr[j]]==0) {
						if (record[0][i][clauseLeftAttr[j]+1] == record[0][i][clauseRightAttr[j]+1]) {
							flag = 1;
							break;
						} 
					} else
					if (type[0][clauseLeftAttr[j]]==0 && clauseRightAttr[j]==-1 && clauseRightList[j][0]=='\'') {
						temp = temp2+record[0][i][clauseLeftAttr[j]+1]+temp2;
						if (temp == clauseRightList[j]) {
							flag = 1;
							break;
						}
					} else
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]>-1 && type[0][clauseRightAttr[j]]==1) {
						if (record[0][i][clauseLeftAttr[j]+1] == record[0][i][clauseRightAttr[j]+1]) {
							flag = 1;
							break;
						}
					} else
					if (type[0][clauseLeftAttr[j]]==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
						if (record[0][i][clauseLeftAttr[j]+1] == clauseRightList[j]) {
							flag = 1;
							break;
						}
					} else {
						printf("compare error! \n");
						return;
					}
				}
			}
			if (flag == 0) {
				cout << "ans: " << record[0][i][ansAttr[0]+1] << endl;
			}
		}
	}
	if (tbNameList.size() == 2) {
		for (int i=0; i<record[0].size(); i++) {

			for (int i2=0; i2<record[1].size(); i2++) { 
				int flag = 0;
				string temp = "";
				for (int j=0; j<clauseOpList.size(); j++) {
					if (clauseOpList[j] == "is") {
						if (clauseLeft[j]==0)
							if (record[clauseLeft[j]][i][clauseLeftAttr[j]+1] != "NULL") { flag = 1; break;} 
						if (clauseLeft[j]==1)
							if (record[clauseLeft[j]][i2][clauseLeftAttr[j]+1] != "NULL") { flag = 1; break;} 
					}			
					if (clauseOpList[j] == "=") {
						int tp1,tp2;
						if (clauseLeft[j]==0) tp1=type[0][clauseLeftAttr[j]]; else tp1=type[1][clauseLeftAttr[j]];
						if (clauseRight[j]==0) tp2=type[0][clauseRightAttr[j]]; else tp2=type[1][clauseRightAttr[j]];
							
						if (tp1==0 && clauseRightAttr[j]>-1 && tp2==0) {
							string str1="",str2="";										
							if (clauseLeft[j]==0) str1=record[0][i][clauseLeftAttr[j]+1]; else str1=record[1][i2][clauseLeftAttr[j]+1];
							if (clauseRight[j]==0) str2=record[0][i][clauseRightAttr[j]+1]; else str2=record[1][i2][clauseRightAttr[j]+1];
							if (str1 != str2) {
								flag = 1;
								break;
							}
						} else
						if (tp1==0 && clauseRightAttr[j]==-1 && clauseRightList[j][0]=='\'') {
							//cout << clauseRightList[j] << " "<< record[0][i][clauseLeftAttr[j]+1] << endl;
							if (clauseLeft[j]==0) temp = temp2+record[0][i][clauseLeftAttr[j]+1]+temp2; else temp = temp2+record[1][i2][clauseLeftAttr[j]+1]+temp2;
							if (temp != clauseRightList[j]) {
								flag = 1;
								break;
							}
						} else
						if (tp1==1 && clauseRightAttr[j]>-1 && tp2==1) {
							string str1="",str2="";										
							if (clauseLeft[j]==0) str1=record[0][i][clauseLeftAttr[j]+1]; else str1=record[1][i2][clauseLeftAttr[j]+1];
							if (clauseRight[j]==0) str2=record[0][i][clauseRightAttr[j]+1]; else str2=record[1][i2][clauseRightAttr[j]+1];
														
							if (str1 != str2) {
								flag = 1;
								break;
							}
						} else
						if (tp1==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
							if (clauseLeft[j]==0) temp = record[0][i][clauseLeftAttr[j]+1]; else temp = record[1][i2][clauseLeftAttr[j]+1];
							if (record[0][i][clauseLeftAttr[j]+1] != clauseRightList[j]) {
								flag = 1;
								break;
							}
						} else {
							printf("compare error! \n");
							return;
						}
					
					}
					if (clauseOpList[j] == ">") {
						int tp1,tp2;
						if (clauseLeft[j]==0) tp1=type[0][clauseLeftAttr[j]]; else tp1=type[1][clauseLeftAttr[j]];
						if (clauseRight[j]==0) tp2=type[0][clauseRightAttr[j]]; else tp2=type[1][clauseRightAttr[j]];
						
						if (tp1==1 && clauseRightAttr[j]>-1 && tp2==1) {
							string str1="",str2="";										
							if (clauseLeft[j]==0) str1=record[0][i][clauseLeftAttr[j]+1]; else str1=record[1][i2][clauseLeftAttr[j]+1];
							if (clauseRight[j]==0) str2=record[0][i][clauseRightAttr[j]+1]; else str2=record[1][i2][clauseRightAttr[j]+1];
							if (atoi(str1.c_str()) <= atoi(str2.c_str())) {
								flag = 1;
								break;
							}
						} else
						if (tp1==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
							if (clauseLeft[j]==0) temp = record[0][i][clauseLeftAttr[j]+1]; else temp = record[1][i2][clauseLeftAttr[j]+1];
							if (atoi(temp.c_str()) <= atoi(clauseRightList[j].c_str())) {
								flag = 1;
								break;
							}
						} else {
							printf("compare error! \n");
							return;
						}
					}
					if (clauseOpList[j] == "<") {
						int tp1,tp2;
						if (clauseLeft[j]==0) tp1=type[0][clauseLeftAttr[j]]; else tp1=type[1][clauseLeftAttr[j]];
						if (clauseRight[j]==0) tp2=type[0][clauseRightAttr[j]]; else tp2=type[1][clauseRightAttr[j]];
						
						if (tp1==1 && clauseRightAttr[j]>-1 && tp2==1) {
							string str1="",str2="";										
							if (clauseLeft[j]==0) str1=record[0][i][clauseLeftAttr[j]+1]; else str1=record[1][i2][clauseLeftAttr[j]+1];
							if (clauseRight[j]==0) str2=record[0][i][clauseRightAttr[j]+1]; else str2=record[1][i2][clauseRightAttr[j]+1];
							if (atoi(record[0][i][clauseLeftAttr[j]+1].c_str()) >= atoi(record[0][i][clauseRightAttr[j]+1].c_str())) {
								flag = 1;
								break;
							}
						} else
						if (tp1==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
							if (clauseLeft[j]==0) temp = record[0][i][clauseLeftAttr[j]+1]; else temp = record[1][i2][clauseLeftAttr[j]+1];
							if (atoi(temp.c_str()) >= atoi(clauseRightList[j].c_str())) {
								flag = 1;
								break;
							}
						} else {
							printf("compare error! \n");
							return;
						}
					}
					if (clauseOpList[j] == ">=") {
						int tp1,tp2;
						if (clauseLeft[j]==0) tp1=type[0][clauseLeftAttr[j]]; else tp1=type[1][clauseLeftAttr[j]];
						if (clauseRight[j]==0) tp2=type[0][clauseRightAttr[j]]; else tp2=type[1][clauseRightAttr[j]];
						
						if (tp1==1 && clauseRightAttr[j]>-1 && tp2==1) {
							string str1="",str2="";										
							if (clauseLeft[j]==0) str1=record[0][i][clauseLeftAttr[j]+1]; else str1=record[1][i2][clauseLeftAttr[j]+1];
							if (clauseRight[j]==0) str2=record[0][i][clauseRightAttr[j]+1]; else str2=record[1][i2][clauseRightAttr[j]+1];
							if (atoi(str1.c_str()) < atoi(str2.c_str())) {
								flag = 1;
								break;
							}
						} else
						if (tp1==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
							if (clauseLeft[j]==0) temp = record[0][i][clauseLeftAttr[j]+1]; else temp = record[1][i2][clauseLeftAttr[j]+1];
							if (atoi(temp.c_str()) < atoi(clauseRightList[j].c_str())) {
								flag = 1;
								break;
							}
						} else {
							printf("compare error! \n");
							return;
						}
					}
					if (clauseOpList[j] == "<=") {
						int tp1,tp2;
						if (clauseLeft[j]==0) tp1=type[0][clauseLeftAttr[j]]; else tp1=type[1][clauseLeftAttr[j]];
						if (clauseRight[j]==0) tp2=type[0][clauseRightAttr[j]]; else tp2=type[1][clauseRightAttr[j]];
						if (tp1==1 && clauseRightAttr[j]>-1 && tp2==1) {
							string str1="",str2="";										
							if (clauseLeft[j]==0) str1=record[0][i][clauseLeftAttr[j]+1]; else str1=record[1][i2][clauseLeftAttr[j]+1];
							if (clauseRight[j]==0) str2=record[0][i][clauseRightAttr[j]+1]; else str2=record[1][i2][clauseRightAttr[j]+1];
							if (atoi(str1.c_str()) > atoi(str2.c_str())) {
								flag = 1;
								break;
							}
						} else
						if (tp1==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
							if (clauseLeft[j]==0) temp = record[0][i][clauseLeftAttr[j]+1]; else temp = record[1][i2][clauseLeftAttr[j]+1];
							if (atoi(temp.c_str()) > atoi(clauseRightList[j].c_str())) {
								flag = 1;
								break;
							}
						} else {
							printf("compare error! \n");
							return;
						}
					}
					if (clauseOpList[j] == "!=") {
						int tp1,tp2;
						if (clauseLeft[j]==0) tp1=type[0][clauseLeftAttr[j]]; else tp1=type[1][clauseLeftAttr[j]];
						if (clauseRight[j]==0) tp2=type[0][clauseRightAttr[j]]; else tp2=type[1][clauseRightAttr[j]];
						if (tp1==0 && clauseRightAttr[j]>-1 && tp2==0) {
							string str1="",str2="";										
							if (clauseLeft[j]==0) str1=record[0][i][clauseLeftAttr[j]+1]; else str1=record[1][i2][clauseLeftAttr[j]+1];
							if (clauseRight[j]==0) str2=record[0][i][clauseRightAttr[j]+1]; else str2=record[1][i2][clauseRightAttr[j]+1];
							if (str1 == str2) {
								flag = 1;
								break;
							} 
						} else
						if (tp1==0 && clauseRightAttr[j]==-1 && clauseRightList[j][0]=='\'') {
							if (clauseLeft[j]==0) temp = record[0][i][clauseLeftAttr[j]+1]; else temp = record[1][i2][clauseLeftAttr[j]+1];
							if (temp == clauseRightList[j]) {
								flag = 1;
								break;
							}
						} else
						if (tp1==1 && clauseRightAttr[j]>-1 && tp2==1) {
							string str1="",str2="";										
							if (clauseLeft[j]==0) str1=record[0][i][clauseLeftAttr[j]+1]; else str1=record[1][i2][clauseLeftAttr[j]+1];
							if (clauseRight[j]==0) str2=record[0][i][clauseRightAttr[j]+1]; else str2=record[1][i2][clauseRightAttr[j]+1];
							if (str1 == str2) {
								flag = 1;
								break;
							}
						} else
						if (tp1==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
							if (clauseLeft[j]==0) temp = record[0][i][clauseLeftAttr[j]+1]; else temp = record[1][i2][clauseLeftAttr[j]+1];
							if (temp == clauseRightList[j]) {
								flag = 1;
								break;
							}
						} else {
							printf("compare error! \n");
							return;
						}
					}
				}
				if (flag == 0) {
					cout << "ans: ";
					for (int p=0; p<ans.size(); p++)
						if (ans[p]==0) cout << record[ans[p]][i][ansAttr[p]+1] << " "; else cout << record[ans[p]][i2][ansAttr[p]+1];
					cout << endl;
				}
			}
		}
	} 
	if (tbNameList.size() == 3) {
		cout << record[0].size() << " " << record[1].size() << " " << record[2].size() << endl;
		for (int i=0; i<record[0].size(); i++) {
			for (int i2=0; i2<record[1].size(); i2++) {
				for (int i3=0; i3<record[2].size(); i3++) { 
				//if (i3%10000==0) cout << "i3: " << i3 << endl; 
					int flag = 0;
					string temp = "";
					for (int j=0; j<clauseOpList.size(); j++) {
						if (clauseOpList[j] == "is") {
							if (clauseLeft[j]==0)
								if (record[clauseLeft[j]][i][clauseLeftAttr[j]+1] != "NULL") { flag = 1; break;} 
							if (clauseLeft[j]==1)
								if (record[clauseLeft[j]][i2][clauseLeftAttr[j]+1] != "NULL") { flag = 1; break;} 
							if (clauseLeft[j]==2)
								if (record[clauseLeft[j]][i3][clauseLeftAttr[j]+1] != "NULL") { flag = 1; break;} 
						}			
						if (clauseOpList[j] == "=") {
							int tp1,tp2;
							if (clauseLeft[j]==0) tp1=type[0][clauseLeftAttr[j]]; else 
							if (clauseLeft[j]==1) tp1=type[1][clauseLeftAttr[j]]; else tp1=type[2][clauseLeftAttr[j]];
							if (clauseRight[j]==0) tp2=type[0][clauseRightAttr[j]]; else 
							if (clauseRight[j]==1) tp2=type[1][clauseRightAttr[j]]; else tp2=type[2][clauseRightAttr[j]];
								
							if (tp1==0 && clauseRightAttr[j]>-1 && tp2==0) {
								string str1="",str2="";										
								if (clauseLeft[j]==0) str1=record[0][i][clauseLeftAttr[j]+1]; else 
								if (clauseLeft[j]==1) str1=record[1][i2][clauseLeftAttr[j]+1]; else str1=record[2][i3][clauseLeftAttr[j]+1];
								if (clauseRight[j]==0) str2=record[0][i][clauseRightAttr[j]+1]; else 
								if (clauseRight[j]==1) str2=record[1][i2][clauseRightAttr[j]+1]; else str2=record[2][i3][clauseRightAttr[j]+1];
								if (str1 != str2) {
									flag = 1;
									break;
								}
							} else
							if (tp1==0 && clauseRightAttr[j]==-1 && clauseRightList[j][0]=='\'') {
								//cout << clauseRightList[j] << " "<< record[0][i][clauseLeftAttr[j]+1] << endl;
								if (clauseLeft[j]==0) temp = temp2+record[0][i][clauseLeftAttr[j]+1]+temp2; else
								if (clauseLeft[j]==1) temp = temp2+record[1][i2][clauseLeftAttr[j]+1]+temp2; else temp = temp2+record[2][i3][clauseLeftAttr[j]+1]+temp2;
								if (temp != clauseRightList[j]) {
									flag = 1;
									break;
								}
							} else
							if (tp1==1 && clauseRightAttr[j]>-1 && tp2==1) {
								string str1="",str2="";										
								if (clauseLeft[j]==0) str1=record[0][i][clauseLeftAttr[j]+1]; else 
								if (clauseLeft[j]==1) str1=record[1][i2][clauseLeftAttr[j]+1]; else str1=record[2][i3][clauseLeftAttr[j]+1];
								if (clauseRight[j]==0) str2=record[0][i][clauseRightAttr[j]+1]; else 
								if (clauseRight[j]==1) str2=record[1][i2][clauseRightAttr[j]+1]; else str2=record[2][i3][clauseRightAttr[j]+1];
															
								if (str1 != str2) {
									flag = 1;
									break;
								}
							} else
							if (tp1==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
								if (clauseLeft[j]==0) temp = record[0][i][clauseLeftAttr[j]+1]; else
						 		if (clauseLeft[j]==1) temp = record[1][i2][clauseLeftAttr[j]+1]; else temp = record[2][i3][clauseLeftAttr[j]+1];
								if (record[0][i][clauseLeftAttr[j]+1] != clauseRightList[j]) {
									flag = 1;
									break;
								}
							} else {
								printf("compare error! \n");
								return;
							}
						
						}
						if (clauseOpList[j] == ">") {
							int tp1,tp2;
							if (clauseLeft[j]==0) tp1=type[0][clauseLeftAttr[j]]; else 
							if (clauseLeft[j]==1) tp1=type[1][clauseLeftAttr[j]]; else tp1=type[2][clauseLeftAttr[j]];
				 			if (clauseRight[j]==0) tp2=type[0][clauseRightAttr[j]]; else 
							if (clauseRight[j]==1) tp2=type[1][clauseRightAttr[j]]; else tp2=type[2][clauseRightAttr[j]];
							
							if (tp1==1 && clauseRightAttr[j]>-1 && tp2==1) {
								string str1="",str2="";										
								if (clauseLeft[j]==0) str1=record[0][i][clauseLeftAttr[j]+1]; else 
								if (clauseLeft[j]==1) str1=record[1][i2][clauseLeftAttr[j]+1]; else str1=record[2][i3][clauseLeftAttr[j]+1];
								if (clauseRight[j]==0) str2=record[0][i][clauseRightAttr[j]+1]; else 
								if (clauseRight[j]==1) str2=record[1][i2][clauseRightAttr[j]+1]; else str2=record[2][i3][clauseRightAttr[j]+1];
								if (atoi(str1.c_str()) <= atoi(str2.c_str())) {
									flag = 1;
									break;
									}
							} else
							if (tp1==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
								if (clauseLeft[j]==0) temp = record[0][i][clauseLeftAttr[j]+1]; else
								if (clauseLeft[j]==1) temp = record[1][i2][clauseLeftAttr[j]+1]; else temp = record[2][i3][clauseLeftAttr[j]+1];
								if (atoi(temp.c_str()) <= atoi(clauseRightList[j].c_str())) {
									flag = 1;
									break;
								}
							} else {
								printf("compare error! \n");
								return;
							}
						}
						if (clauseOpList[j] == "<") {
							int tp1,tp2;
							if (clauseLeft[j]==0) tp1=type[0][clauseLeftAttr[j]]; else 
							if (clauseLeft[j]==1) tp1=type[1][clauseLeftAttr[j]]; else tp1=type[2][clauseLeftAttr[j]];
							if (clauseRight[j]==0) tp2=type[0][clauseRightAttr[j]]; else 
							if (clauseRight[j]==1) tp2=type[1][clauseRightAttr[j]]; else tp2=type[2][clauseRightAttr[j]];
							
							if (tp1==1 && clauseRightAttr[j]>-1 && tp2==1) {
								string str1="",str2="";										
								if (clauseLeft[j]==0) str1=record[0][i][clauseLeftAttr[j]+1]; else 
								if (clauseLeft[j]==1) str1=record[1][i2][clauseLeftAttr[j]+1]; else str1=record[2][i3][clauseLeftAttr[j]+1];
								if (clauseRight[j]==0) str2=record[0][i][clauseRightAttr[j]+1]; else 
								if (clauseRight[j]==1) str2=record[1][i2][clauseRightAttr[j]+1]; else str2=record[2][i3][clauseRightAttr[j]+1];
								if (atoi(record[0][i][clauseLeftAttr[j]+1].c_str()) >= atoi(record[0][i][clauseRightAttr[j]+1].c_str())) {
									flag = 1;
									break;
								}
							} else
							if (tp1==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
								if (clauseLeft[j]==0) temp = record[0][i][clauseLeftAttr[j]+1]; else
								if (clauseLeft[j]==1) temp = record[1][i2][clauseLeftAttr[j]+1]; else temp = record[2][i3][clauseLeftAttr[j]+1];
								if (atoi(temp.c_str()) >= atoi(clauseRightList[j].c_str())) {
								flag = 1;
								break;
							}
							} else {
								printf("compare error! \n");
								return;
							}
						}
						if (clauseOpList[j] == ">=") {
							int tp1,tp2;
							if (clauseLeft[j]==0) tp1=type[0][clauseLeftAttr[j]]; else 
							if (clauseLeft[j]==1) tp1=type[1][clauseLeftAttr[j]]; else tp1=type[2][clauseLeftAttr[j]];
							if (clauseRight[j]==0) tp2=type[0][clauseRightAttr[j]]; else 
							if (clauseRight[j]==1) tp2=type[1][clauseRightAttr[j]]; else tp2=type[2][clauseRightAttr[j]];
							
							if (tp1==1 && clauseRightAttr[j]>-1 && tp2==1) {
								string str1="",str2="";										
								if (clauseLeft[j]==0) str1=record[0][i][clauseLeftAttr[j]+1]; else 
								if (clauseLeft[j]==1) str1=record[1][i2][clauseLeftAttr[j]+1]; else str1=record[2][i3][clauseLeftAttr[j]+1];
								if (clauseRight[j]==0) str2=record[0][i][clauseRightAttr[j]+1]; else 
								if (clauseRight[j]==1) str2=record[1][i2][clauseRightAttr[j]+1]; else str2=record[2][i3][clauseRightAttr[j]+1];
								if (atoi(str1.c_str()) < atoi(str2.c_str())) {
									flag = 1;
									break;
								}
							} else
							if (tp1==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
								if (clauseLeft[j]==0) temp = record[0][i][clauseLeftAttr[j]+1]; else
								if (clauseLeft[j]==1) temp = record[1][i2][clauseLeftAttr[j]+1]; else temp = record[2][i3][clauseLeftAttr[j]+1];
								if (atoi(temp.c_str()) < atoi(clauseRightList[j].c_str())) {
									flag = 1;
									break;
								}
							} else {
								printf("compare error! \n");
								return;
							}
						}
						if (clauseOpList[j] == "<=") {
							int tp1,tp2;
							if (clauseLeft[j]==0) tp1=type[0][clauseLeftAttr[j]]; else 
							if (clauseLeft[j]==1) tp1=type[1][clauseLeftAttr[j]]; else tp1=type[2][clauseLeftAttr[j]];
							if (clauseRight[j]==0) tp2=type[0][clauseRightAttr[j]]; else 
							if (clauseRight[j]==1) tp2=type[1][clauseRightAttr[j]]; else tp2=type[2][clauseRightAttr[j]];
							if (tp1==1 && clauseRightAttr[j]>-1 && tp2==1) {
								string str1="",str2="";										
								if (clauseLeft[j]==0) str1=record[0][i][clauseLeftAttr[j]+1]; else 
								if (clauseLeft[j]==1) str1=record[1][i2][clauseLeftAttr[j]+1]; else str1=record[2][i3][clauseLeftAttr[j]+1];
								if (clauseRight[j]==0) str2=record[0][i][clauseRightAttr[j]+1]; else 
								if (clauseRight[j]==1) str2=record[1][i2][clauseRightAttr[j]+1]; else str2=record[2][i3][clauseRightAttr[j]+1];
								if (atoi(str1.c_str()) > atoi(str2.c_str())) {
									flag = 1;
									break;
								}
							} else
							if (tp1==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
								if (clauseLeft[j]==0) temp = record[0][i][clauseLeftAttr[j]+1]; else
								if (clauseLeft[j]==1) temp = record[1][i2][clauseLeftAttr[j]+1]; else temp = record[2][i3][clauseLeftAttr[j]+1];
								if (atoi(temp.c_str()) > atoi(clauseRightList[j].c_str())) {
									flag = 1;
									break;
								}
							} else {
								printf("compare error! \n");
								return;
							}
						}
						if (clauseOpList[j] == "!=") {
							int tp1,tp2;
							if (clauseLeft[j]==0) tp1=type[0][clauseLeftAttr[j]]; else 
							if (clauseLeft[j]==1) tp1=type[1][clauseLeftAttr[j]]; else tp1=type[2][clauseLeftAttr[j]];
							if (clauseRight[j]==0) tp2=type[0][clauseRightAttr[j]]; else 
							if (clauseRight[j]==1) tp2=type[1][clauseRightAttr[j]]; else tp2=type[2][clauseRightAttr[j]];
							if (tp1==0 && clauseRightAttr[j]>-1 && tp2==0) {
								string str1="",str2="";										
								if (clauseLeft[j]==0) str1=record[0][i][clauseLeftAttr[j]+1]; else 
								if (clauseLeft[j]==1) str1=record[1][i2][clauseLeftAttr[j]+1]; else str1=record[2][i3][clauseLeftAttr[j]+1];
								if (clauseRight[j]==0) str2=record[0][i][clauseRightAttr[j]+1]; else 
								if (clauseRight[j]==1) str2=record[1][i2][clauseRightAttr[j]+1]; else str2=record[2][i3][clauseRightAttr[j]+1];
								if (str1 == str2) {
									flag = 1;
									break;
								} 
							} else
							if (tp1==0 && clauseRightAttr[j]==-1 && clauseRightList[j][0]=='\'') {
								if (clauseLeft[j]==0) temp = record[0][i][clauseLeftAttr[j]+1]; else
								if (clauseLeft[j]==1) temp = record[1][i2][clauseLeftAttr[j]+1]; else temp = record[2][i3][clauseLeftAttr[j]+1];
								if (temp == clauseRightList[j]) {
									flag = 1;
									break;
								}
							} else
							if (tp1==1 && clauseRightAttr[j]>-1 && tp2==1) {
								string str1="",str2="";										
								if (clauseLeft[j]==0) str1=record[0][i][clauseLeftAttr[j]+1]; else 
								if (clauseLeft[j]==1) str1=record[1][i2][clauseLeftAttr[j]+1]; else str1=record[2][i3][clauseLeftAttr[j]+1];
								if (clauseRight[j]==0) str2=record[0][i][clauseRightAttr[j]+1]; else 
								if (clauseRight[j]==1) str2=record[1][i2][clauseRightAttr[j]+1]; else str2=record[2][i3][clauseRightAttr[j]+1];
								if (str1 == str2) {
									flag = 1;
									break;
								}
							} else
							if (tp1==1 && clauseRightAttr[j]==-1 && clauseRightList[j][0]!='\'') {
								if (clauseLeft[j]==0) temp = record[0][i][clauseLeftAttr[j]+1]; else
								if (clauseLeft[j]==1) temp = record[1][i2][clauseLeftAttr[j]+1]; else temp = record[2][i3][clauseLeftAttr[j]+1];
								if (temp == clauseRightList[j]) {
									flag = 1;
									break;
								}
								} else {
								printf("compare error! \n");
								return;
							}
						}
					}
					if (flag == 0) {
						cout << "ans: ";
						for (int p=0; p<ans.size(); p++)
							if (ans[p]==0) cout << record[ans[p]][i][ansAttr[p]+1] << " "; else
							if (ans[p]==1) cout << record[ans[p]][i2][ansAttr[p]+1] << " "; else
								 cout << record[ans[p]][i3][ansAttr[p]+1];
						cout << endl;
					}
				}
			}
		}                                                                                                                      
	}
}


void desc() {
	if (currentDb == "") { 
		printf("Plz choose a DB first... \n");
		return;
	}  
	string temp0 = "/";
	string temp1 = ".txt"; 
	string temp2 = "'"; 
	string path = DB_ROOT+temp0+currentDb+temp0+tbName;
	if((access(path.c_str(),F_OK)))
	{
		printf("table %s doesn't exist... \n", tbName.c_str());
		return;
	} 
	int fileID; 
	FileManager* fm = new FileManager();
	fm->openFile(path.c_str(), fileID); //打开文件，fileID是返回的文件id
	RecordManager* rm = new RecordManager(fm);
	rm->load_table_info(fileID);
	
}


void work() {
	if (type == "create database") 	createDb();
	if (type == "drop database")    dropDb();
	if (type == "use database") 	useDb();
	if (type == "show database") 	showDb();
	if (type == "create table") 	createTb();
	if (type == "drop table") 	dropTb();
	if (type == "show table") 	showTb();
	if (type == "desc") 		desc();
	if (type == "insert into") 	insertInto();
	if (type == "delete from") 	deleteFrom();
	if (type == "update set") 	updateSet();
	if (type == "select from")	selectFrom();
	if (type == "select")		select(); 
	if (type == "select group")	selectGroup();
}
int make() {
	if (tempName != "") {
		int now = 0;
		string temp = "";	
		while (tempName[now]!=',') {
			temp+=tempName[now];			
			now++;
		}
		attrName1 = temp;
		temp = "";
		now++;
		while (tempName[now]!='(') {
			temp+=tempName[now];			
			now++;
		}
		selectType = temp;
		now++;
		temp = "";
		while (tempName[now]!=')') {
			temp+=tempName[now];			
			now++;
		}
		attrName2 = temp;
	}
	int now = 0;
	string temp = "";	
	for (int i=0; i<attrNumList.size(); i++) {
		now = 0;
		temp = "";
		while (attrNumList[i][now]=='(' || attrNumList[i][now]==' ') now++;
		for (int j=now; j<attrNumList[i].length(); j++)
			if (attrNumList[i][j] != ' ' && attrNumList[i][j] != ')') temp += attrNumList[i][j]; else break;
		attrNumList[i] = temp;
	}

	for (int i=0; i<attrValueList.size(); i++) {
		for (int j=0; j<attrValueList[i].size(); j++) {
			now = 0;
			temp = "";
			while (attrValueList[i][j][now]=='(' || attrValueList[i][j][now]==' ') now++;
			if (attrValueList[i][j][now]=='\'') continue;
			for (int k=now; k<attrValueList[i][j].length(); k++)
				if (attrValueList[i][j][k] != ' ' && attrValueList[i][j][k] != ')') temp += attrValueList[i][j][k]; else break;
			attrValueList[i][j] = temp;
		}			
	}
	now = 0;
	temp = "";	
	while (primaryKey[now]=='(' || primaryKey[now]==' ') now++;
	for (int j=now; j<primaryKey.length(); j++)
		if (primaryKey[j] != ' ' && primaryKey[j] != ')') temp += primaryKey[j]; else break;
	primaryKey = temp;

	now = 0;
	temp = "";
	while (attrName[now]=='(' || attrName[now]==' ') now++;
	if (now!=0) {
		for (int k=now; k<attrName.length(); k++)
			if (attrName[k] != ' ' && attrName[k] != ')') temp += attrName[k]; else break;
		attrName = temp;
	}
	now = 0;
	temp = "";
	while (attrName2[now]=='(' || attrName2[now]==' ') now++;
	if (now!=0) {
		for (int k=now; k<attrName2.length(); k++)
			if (attrName2[k] != ' ' && attrName2[k] != ')') temp += attrName2[k]; else break;
		attrName2 = temp;
	}
		
}

int main()						
{	
	char buf[MAXBUFSIZE];
	getcwd(buf, MAXBUFSIZE);
	string tempdb(buf);
	tempdb += "/database";
	strcpy(DB_ROOT, tempdb.c_str());
	while(1) {
		cout << "  >> ";	
		type = "";
		dbName = "";
		tbName = "";
		setName = "";
		cnt = 0;
		attrNameList.clear();
		nullList.clear();
 		tbNameList.clear();	
 		attrTypeList.clear();	
 		attrNumList.clear();	
 		attrNotNullList.clear();	
 		attrValueList.clear();	
 		exprValueList.clear();	
 		exprOpList.clear();	
		clauseNameList.clear();
		clauseOpList.clear();
		clauseRightList.clear();
		//DB_ROOT = tempdb.c_str();
		//printf("%s", DB_ROOT);
		while( yyparse()) {
			type = "";
			dbName = "";
			tbName = "";
			setName = "";
			cnt = 0;
			attrNameList.clear();
			nullList.clear();
 			tbNameList.clear();	
 			attrTypeList.clear();	
 			attrNumList.clear();	
 			attrNotNullList.clear();	
 			attrValueList.clear();	
 			exprValueList.clear();	
 			exprOpList.clear();	
			clauseNameList.clear();
			clauseOpList.clear();
			clauseRightList.clear();	
		}
		make();
		if (type != "") work();	
	}
	return 0;
}

