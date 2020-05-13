//2522
#include<stdio.h>

int main(void){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=2*n-1;i++){
		if(i<n){
			for(int j=i;j<n;j++){
				printf(" ");	
			}
			for(int j=0;j<i;j++){
				printf("*");	
			}
		}else if(i==n){
			for(int i=0;i<n;i++){
				printf("*");	
			}
		}else if(i>n){
			for(int j=0;j<i-n;j++){
				printf(" ");	
			}
			for(int j=i-n;j<n;j++){
				printf("*");	
			}
		}
		printf("\n");
	}
	
	return 0;
}
