//9376
#include<bits/stdc++.h>
using namespace std;
char mapp[110][110];
int d0[110][110];
int d1[110][110];
int d2[110][110];
int h,w;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};

void bfs(int (*d)[110],int sx,int sy){
	deque<pair<int,int> > q;
	q.push_back(make_pair(sx,sy));
	d[sx][sy]=0;
	
	while(!q.empty()){
		int x=q.front().first,y=q.front().second;
		q.pop_front();
		
		for(int i=0;i<4;i++){
			int nx=x+dx[i],ny=y+dy[i];
			if(nx<0|| nx>h || ny<0 || ny>w) continue;
			if(d[nx][ny]!=-1) continue;
			if(mapp[nx][ny]=='#'){
				d[nx][ny]=d[x][y]+1;
				q.push_back(make_pair(nx,ny));
			}else if(mapp[nx][ny]=='.'){
				d[nx][ny]=d[x][y];
				q.push_front(make_pair(nx,ny));
			}
		}
		
	}
}

int main(void){
	freopen("9376.txt","r",stdin);
	int t;
	scanf("%d",&t);
	while(t--){
		memset(d0,-1,sizeof(d0));
		memset(d1,-1,sizeof(d0));
		memset(d2,-1,sizeof(d0));
		scanf("%d %d",&h,&w);
		for(int j=0;j<=w+1;j++){
			mapp[0][j]='.';
			mapp[h+1][j]='.';
		}
		for(int i=1;i<h+1;i++){
			mapp[i][0]='.';
			scanf("%s",&mapp[i][1]);
			mapp[i][w+1]='.';
		}
		
//		for(int i=0;i<=h+1;i++){
//			for(int j=0;j<=w+1;j++){
//				printf("%c ",mapp[i][j]);	
//			}
//			printf("\n");
//		}
		
		int ax,ay,bx,by;
		ax=ay=bx=by=-1;
		
		for(int i=1;i<h+1;i++){
			for(int j=1;j<w+1;j++){
				if(mapp[i][j]=='$'){
					if(ax==-1){
						ax=i,ay=j;
					}else{
						bx=i,by=j;	
					}
				}
			}
		}
		
		h+=2;w+=2;
		bfs(d0,0,0);
		bfs(d1,ax,ay);
		bfs(d2,bx,by);
//		for(int i=0;i<h;i++){for(int j=0;j<w;j++){printf("%d\t",d0[i][j]);}printf("\n");}printf("\n");printf("\n");
//		for(int i=0;i<h;i++){for(int j=0;j<w;j++){printf("%d\t",d1[i][j]);}printf("\n");}printf("\n");printf("\n");
//		for(int i=0;i<h;i++){for(int j=0;j<w;j++){printf("%d\t",d2[i][j]);}printf("\n");}printf("\n");printf("\n");
//		printf("\n\n");
		int ans=h*w;
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				int tmp=d0[i][j]+d1[i][j]+d2[i][j];
				if(tmp<0)continue;
				if(mapp[i][j]=='#'){
					tmp-=2;
				}
				if(ans>tmp)ans=tmp;
			}
		}
		printf("%d\n",ans);
		
	}
	
	
	return 0;
}
