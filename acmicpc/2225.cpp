//2225
#include<bits/stdc++.h>
using namespace std;
long long d[210][210],mod=1000000000;
int n,k;
void printfD(void){
	for(int i=0;i<=k;i++){
		for(int j=0;j<=n;j++){
			printf("%d\t",d[i][j]);
		}
		printf("\n");
	}printf("\n\n");
}
int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin>>n>>k;
	d[0][0]=1;
	for(int i=1;i<=k;i++){
		for(int j=0;j<=n;j++){
			for(int m=0;m<=j;m++){
				d[i][j]+=d[i-1][j-m];
				d[i][j]%=mod;
			}
			printfD();	
		}
	}
	cout<<d[k][n];
	return 0;
}
