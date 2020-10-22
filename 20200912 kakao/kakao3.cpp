//kakao3
#include <string>
#include <vector>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
struct Data{
	string a,b,c,d;
	int e;
};

bool cmp(const Data d1,const Data d2){
	string t1=d1.a,t2=d2.a;
	if(t1.compare(t2)!=0){
		return t1.compare(t2);	
	}else{
		t1=d1.b,t2=d2.b;
		if(t1.compare(t2)!=0)return t1.compare(t2);
		else{
			t1=d1.c,t2=d2.c;
			if(t1.compare(t2)!=0)return t1.compare(t2);
			else{
				t1=d1.d,t2=d2.d;
				if(t1.compare(t2)!=0)return t1.compare(t2);
				else {
					t1=d1.e,t2=d2.e;
					return t1.compare(t2);
				}
			}
		}
	}
	
}

void printD(vector<Data> infoData){
	for(int i=0;i<infoData.size();i++){
		cout<<infoData[i].a<<" "<<infoData[i].b<<" "<<infoData[i].c<<" "<<infoData[i].d<<" "<<infoData[i].e<<"\n";
	}cout<<"\n\n";
}

vector<int> solution(vector<string> info, vector<string> query) {
	vector<int> answer;
	vector<Data> infoData;
	vector<Data> queryData;
	for(int i=0;i<info.size();i++){
		vector<string> str[50000];
		char *str_buff=new char[1000];
		strcpy(str_buff,info[i].c_str());
		
		char *tok=strtok(str_buff," ");
		while(tok!=nullptr){
			str[i].push_back(string(tok));
			tok=strtok(nullptr," ");	
		}
		Data data;
		data.a=str[i][0],data.b=str[i][1],data.c=str[i][2];
		data.d=str[i][3],data.e=stoi(str[i][4]);
		infoData.push_back(data);
	}
	sort(infoData.begin(),infoData.end(),cmp);
	for(int i=0;i<query.size();i++){
		vector<string> str[1000];
		char *str_buff=new char[1000];
		strcpy(str_buff,query[i].c_str());
		
		char *tok=strtok(str_buff," ");
		while(tok!=nullptr){
			string tmp=string(tok);
			if(tmp.compare("and")!=0){
				str[i].push_back(string(tok));
			}
			tok=strtok(nullptr," ");	
		}
		Data data;
		data.a=str[i][0],data.b=str[i][1],data.c=str[i][2];
		data.d=str[i][3],data.e=stoi(str[i][4]);
		queryData.push_back(data);
		
		//query[i]에 해당하는 사람 수 저장
		int ans=0;
		string a2=queryData[i].a,b2=queryData[i].b,c2=queryData[i].c,d2=queryData[i].d;
		int e2=queryData[i].e;
		for(int k=0;k<infoData.size();k++){
			string a1=infoData[k].a;
			string b1=infoData[k].b;
			string c1=infoData[k].c;
			string d1=infoData[k].d;
			int e1=infoData[k].e;
			
			if(e1>e2){
				if(a1.compare(a2)==0 || a2.compare("-")){
					if(b1.compare(b2)==0 || b2.compare("-")){
						if(c1.compare(c2)==0 || c2.compare("-")){
							if(d1.compare(d2)==0 || d2.compare("-")){
								ans++;
							}
						}
					}
				}
			}
		}
		answer.push_back(ans);
	}
	for(int i=0;i<answer.size();i++){
		cout<<answer[i]<<endl;	
	}
    
    return answer;
}

int main(void){
	vector<int> answer;
	freopen("kakao3.txt","r",stdin);
	vector<string> str,que;
	
	string tmp1="java backend junior pizza 150";
	string tmp2="java and backend and junior and pizza 100";
	str.push_back(tmp1);
	que.push_back(tmp2);
	
	tmp1="python frontend senior chicken 210";
	tmp2="python and frontend and senior and chicken 200";
	str.push_back(tmp1);
	que.push_back(tmp2);
	
	tmp1="python frontend senior chicken 150";
	tmp2="cpp and - and senior and pizza 250";
	str.push_back(tmp1);
	que.push_back(tmp2);
	
	tmp1="cpp backend senior pizza 260";
	tmp2="- and backend and senior and - 150";
	str.push_back(tmp1);
	que.push_back(tmp2);
	
	tmp1="java backend junior chicken 80";
	tmp2="- and - and - and chicken 100";
	str.push_back(tmp1);
	que.push_back(tmp2);
	
	tmp1="python backend senior chicken 50";
	tmp2="- and - and - and - 150";
	str.push_back(tmp1);
	que.push_back(tmp2);
	answer=solution(str,que);
	return 0;
}
