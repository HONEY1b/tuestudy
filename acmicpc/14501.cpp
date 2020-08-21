//14501
#include<iostream>
using namespace std;
int d[20];
int t[20],p[20];
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
	
	for(int i=0;i<n;i++){
		cout<<i<<"\t";	
	}cout<<endl;
	for(int i=0;i<n;i++){
		cout<<d[i]<<"\t";	
	}cout<<"\n\n";
	cout<<d[n+1]<<endl;
	
	return 0;
}
