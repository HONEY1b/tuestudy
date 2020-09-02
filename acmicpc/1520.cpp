//1520
#include<bits/stdc++.h>
using namespace std;
int r,c;
int arr[510][510];
long long d[510][510];
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};

long long go(int x,int y){
	if(x==r-1 && y==c-1)	return 1;
	if(d[x][y]!=-1) return d[x][y];
	d[x][y]=0;
	
	for(int k=0;k<4;k++){
		int nx=x+dx[k],ny=y+dy[k];
		if(0<=nx&&nx<r && 0<=ny&&ny<c){
			if(arr[x][y]>arr[nx][ny]){
				d[x][y]+=go(nx,ny);
			}
		}
	}
	cout<<x<<" "<<y<<"\n";
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<d[i][j]<<" ";
		}cout<<"\n";
	}cout<<"\n\n------------------------------------\n\n";
	return d[x][y];
}

int main(void){
	freopen("1520.txt","r",stdin);
	cin>>r>>c;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			d[i][j]=-1;
			cin>>arr[i][j];
		}
	}
	cout<<go(0,0);
	return 0;
}
