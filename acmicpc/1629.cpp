//1629
#include<stdio.h>
long long res;

long long f(int a,int b,int c){
	if(b==0){ return 1LL; }
	if(b==1){ return a%c; }
	
	if(b%2==0){
		long long temp=f(a,b/2,c);
		return (temp*temp)%c;	
	}
	else{
		return (a*f(a,b-1,c))%c;	
	}
}


int main(void){
	long long a,b,c;
	cin >>a>>b>>c;
	cout<<f(a,b,c)<<'\n';
	
	return 0;
}
