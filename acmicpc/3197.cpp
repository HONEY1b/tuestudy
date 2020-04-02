//3197
#include<bits/stdc++.h>
using namespace std;
string mapp[1510];
bool check[1510][1510];
int arr[2][2];
int w,h;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};

bool bfs(int sx,int sy){
	queue<pair<int,int> > q;
	q.push(make_pair(sx,sy));
	check[sx][sy]=true;
	
	for(int i=0;i<h;i++){cout<<mapp[i]<<'\n';}
	
	while(!q.empty()){
		int x=q.front().first,y=q.front().second;
		int days=check[x][y];
		
		if(x==arr[1][0] && y==arr[1][1]) {return true;}
		
		for(int i=0;i<4;i++){
			int nx=x+dx[i],ny=y+dy[i];
			
			if(nx>0&&nx<h && nx>0&&ny<w && !check[nx][ny] && mapp[nx][ny]=='.'){
				q.push(make_pair(nx,ny));
				check[nx][ny]=true;
			}
		}
	}
	
	return false;
}

void melt(){
	for(int i=0;i<w;i++){
		for(int j=0;j<h;j++){
			if(mapp[i][j]=='.'){
				for(int k=0;k<4;k++){
					int nx=i+dx[k],ny=j+dy[k];
					if(mapp[nx][ny]=='X') mapp[nx][ny]='.';
				}
			}
		}
	}
}

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	freopen("3197.txt","r",stdin);
	cin>>h>>w;
	int p=0;
	for(int i=0;i<h;i++){
		cin>>mapp[i];
		for(int j=0;j<w;j++){
			if(mapp[i][j]=='L'){
				arr[p][0]=i,arr[p][1]=j;
				p++;
				mapp[i][j]='.';
			}
		}
	}
	
	cout<<h<<w<<endl;
	for(int i=0;i<h;i++){cout<<mapp[i]<<'\n';}
	
	
	/*
	//녹이기
	int cnt=0;
	while(true){
		//길이 있나 확인
		if(bfs(arr[0][0],arr[0][1])){
			break;
		}else{
			//없으면 cnt++;
			//녹이기
			melt();
			cnt++;
		}
		//for(int i=0;i<h;i++){cout<<mapp[i]<<'\n';}cout<<'\n';	
	}
	cout<<cnt;
	*/
	
	return 0;
}
