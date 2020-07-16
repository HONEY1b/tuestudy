//15652
#include<stdio.h>
using namespace std;
int n,m;
int arr[10];
int c[10];

void f(int level){
	if(level>m){
		for(int i=1;i<=m;i++){
			printf("%d ",arr[i]);
		}
		printf("\n");
		return;
	}
	
	for(int i=1;i<=n;i++){
		if(i<arr[level-1])continue;
		arr[level]=i;
		f(level+1);	
	}
}
int main(void){
	scanf("%d %d",&n,&m);
	
	f(1);
	
	
	return 0;
}
