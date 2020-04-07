//2156
#include<stdio.h>
using namespace std;
int arr[10010];
int d[10010];
int max(int a,int b){if(a>b)return a; else return b;}
int main(void){
	freopen("2156.txt","r",stdin);	
	
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		scanf("%d",&arr[i]);	
	}
	d[0]=0,d[1]=arr[1],d[2]=arr[1]+arr[2];
	for(int i=3;i<=t;i++){
		d[i]=d[i-1];
		d[i]=max(d[i],d[i-2]+arr[i]);
		d[i]=max(d[i],d[i-3]+arr[i]+arr[i-1]);
	}
	printf("%d\n",d[t]);
	return 0;
}

