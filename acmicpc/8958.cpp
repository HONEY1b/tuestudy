//8958
#include<string>
#include<stdio.h>
#include<iostream>
using namespace std;
string str;
int arr[100];
int f(void){
	for(int i=0;i<str.length();i++){
		if(i==0){
			if(str[i]=='O'){
				arr[i]=1;
			}else{
				arr[i]=0;	
			}
			continue;
		}
		if(str[i]=='O'){
			if(str[i-1]=='O'){
				arr[i]=arr[i-1]+1;
			}else{
				arr[i]=1;	
			}
		}
		else if(str[i]=='X'){
			arr[i]=0;
		}
	}
	int cnt=0;
	for(int i=0;i<str.length();i++){
		//cout<<arr[i]<<" ";
		cnt+=arr[i];
	}
	
	return cnt;
}
int main(void){
	freopen("8958.txt","r",stdin);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		cin>>str;
		int ans=f();
		cout<<ans<<'\n';
	}
	return 0;
}
