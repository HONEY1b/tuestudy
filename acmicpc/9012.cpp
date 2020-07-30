//9012
#include<bits/stdc++.h>
using namespace std;
char str[100];
int n;
bool f(){
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
		}
	}
	return st.empty();
}
int main(void){
	freopen("9012.txt","r",stdin);
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>str;
		if(f()){
			cout<<"YES\n";	
		}else{
			cout<<"NO\n";
		}
	}
	
	return 0;
}
