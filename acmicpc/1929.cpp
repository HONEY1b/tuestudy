//1929
#include<stdio.h>
int n,m;
bool arr[1000010];
bool f(int num){
	for(int i=2;i*i<=num;i++){
		if(num%i==0){
			return true;
		}
	}
	return false;
}
int main(void){
	scanf("%d %d",&n,&m);
	arr[1]=true;
	for(int i=4;i<=m;i++){
		arr[i]=f(i);
	}
	for(int i=n;i<=m;i++){
		if(arr[i]==false){
			printf("%d\n",i);
		}
	}
	
	return 0;
}
