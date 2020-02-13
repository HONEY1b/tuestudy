//9012
#include<stdio.h>
#include<stack>
#include<iostream>
using namespace std;
int t;
bool f(string str){
	stack<char> st;
	for(int i=0;i<str.length();i++){
		if(str[i]=='(') {st.push('(');}
		else if(str[i]==')'){
			if(st.empty()){return false;}
			if(st.top()=='(') st.pop();
		}
	}
	return st.empty();
}
int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
//	freopen("9012.txt","r",stdin);	
	scanf("%d",&t);
	while(t--){
		bool ans=true;
		string s;
		
		cin>>s;
		
		if(f(s)){
			printf("YES\n");	
		}else{
			printf("NO\n");	
		}	
	}
	return 0;
}
