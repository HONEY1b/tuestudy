//3052
#include<stdio.h>
int arr[11];
bool check[45];
int num=42;

int main(void){
	for(int i=0;i<10;i++){
		scanf("%d",&arr[i]);
		int a=arr[i]%num;
		check[a]=1;
	}
	int cnt=0;
	for(int i=0;i<num;i++){
		if(check[i]) cnt++;	
	}
	
	printf("%d\n",cnt);
	return 0;
}
