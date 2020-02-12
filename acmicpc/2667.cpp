//2667
#include<bits/stdc++.h>
using namespace std;
int m[30][30],mm[900];
int c,n;

int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};

void dfs(int x,int y,int color){
	m[x][y]=color;
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx>=0&&nx<n&&ny>=0&&ny<n&&m[nx][ny]==1){
			dfs(nx,ny,color);
		}
	}
}

void bfs(int sx,int sy,int color){
	m[sx][sy]=color;
	queue< pair<int,int> >q;
	q.push(make_pair(sx,sy));
	while(!q.empty()){
		int x=q.front().first,y=q.front().second;
		q.pop();
		for(int i=0;i<4;i++){
			int nx=x+dx[i];
			int ny=y+dy[i];
			if(nx>=0&&nx<n&&ny>=0&&ny<n&&m[nx][ny]==1){
				q.push(make_pair(nx,ny));
				m[nx][ny]=color;
			}
		}
	}
}

int main(void){
	freopen("2667.txt","r",stdin);
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%1d",&m[i][j]);
		}
	}
	int c=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(m[i][j]==1){
				//dfs(i,j,c+2);
				bfs(i,j,c+2);
				c++;
			}
		}
	}
	//for(int i=0;i<n;i++){for(int j=0;j<n;j++){printf("%d ",m[i][j]);}printf("\n");}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			mm[m[i][j]-2]++;
		}
	}
	printf("%d\n",c);
	sort(mm,mm+c);
	for(int i=0;i<c;i++){
		printf("%d\n",mm[i]);	
	}
	return 0;
}
