//10953
#include<string>
#include<iostream>
#include<stdio.h>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	string str="";
	while(t--){
		cin>>str;
		cout<<str[0]+str[2]-96<<'\n';
	}
	
	return 0;
}
