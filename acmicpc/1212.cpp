//1212
#include<stdio.h>
#include<iostream>
using namespace std;
string arr[]={"000","001","010","011","100","101","110","111"};
string arr2[]={"0","1","10","11","100","101","110","111"};
void f(int x){
		
}
int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	string str="",ans="";
	cin>>str;
	for(int i=0;i<str.length();i++){
		int a=str[i]-'0';
		if(i==0){
			ans+=arr2[a];
		}
		else{
			ans+=arr[a];
		}
	}
	cout<<ans<<'\n';
	return 0;
}
