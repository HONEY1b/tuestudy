//1065
#include<stdio.h>
int n;
int arr[1010];

int main(void){
	scanf("%d",&n);

	for(int i=1;i<=1000;i++){
		if(i<100){
			arr[i]=i;
		}else{
			int a=i/100, b=(i/10)%10, c=i%10;
			if((a-b)==(b-c)){
				arr[i]=arr[i-1]+1;
			}else{
				arr[i]=arr[i-1];
			}
		}
	}
	
	printf("%d\n",arr[n]);
	return 0;
}
