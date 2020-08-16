//13699
#include<bits/stdc++.h>
using namespace std;

int main(void){
	int n;
	cin>>n;
	long long d[40];
	for(int i=0;i<=n;i++){
		d[i]=0;	
	}
	d[0]=1,d[1]=1,d[2]=2,d[3]=5;
	for(int i=4;i<=n;i++){
		for(int j=0;j<i;j++){
			cout<<"i="<<i<<" "<<j<<" "<<d[j]<<", "<<i-j-1<<" "<<d[i-j-1]<<endl;
			d[i]+=(d[j]*d[i-j-1]);
			//cout<<i<<" "<<j<<" "<<n-j-1<<" "<<d[i]<<endl;
		}
		cout<<"\n\n";
	}
	cout<<d[n];
	
	return 0;
}
