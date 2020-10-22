//11721
#include<bits/stdc++.h>
using namespace std;

int main(void){
	string str;
	cin>>str;
	for(int i=0;i<str.length();i++){
		if(i%10 == 0 && i!=0){
			cout<<'\n';
		}
		if(str[i]=='\0') {
			break;	
		}
		cout<<str[i];
	}
	return 0;
}
