//2225
#include<bits/stdc++.h>
using namespace std;
long long d[210][210],mod=1000000000;
int n,k;
int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin>>n>>k;
	
	d[1][1]=1;
	for(int i=1;i<=n;i++){
		for(int j=0;j<=k;j++){
			for(int m=0;m<=j;m++){
				d[i][k]+=d[i-1][j-1];
				d[i][k]%=mod;
			}	
		}
	}
	cout<<d[n][k];
	return 0;
}
