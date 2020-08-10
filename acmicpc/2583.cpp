//2583
#include<bits/stdc++.h>
using namespace std;
int squ[110][110];
int n,m,k;
bool check[110][110];
int size=0;
int dx[]={0,1,0,-1},dy[]={1,0,-1,0};

void printArr(int map[110][110]){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<map[i][j]<<'\t';
		}cout<<endl;
	}cout<<"\n\n\n\n";
}

void dfs(int x,int y,int color){
	check[x][y]=true;
	squ[x][y]=color;
	size++;
	
	for(int k=0;k<4;k++){
		int nx=x+dx[k],ny=y+dy[k];
		if(0<=nx && nx<m && 0<=ny && ny<m && check[nx][ny]==false && squ[nx][ny]==1000){
			
			dfs(nx,ny,color);
		}
	}
}

int main(void){
	freopen("2583.txt","r",stdin);

	cin>>n>>m>>k;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			squ[i][j]=1000;
		}
	}
	
	//printArr(squ);
	
	for(int i=0;i<k;i++){
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		for(int x=y1;x<y2;x++){
			for(int y=x1;y<x2;y++){
				squ[x][y]=0;	
			}
		}
	}
	
	//printArr(squ);
	int ans=0;
	int ansarr[10000];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(check[i][j]==false && squ[i][j]==1000){
				size=0;
				dfs(i,j,ans+1);
				ansarr[ans]=size;
				ans++;
				//printArr(squ);
			}
		}
	}
	sort(ansarr,ansarr+ans);
	cout<<ans<<'\n';
	for(int i=0;i<ans;i++){
		cout<<ansarr[i]<<" ";	
	}cout<<'\n';
	return 0;
}
