//4949
#include<bits/stdc++.h>
using namespace std;
//char str[100];

bool f(char str[100]){
	stack<int> st;
	int len=strlen(str);
	for(int i=0;i<len;i++){
		if(str[i]=='('){
			st.push(1);
		}else if(str[i]==')'){
			if(st.empty()) return false;
			if(st.top()==1){
				st.pop();
			}else 
				return false;
		}else if(str[i]=='['){
			st.push(2);
		}else if(str[i]==']'){
			if(st.empty()) return false;
			if(st.top()==2){
				st.pop();
			}else 
				return false;
		}
	}
	return st.empty();
}

int main(void){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("4949.txt","r",stdin);
	while(1){
		char str[100];
		cin.getline(str, 100);
		if(strlen(str)==1 && strcmp(".",str)==0){
			break;
		}else{
			if(f(str)){
				cout<<"yes\n";
			}else{
				cout<<"no\n";	
			}
		}
	}
	return 0;
}
