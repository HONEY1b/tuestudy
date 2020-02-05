//2711
#include<iostream>
#include<string.h>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
	
	freopen("2711.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int a;
		string str;
		cin>>a>>str;
		for(int i=0;i<str.length();i++){
			if(i!=a-1){
				cout<<str[i];
			}
		}
		cout<<'\n';
	}
	
	return 0;
}
