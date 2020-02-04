//dice_3
#include<stdio.h>
int n;
int arr[1000];
int check[7];

void f(int level){
	if(level > n){
		for(int i=1;i<level;i++){
 			printf("%d ",arr[level]);
		}
		printf("\n");
		return;
	}
	for(int i=1;i<=6;i++){
		if(check[i]==0){
			arr[level]=i;
			check[i]=1;
			f(level+1);
			check[i]=0;
		}
	}
}

int main(void){
	scanf("%d",&n);
	f(1);
	
	return 0;
}
