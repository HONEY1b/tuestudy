//3197
#include<bits/stdc++.h>
using namespace std;
char mapp[1510][1510];
int d[1510][1510];
int arr[2][2];
int w,h;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
queue<pair<int,int> > nq;

bool bfs(int sx,int sy){
	queue<pair<int,int> > q;
	nq.push(make_pair(sx,sy));
	q.push(make_pair(sx,sy));
	d[sx][sy]=1;
	
	while(!q.empty()){
		int x=q.front().first,y=q.front().second;
		q.pop();
		if(x==arr[1][0] && y==arr[1][1]) {return true;}
		
		for(int i=0;i<4;i++){
			int nx=x+dx[i],ny=y+dy[i];
			if(nx<0||nx>=h||ny<0||ny>=w){
				continue;
			}
			if(d[nx][ny]==1)continue;
			if(mapp[nx][ny]=='.'){
				printf("%d %d\n",nx,ny);
				q.push(make_pair(nx,ny));
				nq.push(make_pair(nx,ny));
				d[nx][ny]=1;
			}
		}
	}
	
	return false;
}

void melt(){
	while(nq.empty()){
		for(int i=0;i<4;i++){
			int nx=nq.front().first+dx[i],ny=nq.front().second+dy[i];
			nq.pop();
			if(nx<0||nx>=h||ny<0||ny>=w){continue;}
			if(d[nx][ny])continue;
			if(mapp[nx][ny]=='.'){
				nq.push(make_pair(nx,ny));
				d[nx][ny]=1;
			}
			if(mapp[nx][ny]=='X'){
				mapp[nx][ny]=1;
				mapp[nx][ny]='.';
			}
		}
	}
}


int main(void){
	freopen("3197.txt","r",stdin);
	scanf("%d %d",&h,&w);
	int p=0;
	
	for(int i=0;i<h;i++){
		scanf("%s",mapp[i]);
		for(int j=0;j<w;j++){
			if(mapp[i][j]=='L'){
				arr[p][0]=i,arr[p][1]=j;
				p++;
				mapp[i][j]='.';
			}
		}
	}
	
//	for(int i=0;i<h;i++){
//		for(int j=0;j<w;j++){
//			printf("%c ",mapp[i][j]);
//		}
//		printf("\n");
//	}

	//녹이기
	int cnt=0;
	
	while(true){
		//길있나 확인
		//녹일길 저장
		if(!bfs(arr[0][0],arr[0][1])){
			//길이 없으면
			cnt++;
			
			//길 녹이기
			melt();
		}else{
			break;	
		}
	}	
	printf("%d\n",cnt);
	
	return 0;
}
