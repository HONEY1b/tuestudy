//4963

#include<iostream>
#include<queue>
#include<string.h>
using namespace std;
int n,m;
int mapp[55][55];
int dx[]={0,1,0,-1,-1,-1,1,1};
int dy[]={1,0,-1,0,-1,1,1,-1};

void color(int x,int y,int color){
	queue< pair<int,int> > q;
	q.push(make_pair(x,y));
	mapp[x][y]=color;
	
	while(!q.empty()){
		int curX=q.front().first,curY=q.front().second;
		mapp[curX][curY]=color;
		q.pop();
		for(int i=0;i<8;i++){
			int nx=curX+dx[i],ny=curY+dy[i];
			
			if(0<=nx && nx<m && 0<=ny && ny<n){
				if(mapp[nx][ny]==0)continue;
				if(mapp[nx][ny]==1){
					mapp[nx][ny]=color;
					q.push(make_pair(nx,ny));
				}
			}
		}
	}
	
	return;
	
}

int main(void){
	freopen("4963.txt","r",stdin);
	
	while(true){
		memset(mapp,0,sizeof(mapp));
		n=0,m=0;
		cin>>n>>m;
		if(n==0 || m==0)  return 0;
		
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin>>mapp[i][j];
			}
		}
		
		int cnt=2;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(mapp[i][j]==0)continue;
				if(mapp[i][j]==1){
					color(i,j,cnt);	
					cnt++;
				}
			}	
		}
		
//		for(int i=0;i<m;i++){
//			for(int j=0;j<n;j++){
//				cout<<mapp[i][j]<<" ";	
//			}cout<<"\n";
//		}
		
		cout<<cnt-2<<"\n";
	}
	
	
	
	return 0;
}
