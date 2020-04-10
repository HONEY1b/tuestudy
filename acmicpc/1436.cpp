//1436
#include<stdio.h>
int arr[10010];
int main(void){
	int n;
	scanf("%d",&n);
	int t=1;
	for(int i=666;;i++){
		int tmp=i;
		while(tmp>100){
			int a=tmp%10,b=(tmp/10)%10,c=(tmp/100)%10;
			if(a==6&&b==6&&c==6){arr[t]=i;t++;break;}
			tmp/=10;
		}
		if(t>n)break;
	}
	printf("%d",arr[n]);
	
	return 0;
}
