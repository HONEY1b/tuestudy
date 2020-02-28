//1780
#include<bits/stdc++>
using namespace std;
int arr[3];
int map[3000][3000];
bool check[3000][3000];
int dx[3]={0,1,1};
int dy[3]={1,1,0};

void BFS(int sx,int sy,int size){
	queue < pair<int ,int> > q;
	q.push(make_pair(sx,sy));
	check[sx][sy]=true;
	int range=
	while(!q.empty()){
		int x=q.front().first,y=q.front().second;
		q.pop();
		int num=map[x][y];
		for(int i=0;i<3;i++){
			int nx=x+dx[i],ny=y+dy[i];
			if(nx<=size && ny<=size){
				if(){
					
				}
			}
		}
		
	}
}

int main(void){
	freopen("1780.txt","r",stdin);
	scanf("%d",&n);
	//1-base
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&map[i][j]);
		}
	}
	
	BFS(0,0,n);
	
	return 0;
}
