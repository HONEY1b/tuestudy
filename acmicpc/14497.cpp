//14497
#include<bits/stdc++.h>
using namespace std;

struct Point{
	int x,y;
	int time;
};

struct cmp{
	bool operator()(Point a,Point b){
		return a.time>b.time;
	}
};

char a[301][301];
int check[301][301];

int n,m;
int sx,sy,ex,ey;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

int main(void){
	freopen("14497.txt","r",stdin);
	scanf("%d %d",&n,&m);
	scanf("%d %d %d %d",&sx,&sy,&ex,&ey);
	sx--;sy--;ex--;ey--;
	
	for(int i=0;i<n;i++) scanf("%s",a[i]);
	
	a[sx][sy]='0';
	a[ex][ey]='1';
	memset(check,-1,sizeof(check));
	
	priority_queue<Point, vector<Point>,cmp> pq;
	pq.push({sx,sy,0});
	check[sx][sy]=0;
	
	while(!pq.empty()){
		int x=pq.top().x, y=pq.top().y;
		int time=pq.top().time;
		pq.pop();
		
		if(x==ex && y==ey){
			printf("%d\n",time);
			break;	
		}
		
		for(int k=0;i<4;i++){
			int nx=x+dx[k],ny=y+dy[k];
			
			if(nx>=0 && nx<n && ny>=0 && ny<m && check[nx][ny]==-1){
				if(a[nx][ny]=='1'){
					a[nx][ny]=0;
					pq.push({nx,ny,time+1});
					check[nx][ny]=time+1;	
				}
				else{
					pq.push({nx,ny,time});
					check[nx][ny]=time;	
				}
			}
		}
	}
	
	
	return 0;
}
