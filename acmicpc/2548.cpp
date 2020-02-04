//2548
#include<stdio.h>

int arr[20001]={0, };
int main(void){
	freopen("2548.txt","r",stdin);
	int n;
	scanf("%d",&n);
	
	int a;
	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		++arr[a]; //a의 개수를 arr에 넣는다. 	
	}
	
	int index=0; //중앙값을 찾기 위한 index
	int answer = 0; //중앙값이 답 
	for(int i=1;i<=20000;i++){
		index+=arr[i];
		//printf("%d\n",index);
		if(index >= (n+1)/2){
			answer = i;
			break;
		}
	} 
	printf("%d",answer);
	
	return 0;
}
