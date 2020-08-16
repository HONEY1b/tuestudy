//4101
#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios_base::sync_with_stdio();
	cin.tie(0);cout.tie(0);
	freopen("4101.txt","r",stdin);
	while(true){
		int a,b;
		cin>>a>>b;
		if(b==0 && a==0) break;
		
		if(a>b){
			cout<<"Yes\n";	
		}else{
			cout<<"No\n";	
		}
		
	}
	
	return 0;
}
	
