//2443
#include<iostream>
using namespace std;
int main(void){
	ios_base::sync_with_stdio();cin.tie(0);cout.tie(0);
	
	int n;
	cin>>n;	
	for(int i=1;i<=n;i++){
		for(int j=1;j<i;j++){
			cout<<' ';
		}
		for(int k=2*n-i;k>=i;k--){
			cout<<'*';
		}
		cout<<'\n';
	}
	
	return 0;
}
