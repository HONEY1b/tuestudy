//9465
#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int arr[2][200010];
int d[3][200010];
int max3(int a,int b,int c){
	int ret=a;
	if(ret<b) ret=b;
	if(ret<c) ret=c;
	return ret;
}
int main(void){
	freopen("9465.txt","r",stdin);
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		memset(d,0,sizeof(d));
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&arr[0][i]);	
		}
		for(int i=0;i<n;i++){
			scanf("%d",&arr[1][i]);	
		}
		d[0][0]=0,d[1][0]=arr[0][0],d[2][0]=arr[1][0];
		for(int i=1;i<n;i++){
			d[0][i]=max3(d[0][i-1],d[1][i-1],d[2][i-1]);
			d[1][i]=max(d[0][i-1],d[2][i-1])+arr[0][i];
			d[2][i]=max(d[0][i-1],d[1][i-1])+arr[1][i];
		}
		
		/*
		for(int i=0;i<3;i++){
			for(int j=0;j<n;j++){
				printf("%d\t",d[i][j]);
			}
			printf("\n");
		}printf("\n\n");
	
		*/
		
		printf("%d\n",max3(d[0][n-1],d[1][n-1],d[2][n-1]));
	}
	return 0;
}
