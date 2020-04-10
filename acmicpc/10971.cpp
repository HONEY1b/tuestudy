//10971
#include<stdio.h>
#define MAX 0x7fffffff
using namespace std;
int n;
int arr[15][15];
bool check[15];

int min(int a,int b){return (a>b)?b:a;}

int f(int level,int dist,int cur,int start){
	check[cur]=true;
	if(level==n-1){
		if(arr[cur][start]<=0) return MAX;
		else return dist+arr[cur][start];
	}
	int res=MAX;
	for(int i=0;i<n;i++){
		if(!check[i] && arr[cur][i]>0){
			check[i]=true;
			res=min(res,f(level+1,dist+arr[cur][i],i,start));
			check[i]=false;	
		}
	}
	return res;
}


int main(void){
	freopen("10971.txt","r",stdin);
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);	
		}
	}
	int ans=MAX;
	int tmp=f(0,0,1,1);	
	if(ans>tmp) ans=tmp;
	printf("%d\n",ans);
	
	return 0;
}
