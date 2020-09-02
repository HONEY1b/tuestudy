//11066
#include<bits/stdc++.h>
using namespace std;
int n;
int arr[510],s[510],d[510][510];


int main(void){
	ios_base::sync_with_stdio();
	cin.tie(0);cout.tie(0);
	
	freopen("11066.txt","r",stdin);
	
	int t;
	cin>>t;
	while(t--){
		memset(d,-1,sizeof(d));
		memset(s,0,sizeof(s));
		
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>arr[i];
			s[i]=s[i-1]+arr[i];
		}
		cout<<go(1,n)<<"\n";
			
	}
	return 0;
}
