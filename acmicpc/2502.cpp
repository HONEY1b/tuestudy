//2502
#include<bits/stdc++.h>
using namespace std;

int d[100000];
int fib[100000];

int main(void){
	ios_base::sync_with_stdio();
	cin.tie(0);cout.tie(0);
	
	fib[0]=0,fib[1]=1,fib[2]=1;
	for(int i=3;i<30;i++){
		fib[i]=fib[i-1]+fib[i-2];
	}
	
	int D,K;
	cin>>D>>K;
	int a=0,b=0;
	for(a=1;a<=K;a++){
		b=(K-fib[D-2]*a)/fib[D-1];
		if(b<=0) continue;
		if(b<a) continue;
		
		if(fib[D-2]*a + fib[D-1]*b == K){
			
			break;
		}
	}
	
	cout<<a<<'\n'<<b;
	
	
	return 0;
}
