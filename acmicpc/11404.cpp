//11404
#include<bits/stdc++.h>
using namespace std;
int d[110][110];
int n,m;
int INF=200000;

int main(void){
	freopen("11404.txt","r",stdin);
	scanf("%d %d",&n,&m);
	memset(d,INF,sizeof(d));
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("%d\t",d[i][j]);
		}printf("\n");
	}printf("\n\n\n\n");
	
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(d[i][j]>d[i][k]+d[k][j])
					d[i][j]=d[i][k]+d[k][j];
			}
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("%d\t",d[i][j]);
		}printf("\n");
	}
	
	
	return 0;
}
