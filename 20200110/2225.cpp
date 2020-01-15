//2225
#include<bits/stdc++.h>
using namespace std;
long long d[210][210],mod=1000000000;
int n,k;
int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >>n>>k;
	
	d[1][1]=1;
	for(int i=1;i<=k;i++){
		for(int j=1;j<=n;j++){
			for(int l=1;l<=j;l++){
				d[i][j]+=d[i-1][j-l];	
				d[i][j]%=mod;
			}
			cout<<d[i][j]<<" ";
		}
		cout<<endl;
	}
	cout <<endl;
	
	cout<<d[k][n];
	
	return 0;
}
