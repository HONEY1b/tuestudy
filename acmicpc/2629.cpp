//2629
#include<bits/stdc++.h>
#define N 30
using namespace std;

int n,w[N+1],t,tt[8];
int check[N+1][N*500+1];

int ABS(int x) {return (x>0)? x:-x;}

void f(int cnt,int weight){
	if(cnt>n) return;
	if(check[cnt][weight]) return;

	check[cnt][weight]=1;
	
	f(cnt+1,weight+w[cnt+1]);
	f(cnt+1,weight);
	f(cnt+1,ABS(weight-w[cnt+1]));	
}

int main(void){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	freopen("2629.txt","r",stdin);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>w[i];
	
	cin>>t;
	for(int i=1;i<=t;i++) cin>>tt[i];
	
	f(0,0);
	
	for(int i=1;i<=t;i++){
		if(tt[i] > 40000) cout<<"N\n";
		else if(check[n][tt[i]]) cout<<"Y\n";
		else cout<<"N\n";	
	}
	
	return 0;
}

