//1712
#include<stdio.h>

int main(void){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	
	int cnt=0;
	if((b-c)>=0){
		cnt=-1;
	}
	else{
		cnt=a/(c-b);
		cnt++;
	}
	
	printf("%d\n",cnt);
	
	return 0;
}
