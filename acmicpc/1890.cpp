//1890
#include<stdio.h>
int a[110][110];
long long d[110][110];

int main(void){
	freopen("1890.txt","r",stdin);	
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	d[0][0]=1;
	for(int i=0;i<n;i++){
//		for(int i=0;i<n;i++){for(int j=0;j<n;j++)printf("%d ",d[i][j]);printf("\n");}printf("\n\n");
		for(int j=0;j<n;j++){
		}
	}
	printf("%lld\n",d[n-1][n-1]);
	return 0;
}
