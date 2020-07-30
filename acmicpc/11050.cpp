//11050
#include<stdio.h>
int arr[100][100];

int main(void){
	int n,m;
	
	scanf("%d %d",&n,&m);
	
	for(int i=0;i<=n;i++){
		for(int j=0;j<=i;j++){
			if(i==0) {
				arr[i][j]=0;
				continue;
			}
			if(j==0 || j==i){
				arr[i][j]=1;
				continue;	
			}
			arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
		}
	}
	printf("%d\n",arr[n][m]);
	
	return 0;
}
