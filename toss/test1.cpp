#include <iostream>
#include<string.h>

using namespace std;
int main() {
	char str[100];
	cin>>str;
	int len=strlen(str);
	for(int i=0;i<len;i++){
		if(str[i]=='1'){
			if(str[i+1]!='2' || i==len-1){
				cout<<"false";
				return 0;	
			}
		}
	}
	cout<<"true";
	
	return 0;
}
