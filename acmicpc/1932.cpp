//1932
#include<stdio.h>

int n;
int arr[510][510];
int ans[510][510];
int Max=-987654321;
int max(int a,int b){return a>b ? a:b;}

int main(void){
	freopen("1932.txt","r",stdin);
	scanf("%d",&n);	
	int j=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	//for(int i=1;i<=n;i++){for(int j=1;j<=i;j++){printf("%d ",arr[i][j]);}printf("\n");}
	
	ans[1][1]=arr[1][1];
	ans[2][1]=arr[2][1]+ans[1][1];
	ans[2][2]=arr[2][2]+ans[1][1];
	//printf("%d\n%d %d\n",ans[1][1],ans[2][1],ans[2][2]);
	for(int i=3;i<=n;i++){
		for(int j=1;j<=i;j++){
			ans[i][j]=Max;
			if(j==1){
				ans[i][j]=max(ans[i][j],arr[i][j]+ans[i-1][1]);
			}else if(j==n){
				ans[i][j]=max(ans[i][j],arr[i][j]+ans[i-1][n-1]);
			}else{
				ans[i][j]=max(ans[i][j],arr[i][j]+ans[i-1][j]);
				ans[i][j]=max(ans[i][j],arr[i][j]+ans[i-1][j-1]);
			}
			printf("%d ",ans[i][j]);
		}printf("\n");
	}
	
	
	int result=0;
	for(int i=1;i<=n;i++){
		result=max(ans[n][i],result);
	}
	
	printf("%d\n",result);
	
	return 0;
}
