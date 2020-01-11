//2618
#include<bits/stdc++.h>
using namespace std;
int n,w,ans=987654321;
typedef Pos{
	int x,y;
}Pos;
Pos p[1010];


int main(void){
	freopen("2618.txt","r",stdin);
	ios_base::sync_with_stdio(0);
	cin_tie(0);
	
	cin>>n>>w;
	for(int i=2;i<w+2;i++){
		cin>>p[i].x>>p[i].y;
	}
	p[0].x=p[0].y=0;
	p[1].x=p[1].y=n;
	
	
	return 0;
}
