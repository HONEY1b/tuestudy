// 2019_본선_초등1_369.cpp

#include <stdio.h>

int f(int n){
	int cnt = 0;
	while(n){
		if((n%10)==3||(n%10)==6||(n%10)==9)
			cnt++;
		n=n/10;
	}
	
	return cnt;
}

int main(void){
	freopen("2019_본선_초등1_369.txt","r",stdin);
	int x,sum=0;
	scanf("%d",&x);	
	for(int i=1; i<x;i++){
		sum+=f(i);
	}
	printf("%d",sum);
	
	return 0;
} 
