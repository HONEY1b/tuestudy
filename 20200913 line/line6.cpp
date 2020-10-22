//line6
/*
지원자 : 우선순위가 제일 높은 회사를 지원, 입사 희망 기업수 1 감소
회사 : 지원자를 우선순위대로 정렬
회사 : 회사 TO만큼 지원자 선택 - 선택한 지원자를 회사이름으로 등록
지원자 : 거절당한 사람은 재지원 - 입사기업수가 0인경우 진행X
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
    
	//지원자 : 우선순위가 제일 높은 회사를 지원, 입사 희망 기업수 1 감소
	vector<char> submitCom[30];
	for(int i=0;i<applicant.size();i++){
		submitCom[applicant[i].favCom[0] - 'a'].push_back(applicant[i].name);	
		applicant[i].comNum-=;
	}
	
	//회사 : 지원자를 우선순위대로 정렬
	
    
    
    
    
    return answer;
}
