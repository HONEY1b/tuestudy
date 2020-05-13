//2609
#include<stdio.h>

int gcd(int x,int y){
	while(y>0){
		int tmp=x;
		x=y;
		y=tmp%y;
	}
	return x;
}

int main(void){
	int a,b;
	scanf("%d %d",&a,&b);	
	int g=gcd(a,b);
	
	printf("%d\n%d\n",g,a*b/g);
	
	return 0;
}
