//1520
#include<bits/stdc++.h>
using namespace std;
int r,c;
int arr[510][510];
long long d[510][510];
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};

int main(void){
	freopen("1520.txt","r",stdin);
	cin>>r>>c;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>arr[i][j];
		}
	}
	
	queue<pair<int,int> > q;
	q.push(make_pair(0,0));
	d[0][0]=1;
	
	while(!q.empty()){
		int x=q.front().first,y=q.front().second;
		q.pop();
		for(int k=0;k<4;k++){
			int nx=x+dx[k],ny=y+dy[k];
			
			if(0<=nx && nx<r && 0<=ny && ny<c && arr[x][y]>arr[nx][ny]){
				if(d[nx][ny]!=0)
					d[nx][ny]=d[x][y]+1;
				else
					d[nx][ny]=d[x][y];
				q.push(make_pair(nx,ny));
			}
		}
	}
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<d[i][j]<<" ";
		}cout<<endl;
	}cout<<"\n\n\n\n";
	cout<<d[r-1][c-1];
	return 0;
}
