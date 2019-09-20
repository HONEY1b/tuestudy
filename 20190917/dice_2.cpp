//dice_2
#include<stdio.h>
int n;
int arr[10000];

void f(int level){
	if(level>n){
		for(int i=1;i<level;i++){
			printf("%d ",arr[i]);
		}
		printf("\n");
		return;
	}
	for(int i=arr[level-1];i<=6;i++){
		arr[level]=i;
		f(level+1);
	}
}

int main(void){
	scanf("%d",&n);
	arr[0]=1;
	f(1);	
	return 0;
}
