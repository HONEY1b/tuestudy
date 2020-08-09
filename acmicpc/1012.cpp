//1012
#include<bits/stdc++.h>
using namespace std;
int land[55][55];
int h,w,k;//가로,세로,배추의 수
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
void dfs(int x,int y,int color){
//		for(int i=0;i<h;i++){
//			for(int j=0;j<w;j++){
//				cout<<land[j][i]<<'\t';
//			}
//			cout<<'\n';
//		}cout<<"\n\n\n";
	//cout<<x<<" "<<y<<" "<<color<<endl;
	land[x][y]=color;
	
	for(int k=0;k<4;k++){
		int nx=x+dx[k],ny=y+dy[k];
		if(0<=nx&&nx<w && 0<=ny&&ny<h && land[nx][ny]==1000){
			dfs(nx,ny,color);
		}
	}
}
int main(void){
	freopen("1012.txt","r",stdin);
	
	int t;
	cin>>t;
	while(t--){
		memset(land,0,sizeof(land));
		cin>>w>>h>>k;	
		for(int i=0;i<k;i++){
			int x,y;
			cin>>x>>y;
			land[x][y]=1000;
		}
		
//		for(int i=0;i<h;i++){
//			for(int j=0;j<w;j++){
//				cout<<land[j][i]<<'\t';
//			}
//			cout<<endl;
//		}
	
		int worm=0;
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				if(land[j][i]==1000){
					worm++;
					dfs(j,i,worm);	
				}
			}
			//for(int i=0;i<h;i++){for(int j=0;j<w;j++){cout<<land[j][i]<<'\t';}cout<<'\n';}cout<<"\n\n\n";
		}
		
		cout<<worm<<'\n';
	}
	
	return 0;
}
