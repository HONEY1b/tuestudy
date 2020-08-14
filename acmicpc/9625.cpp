//9625
#include<iostream>

using namespace std;

int main(void){
	int n;
	long long a=0,b=0;
	
	cin>>n;
	a=1;
	for(int i=0;i<n;i++){
		long long tmpa,tmpb;
		tmpa=b,tmpb=b;
		int tmpab;
		tmpab=a;
		
		a=tmpa,b=tmpb+tmpab;
	}
	
	cout<<a<<" "<<b;
	
	return 0;
}
