//2167
#include<bits/stdc++.h>
using namespace std;

int main(void){
	freopen("2167.txt","r",stdin);	
	int n,m;
	int arr[305][305];
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>arr[i][j];
		}
	}
	
	int t;
	cin>>t;
	while(t--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		int sum=0;
		for(int i=a;i<=c;i++){
			for(int j=b;j<=d;j++){
				sum+=arr[i][j];
			}
		}
		cout<<sum<<'\n';
	}
	
	
	return 0;
}
