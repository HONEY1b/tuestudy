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
		++arr[a]; //a�� ������ arr�� �ִ´�. 	
	}
	
	int index=0; //�߾Ӱ��� ã�� ���� index
	int answer = 0; //�߾Ӱ��� �� 
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
