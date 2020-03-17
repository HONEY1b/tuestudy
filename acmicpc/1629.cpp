//1629
#include<stdio.h>
long long a,b,c,div,res;

int main(void){
	scanf("%lld %lld %lld",&a,&b,&c);	
	div=a;
	for(int i=0;i<b;i++){
		div=div*a%c;
	}
	printf("%lld\n",div);
	
	return 0;
}
