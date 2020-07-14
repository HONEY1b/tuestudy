//15650
#include<stdio.h>
int n,m;
int arr[10];
int c[10];
void f(int level){
	if(level>m){
		for(int i=1;i<level;i++){
			printf("%d ",arr[i]);
		}
		printf("\n");
		return;
	}
	for(int i=1;i<=n;i++){
		arr[level]=i;
		if(c[i]==0&&arr[level]>=arr[level-1]){
			
			c[i]=1;
			f(level+1);	
			c[i]=0;
		}
	}
}

int main(void){
	
	scanf("%d %d",&n,&m);
	arr[0]=1;
	f(1);
	
	return 0;
}
