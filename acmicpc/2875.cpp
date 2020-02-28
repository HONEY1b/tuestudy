//2875
#include<stdio.h>

int main(void){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);	
	int total = a+b-c;
	int team=0;
	while(total>=3 && a>=2 && b>=1){
		team++;
		a-=2;
		b-=1;
		total-=3;	
	}
	printf("%d\n",team);
	
	return 0;
}
