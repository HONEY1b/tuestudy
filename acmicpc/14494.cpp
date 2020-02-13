//14494
#include<bits/stdc++.h>
using namespace std;
long long d[1010][1010];
int n,m;
long long DIV=1000000007;

int f(int x,int y){
	for(int i=1;i<=x;i++){
		for(int j=1;j<=y;j++){
			d[i][j]+=(d[i-1][j-1]+d[i][j-1]+d[i-1][j])%DIV;
		}
	}
	return d[x][y];
}


int main(void){
	scanf("%d %d",&n,&m);
	
	d[1][1]=1;
	int ans =f(n,m);
	printf("%lld\n",ans);
	return 0;
}
