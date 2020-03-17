//1157
#include<bits/stdc++.h>
using namespace std;
int num=100;
int arr[100];
int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string str;
	cin>>str;
	for(int i=0;i<str.length();i++){
		str[i]=toupper(str[i]);
		int a=str[i]-'A';
		arr[a]++;	
	}
	int maxi=-10;
	for(int i=0;i<num;i++){
		if(arr[i]>maxi){
			maxi=arr[i];
		}
	}
	int cnt=0,index=0;
	for(int i=0;i<num;i++){
		if(arr[i]==maxi){
			cnt++;
			index=i;
		}
	}
	if(cnt==1){
		char ans=index+'A';
		cout<<ans<<'\n';
	}else{
		cout<<"?"<<'\n';
	}
	
	return 0;
}
