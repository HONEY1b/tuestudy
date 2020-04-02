//p100_미로찾기
#include<bits/stdc++.h>
using namespace std;
int h,w;
char mapp[110][110];
bool c[110][110];
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};

int bfs(int sx,int sy,int ex,int ey){
	queue<pair< pair<int,int>, int> > q;
	q.push(make_pair(make_pair(sx,sy),0));
	int ans=0;
	
	while(!q.empty()){
		int x=q.front().first.first,y=q.front().first.second;
		int cnt=q.front().second;
		q.pop();
		c[x][y]=1;
		if(x==ex&&y==ey){
			ans=cnt;
			break;
		}
		
		for(int i=0;i<4;i++){
			int nx=x+dx[i],ny=y+dy[i];
			if(nx>=0&&nx<h && ny>=0&&ny<w && !c[nx][ny] && mapp[nx][ny]=='.'){
				q.push(make_pair(make_pair(nx,ny),cnt+1));
			}
		}
	}
	return ans;
}

int main(void){
	freopen("p100_미로찾기.txt","r",stdin);
	scanf("%d %d",&h,&w);
	
	int sx,sy,ex,ey;	
	
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			scanf("%1s",&mapp[i][j]);
			if(mapp[i][j]=='S'){
				sx=i,sy=j;
			}
			if(mapp[i][j]=='G'){
				ex=i,ey=j;	
				mapp[i][j]='.';
			}
		}
	}
	
	printf("%d\n",bfs(sx,sy,ex,ey));
	
	return 0;
}
