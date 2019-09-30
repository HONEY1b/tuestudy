//p146_rightcutnum
#include<stdio.h>
int n;
int cnt;

bool isPrime(int x){
	if(x<2) return false;
	for(int i=2;i*i<=x;i++){
		if(x%i == 0) return false;
	}
	return true;
}

void f(int num, int len){
	if(len==n){
		if(isPrime(num)){
			cnt++;
			printf("%d\n",num);
		}
		return;
	}
	else{
		if(isPrime(num)){
			f(num*10+1,len+1);
			f(num*10+3,len+1);
			f(num*10+7,len+1);
			f(num*10+9,len+1);
		}
	}
}

int main(void){
	scanf("%d",&n);
	
	f(2,1);f(3,1);f(5,1);f(7,1);
	printf("%d",cnt);
	
	return 0;
}
