//10159
#include<stdio.h>
int n,m;
int f[101][101];
	
int main(void){
	freopen("10159.txt","r",stdin);
	scanf("%d %d",&n,&m);
	for(int i=0;i<m;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		f[a][b]=1;
	}
//	for(int i=1;i<=n;i++){for(int j=1;j<=n;j++)printf("%d ",f[i][j]);printf("\n");}

	return 0;
}
