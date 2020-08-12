//7576
#include<bits/stdc++.h>
using namespace std;
int r,c;
int tomato[1010][1010];
queue< pair<int,int> > q;
int dx[]={0,1,0,-1},dy[]={1,0,-1,0};

void printArr(void){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<tomato[i][j]<<" ";
		}
		cout<<endl;
	}cout<<"\n\n\n";
//	for(int i=0;i<r;i++){
//		for(int j=0;j<c;j++){
//			cout<<tmp[i][j]<<" ";
//		}
//		cout<<endl;
	//}
	cout<<"---------------------------\n";
}


int main(void){
	freopen("7576.txt","r",stdin);
	cin>>c>>r;
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>tomato[i][j];
			if(tomato[i][j]==1){
				q.push( make_pair(i,j) );	
			}
		}
	}
	
	while(!q.empty()){
		
		int x=q.front().first,y=q.front().second;
		q.pop();
		
		for(int k=0;k<4;k++){
			int nx=x+dx[k],ny=y+dy[k];
			if(0<=nx&&nx<r && 0<=ny&&ny<c && tomato[x][y]>=1 && tomato[nx][ny]==0){
				tomato[nx][ny]=tomato[x][y]+1;
				q.push(make_pair(nx,ny));
			}
		}
		
	}
	int ans=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(tomato[i][j]==0){
				cout<<-1<<endl;
				return 0;
			}
			if(tomato[i][j]!=-1)	
				ans=max(ans,tomato[i][j]);
		}
	}
	
	cout<<ans-1<<endl;
	return 0;
}
