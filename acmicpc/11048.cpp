//11048
#include<bits/stdc++.h>
using namespace std;
int n,m;
int arr[1010][1010];
int d[1010][1010];
int dx[]={1,0,1};
int dy[]={0,1,1};


int main(void){
	freopen("11048.txt","r",stdin);
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d",&arr[i][j]);	
		}
	}
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=m;j++){
//			printf("%d ",d[i][j]);	
//		}printf("\n");
//	}printf("\n\n");
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			d[i][j]=arr[i][j];
			d[i][j]=max(d[i][j],d[i-1][j]+arr[i][j]);
			d[i][j]=max(d[i][j],d[i][j-1]+arr[i][j]);
			d[i][j]=max(d[i][j],d[i-1][j-1]+arr[i][j]);
		}
	}
	
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=m;j++){
//			printf("%d ",d[i][j]);	
//		}printf("\n");
//	}printf("\n\n");
	
	printf("%d",d[n][m]);
	return 0;
}
