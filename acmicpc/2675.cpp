//2675
#include<string>
#include<iostream>
using namespace std;

int main(void){
	freopen("2675.txt","r",stdin);	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;
	while(t--){
		int n;
		string str,str2="";
		cin>>n>>str;	
		for(int i=0;i<str.length();i++){
			for(int j=0;j<n;j++){
				str2+=str[i];
			}
		}
		cout<<str2<<'\n';
	}
	
	return 0;
}
