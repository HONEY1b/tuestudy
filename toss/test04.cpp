#include<bits/stdc++.h>
using namespace std;

int main(void){
	char str[100];
	queue<char*> q;
	queue<char*> tmpq;
	
	while(!cin.eof()){
		cin>>str;
		tmpq.push(str);
		cout<<str<<" ";
		while(!q.empty()){
			char* a=q.front();
			q.pop();
			if(strcmp(a,str)!=0){
				cout<<a<<" ";
				tmpq.push(a);
			}
		}
		cout<<'\n';
		while(!tmpq.empty()){
			q.push(tmpq.front());
			cout<<tmpq.front()<<" ";
			tmpq.pop();	
		}
		cout<<'\n\n';
	}
		
	
	return 0;
}
