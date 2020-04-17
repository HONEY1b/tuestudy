//14502
#include<stdio.h>
#include<queue>
using namespace std;

int n,m;
int arr[15][15];

int main(void){
	freopen("14502.txt","r",stdin);
	scanf("%d %d",&n,&m);
	for(int i=0;i<=n+1;i++){
		for(int j=0;j<=m+1;j++){
			if(i==0 || i==n+1 || j==0 || j==m+1){
				arr[i][j]=1;
			}else{
				scanf("%d",&arr[i][j]);	
			}
		}
	}
	n+=2;m+=2;
//	for(int i=0;i<n;i++){for(int j=0;j<m;j++){printf("%d ",arr[i][j]);}printf("\n");}printf("\n\n\n");
	
	
	return 0;
}
