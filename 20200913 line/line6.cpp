//line6
/*
������ : �켱������ ���� ���� ȸ�縦 ����, �Ի� ��� ����� 1 ����
ȸ�� : �����ڸ� �켱������� ����
ȸ�� : ȸ�� TO��ŭ ������ ���� - ������ �����ڸ� ȸ���̸����� ���
������ : �������� ����� ������ - �Ի������� 0�ΰ�� ����X
*/
#include <string>
#include <vector>
#include<iostream>
#include<cstring>

using namespace std;

struct Com{
	string name;
	string favApp;
	int appNum;
};

struct App{
	string name;
	string favCom;
	int comNum;
};


vector<string> solution(vector<string> companies, vector<string> applicants) {
    vector<string> answer;
    vector<Com> company;
    vector<App> applicant;
    for(int i=0;i<companies.size();i++){
    	vector<string> str[5000];
		char *str_buff=new char[1000];
		strcpy(str_buff,companies[i].c_str());	
		
		char *tok=strtok(str_buff," ");
		while(tok!=nullptr){
			str[i].push_back(string(tok));
			tok=strtok(nullptr," ");	
		}
		Com com;
		com.name=str[i][0],com.favApp=str[i][1],com.appNum=stoi(str[i][2]);
		company.push_back(com);
    }
    
    for(int i=0;i<applicants.size();i++){
    	vector<string> str[5000];
		char *str_buff=new char[1000];
		strcpy(str_buff,applicants[i].c_str());	
		
		char *tok=strtok(str_buff," ");
		while(tok!=nullptr){
			str[i].push_back(string(tok));
			tok=strtok(nullptr," ");	
		}
		App app;
		app.name=str[i][0],app.favCom=str[i][1],app.comNum=stoi(str[i][2]);
		applicant.push_back(app);
    }
    
	//������ : �켱������ ���� ���� ȸ�縦 ����, �Ի� ��� ����� 1 ����
	vector<char> submitCom[30];
	for(int i=0;i<applicant.size();i++){
		submitCom[applicant[i].favCom[0] - 'a'].push_back(applicant[i].name);	
		applicant[i].comNum-=;
	}
	
	//ȸ�� : �����ڸ� �켱������� ����
	
    
    
    
    
    return answer;
}
