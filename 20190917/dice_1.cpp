//dice_1
#include<stdio.h>
int n;
int a[10000];

void f(int level){
	if(level>n){
		for(int i=1;i<level;i++){
			printf("%d",a[i]);
		}
		printf("\n");
		return;
	}
	for(int i=1;i<6;i++){
		a[level]=i;
		f(level+1);
	}
}

int main(void){
	scanf("%d",&n);
	f(1);
}
