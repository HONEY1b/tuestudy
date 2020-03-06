//4948
#include<stdio.h>
int n,m,Max=123456*2+1;
bool arr[300000];
bool f(int num){
	for(int i=2;i*i<=num;i++){
		if(num%i==0){
			return true;
		}
	}
	return false;
}
int main(void){
	freopen("4948.txt","r",stdin);
	arr[1]=true;
	for(int i=4;i<=Max;i++){
		arr[i]=f(i);
	}
	int cnt,t;
	while(true){
		scanf("%d",&t);
		if(t==0) break;
		cnt=0;
		for(int i=t+1;i<=t*2;i++){
			if(arr[i]==false){cnt++;}	
		}
		printf("%d\n",cnt);
	}
	
	return 0;
}
