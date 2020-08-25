//9655
#include<bits/stdc++.h>
using namespace std;
int d[1010];

int main(void){
	ios_base::sync_with_stdio();
	cin.tie(0);cout.tie(0);
	
	int n;
	cin>>n;
	d[0]=n;
	int ans=0;
	for(int i=1;i<=n;i++){
		int a=d[i-1]-1;
		int b=d[i-1]-3;
		if(a==0 || b==0){
			ans=i;
			break;	
		}
		if(b<0){
			d[i]=a;	
		}else{
			d[i]=min(a,b);	
		}
	}
	
	if(ans%2==1){
		cout<<"SK"<<endl;
	}else{
		cout<<"CY"<<endl;
	}
	
	return 0;
}
