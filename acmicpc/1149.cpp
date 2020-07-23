//1149
#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int n,mini=0x7fffffff;
int arr[1010][3];
int color[1010];//R=0,G=1,B=2

void f(int level,int total,int cur){
	if(total>=mini) return;
	//for(int i=0;i<n;i++){printf("%d",color[i]);}printf(" %d\n",total);
	if(level>=n){
		for(int i=0;i<n-1;i++){
			if(color[i]==color[i+1]) return;	
		}
		if(mini>total){
			mini=total;
		}
		return;
	}
	
	for(int j=0;j<3;j++){
		if(j!=cur){
			color[level]=j;
			f(level+1,total+arr[level][j],j);
		}
	}
}

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
	f(0,0,-1);
	
	printf("%d\n",mini);
	return 0;
}
