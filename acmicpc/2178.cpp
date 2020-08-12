//2178
#include<stdio.h>
#include<queue>
using namespace std;
int maze[110][110];
int d[110][110];
int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
int r,c;

void printArr(void){
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			printf("%d\t",d[i][j]);	
		}printf("\n");
	}printf("\n\n\n");
}

int main(void){
	int INF=987654321;
	freopen("2178.txt","r",stdin);
	scanf("%d %d",&r,&c);
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			scanf("%1d",&maze[i][j]);
			d[i][j]=INF;
		}
	}
	
	
	d[1][1]=1;
	queue< pair<int,int> > q;
	q.push(make_pair(1,1));
	
	while(!q.empty()){
		int x=q.front().first,y=q.front().second;
		q.pop();
		
		if(x==r && y==c) break;
		
		for(int k=0;k<4;k++){
			int nx=x+dx[k],ny=y+dy[k];
			
			if(0<nx&&nx<=r && 0<ny&&ny<=c && maze[nx][ny]==1 && d[nx][ny]==INF){
				q.push(make_pair(nx,ny));
				d[nx][ny]=min(d[nx][ny],d[x][y]+1);
				
			}
		}
	}
	printf("%d\n",d[r][c]);
	
	return 0;
}
