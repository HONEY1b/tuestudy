//14916
#include<bits/stdc++.h>
using namespace std;
int d[100010];
int main(void){
	int n;
	cin>>n;
	int INF=987654321;
	for(int i=0;i<=n;i++){
		d[i]=INF;	
	}
	
	d[0]=0,d[2]=1,d[5]=1;
	for(int i=5;i<=n;i++){

		d[i]=min(d[i-2]+1,d[i]);
		d[i]=min(d[i-5]+1,d[i]);
	}
	if(d[n]==INF) d[n]=-1;
	cout<<d[n];
}
