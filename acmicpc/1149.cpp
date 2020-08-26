//1149
#include<bits/stdc++.h>
using namespace std;
int n,mini=0x7fffffff;
int arr[1010][3];
int d[1010][3];
int color[1010];//R=0,G=1,B=2

int main(void){
	freopen("1149.txt","r",stdin);
	scanf("%d",&n);	
	for(int i=0;i<n;i++){
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);//R,G,B로 칠하는 비용
		arr[i][0]=a;
		arr[i][1]=b;
		arr[i][2]=c;
	}
	memset(color,-1,sizeof(color));
	d[0][0]=arr[0][0],d[0][1]=arr[0][1],d[0][2]=arr[0][2];
	for(int i=1;i<n;i++){
		d[i][0]=min(d[i-1][1]+arr[i][0],d[i-1][2]+arr[i][0]);
		d[i][1]=min(d[i-1][0]+arr[i][1],d[i-1][2]+arr[i][1]);
		d[i][2]=min(d[i-1][0]+arr[i][2],d[i-1][1]+arr[i][2]);
	}
	int ans=0;
	ans=min(d[n-1][0],d[n-1][1]);
	ans=min(ans,d[n-1][2]);
	printf("%d\n",ans);
	return 0;
}
