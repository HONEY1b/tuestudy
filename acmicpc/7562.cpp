//7562
#include<bits/stdc++.h>
using namespace std;

int chess[305][305];
int dx[]={-2,-1,1,2,2,1,-1,-2},dy[]={1,2,2,1,-1,-2,-2,-1};

void printArr(int num){
	for(int i=0;i<num;i++){
		for(int j=0;j<num;j++){
			cout<<chess[i][j]<<" ";
		}	cout<<'\n';
	}	cout<<"\n\n";
}

int main(void){
	freopen("7562.txt","r",stdin);	
	int t;
	cin>>t;
	while(t--){
		int n;
		int curX,curY,nextX,nextY;
		cin>>n>>curX>>curY>>nextX>>nextY;
		
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				chess[i][j]=0;
			}	
		}
		queue< pair<int,int> > q;
		q.push(make_pair(curX,curY));
		chess[curX][curY]=1;
		
		while(!q.empty()){
			//printArr(n);
			int x=q.front().first,y=q.front().second;
			//cout<<x<<" "<<y<<endl;
			q.pop();
			if(x==nextX && y==nextY)break;
			for(int k=0;k<8;k++){
				int nx=x+dx[k],ny=y+dy[k];
				
				if(0<=nx&&nx<n && 0<=ny&&ny<n && chess[x][y]>0 && chess[nx][ny]==0){
					chess[nx][ny]=chess[x][y]+1;
					q.push(make_pair(nx,ny));
				}
			}
				
		}
		cout<<chess[nextX][nextY]-1<<endl;
	}
	
	return 0;
}
