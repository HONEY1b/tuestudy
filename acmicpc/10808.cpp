//10808
#include<bits/stdc++.h>
using namespace std;

int main(void){
	int alph[30];
	memset(alph,0,sizeof(alph));
	string str;
	cin>>str;
	
	for(int i=0;i<str.length();i++){
		alph[str[i]-'a']++;
	}
	for(int i=0;i<26;i++){
		cout<<alph[i]<<" ";
	}
	return 0;
}
