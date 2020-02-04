//dice_4
#include<stdio.h>
int a[1000];
int n,m;
void f(int level,int sum){
	if(level>n){
		for(int i=1;i<level;i++){
			if(sum == m)
				printf("%d ",a[i]);
			else return;
		}
		printf("\n");
		return;
	}
	for(int i=1;i<=6;i++){
		a[level]=i;
		f(level+1,sum+a[level]);
	}
	return;
}
int main(void){
	scanf("%d %d",&n,&m);
	f(1,0);
	
	
	return 0;
}
