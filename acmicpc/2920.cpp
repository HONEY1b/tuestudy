//2920
#include<stdio.h>
int main(void){
	int arr[10];
	int as=0;
	for(int i=1;i<=8;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=1;i<8;i++){
		if(arr[i]<arr[i+1]){
			as++;
		}else if(arr[i]>arr[i+1]){
			as--;
		}
	}
	
	if(as==7){
		printf("ascending\n");
	}else if(as==-7){
		printf("descending\n");
	}else{
		printf("mixed\n");
	}
	
	return 0;
}
