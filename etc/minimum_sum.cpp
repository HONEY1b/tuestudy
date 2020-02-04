//minimum_sum
#include<stdio.h>
#include<iostream>
using namespace std;
int a[11][11];
int check[11];
int mini = 0x7fffffff;
int n;
void f(int level, int sum){
	if(level>n){
		if (sum < mini){
			mini=sum;
			return;
		}
	}
	
	for(int i=1;i<=n;i++){
		if(check[i]==0){
			check[i]=1;
			f(level+1,sum+a[level][i]);
			check[i]=0;
		}
	}
}
int main(void){
	freopen("minimum_sum.txt","r",stdin);
	scanf("%d",&n);
	for(int i=1; i<=n;i++){
		for(int j=1; j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	f(1,0);
	printf("%d",mini);
	return 0;
}
