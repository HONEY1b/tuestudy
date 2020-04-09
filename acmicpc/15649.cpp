//15649
#include<stdio.h>
int n,m;
int arr[10];
int c[10];
void f(int level){
	if(level>n){
		for(int i=1;i<=m;i++){
			printf("%d ",arr[i]);
		}printf("\n");
		return;
	}
	for(int i=1;i<=level;i++){
		if(c[level]==0){
			arr[level]=i;
			c[i]=1;
			f(level+1);	
			c[i]=0;
		}
	}
}

int main(void){
	
	scanf("%d %d",&n,&m);
	f(1);
	
	return 0;
}
