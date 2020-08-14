//7569
#include<bits/stdc++.h>
using namespace std;
int r,c,h;
int tomato[110][110][110];
int dx[]={1,0,-1,0,0,0},dy[]={0,1,0,-1,0,0},dz[]={0,0,0,0,1,-1};

struct Tomato{
	int high,row,col;
};

queue<Tomato> q;

bool edge(int nx,int ny,int nz){
	return 0<nx&&nx<=r && 0<ny&&ny<=c && 0<nz&&nz<=h;
}

void printArr(){
	for(int i=1;i<=h;i++){
		for(int j=1;j<=r;j++){
			for(int k=1;k<=c;k++){
				cout<<tomato[i][j][k]<<" ";
			}cout<<'\n';
		}cout<<"\n\n";
	}cout<<"-------------------\n";
}

int main(void){
	freopen("7569.txt","r",stdin);	
	cin>>c>>r>>h; //y,x,z; 
	for(int i=1;i<=h;i++){//z
		for(int j=1;j<=r;j++){//x
			for(int k=1;k<=c;k++){//y
				cin>>tomato[i][j][k]; //z,x,y
				if(tomato[i][j][k]==1){
					q.push({i,j,k});
				}
			}
		}
	}
	
	
	while(!q.empty()){
		//printArr();
		int x=q.front().row,y=q.front().col,z=q.front().high;
		q.pop();
		
		for(int i=0;i<6;i++){
			int nx=x+dx[i],ny=y+dy[i],nz=z+dz[i];
			if(!edge(nx,ny,nz))continue;
			if(tomato[nz][nx][ny]==0 && tomato[z][x][y]>=1){
				tomato[nz][nx][ny]=tomato[z][x][y]+1;	
				//cout<<x<<" "<<y<<" "<<z<<endl;
				//cout<<nx<<" "<<ny<<" "<<nz<<endl;
				q.push({nz,nx,ny});
			}
		}
	}
	
	int ans=0;
	for(int i=1;i<=h;i++){
		for(int j=1;j<=r;j++){
			for(int k=1;k<=c;k++){
				if(tomato[i][j][k]==0){
					cout<<-1<<endl;
					return 0;
				}
				else{
					ans=max(ans,tomato[i][j][k]);
				}
			}
		}
	}
	cout<<ans-1<<endl;
	return 0;
	
}
