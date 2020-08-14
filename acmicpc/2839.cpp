//2839
#include<bits/stdc++.h>
using namespace std;


int main(void){
	int n;
	int INF=987654321;
	int d[5010];
	cin>>n;	
	
	for(int i=0;i<=n;i++){d[i]=INF;}
	
	d[0]=0,d[3]=1,d[5]=1;
	for(int i=3;i<=n;i++){
		if(d[i]==INF) continue;
		d[i+3]=min(d[i+3],d[i]+1);
		d[i+5]=min(d[i+5],d[i]+1);
	}
	if(d[n]==INF) cout<<-1;
	else cout<<d[n];
	
	return 0;
}
