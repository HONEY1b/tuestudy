//10809
#include<bits/stdc++.h>
using namespace std;
int arr[30];

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string str;
	cin>>str;
	memset(arr,-1,sizeof(arr));
	for(int i=0;i<str.length();i++){
		if(str[i]>='a'&&str[i]<='z'){
			int a=str[i]-'a';
			if(arr[a]==-1){arr[a]=i;}
		}
	}
	for(int i=0;i<26;i++){
		printf("%d ",arr[i]);	
	}
	return 0;
}
