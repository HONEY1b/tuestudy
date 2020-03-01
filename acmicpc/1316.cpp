//1316
#include<bits/stdc++.h>
using namespace std;
string str;
int arr[30];

bool f(void){
	for(int i=0;i<str.length();i++){
		int a=str[i]-'a',idx=i;
		if(arr[a]==-1 || arr[a]==idx-1){
			arr[a]=idx;
		}else if(arr[a]!=-1 && arr[a]!=idx-1){
			return false;
		}
	}
	return true;
}

int main(void){
	freopen("1316.txt","r",stdin);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	int cnt=0;
	while(t--){
		memset(arr,-1,sizeof(arr));
		cin>>str;
		if(f()){
			cnt++;
		}
	}
	printf("%d\n",cnt);
	
	return 0;
}
