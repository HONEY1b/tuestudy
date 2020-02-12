//2667_solution2
//2667_solution
#include<stdio.h>
#include<algorithm>
#include<queue>
using namespace std;

int a[30][30],b[900];
int c,n;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};

void dfs(int x,int y,int color){
	a[x][y]=color;
	for(int k=0;k<4;k++){
		int nx=x+dx[k],ny=y+dy[k];
		if(nx>=0 && ny>=0 && nx<n && ny<n && a[nx][ny]==1){
			dfs(nx,ny,color);	
		}
	}
}

void bfs(int sx,int sy,int color){
	queue<pair<int,int> >q;
	q.push(make_pair(sx,sy));
	a[sx][sy]=color;
	
	while(!q.empty()){
		int x=q.front().first;
		int y=q.front().second;
		q.pop();
		for(int k=0;k<4;k++){
			int nx=x+dx[k],ny=y+dy[k];
			if(nx>=0 && ny>=0 && nx<n && ny<n && a[nx][ny]==1){
				q.push(make_pair(nx,ny));
				a[nx][ny]=color;	
			}
		}
	}
}

int main(void){
	freopen("2667.txt","r",stdin);
	scanf("%d",&n);
	//printf("%d\n",n);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%1d",&a[i][j]);
		}
	}
//	for(int i=0;i<n;i++){for(int j=0;j<n;j++){printf("%d ",a[i][j]);}printf("\n");}
	
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]==1){
				bfs(i,j,cnt+2);
				cnt++;
				//cnt+2->2부터 채운다
				//1인 것만 두더지굴이라 생각할것이라서!
				//이렇게 안하면 check배열,조건이 따로 더 들어가야한다. 
			}
		}
	}
	
//	for(int i=0;i<n;i++){for(int j=0;j<n;j++){printf("%d ",a[i][j]);}printf("\n");}	
	printf("%d\n",cnt);
	
	int no;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			no=a[i][j];
			if(no>0){
				b[no-2]++;	
			}
		}
	}
	sort(b,b+cnt);
	for(int i=0;i<cnt;i++){
		printf("%d\n",b[i]);	
	}
	
	return 0;
}
