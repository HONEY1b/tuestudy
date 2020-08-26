//14501
#include<iostream>
using namespace std;
int d[30];
int t[30],p[30];
int main(void){
	freopen("14501.txt","r",stdin);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>t[i]>>p[i];
	}
	for(int i=1;i<=n;i++){
		if(i+t[i]<=n) {
			d[i+t[i]]=max(d[i+t[i]],d[i]+p[i]);
		}else{
			d[i]=d[i-1];	
		}
	}
	
	cout<<d[n]<<endl;
	
	return 0;
}
