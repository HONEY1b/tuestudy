//9376
#include<bits/stdc++.h>
using namespace std;

int t,w,h;
char mapp[110][110];
int check[110][110];
int arr[2][2];
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};

struct Pos{
	int x,y;
};

/*

int bfs(int sx,int sy){
	queue<pair<int,int> > q;
	q.push(sx,sy);
	int cnt=0;
	while(q.empty()){
		int x=q.front().first,y=q.front().second;
		int door=check[x][y];
		
		if(x==arr[0][0] && y==arr[0][1]){
			cnt++;
		}else if(x==arr[1][0] && y==arr[1][1]){
			cnt++;
		}
		
		//죄수 두명 다 찾음 
		if(cnt==2){break;}
		
		for(int i=0;i<4;i++){
			int nx=x+dx[i],ny=y+dy[i];
			if(nx>0&&nx<h && ny>0&&ny<w && check[nx][ny]==0 && mapp[nx][ny]!='*'){
				if(mapp[nx][ny]=='#'){
					mapp[nx][ny]=='.';
					check[nx][ny]=door+1;
				}else if(mapp[nx][ny]=='.'){
					check[nx][ny]=door;
				}
			}	
		}
	}
}
*/

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	freopen("9376.txt","r",stdin);
	cin>>t;
	
	while(t--){
		cin>>h>>w;
		h++;w++;
		int p=0,sx,sy;
		
		//mapp 입력 
		for(int i=0;i<=h;i++){
			for(int j=0;j<=w;j++){
				if(i==0 || j==0) {
					mapp[i][j]='.';
					continue;
				}else{
					cin>>mapp[i][j];
					if(mapp[i][j]=='$'){
						arr[p][0]=i,arr[p][1]=j;
						p++;
						mapp[i][j]='.';
					}
				}
			}
		}
		
	//	int one=bfs(0,0);
	//	int p1=bfs(arr[0][0],arr[0][1]);
	//	int p2=bfs(arr[1][0],arr[1][1]);
		
		
		//죄수 위치 
		//cout<<arr[0][0]<<" "<<arr[0][1]<<'\n'<<arr[1][0]<<" "<<arr[1][1]<<'\n';
		
		//mapp 출력 
		for(int i=0;i<=h;i++){for(int j=0;j<=w;j++){cout<<mapp[i][j]<<" ";}cout<<'\n';}
	
	
	}
	
	
	
	return 0;
}
