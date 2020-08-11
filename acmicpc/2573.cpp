//2573
/*
1. 매년 시작
2. 덩어리가 1개이면 빙하가 녹는 프로그램 진행 && 해 증가 
	2-1. 각 빙하가 녹는다
	2-2. 주변의 0의 수만큼 녹는다.
3. 덩어리가 2개면 for문 종료! 출 력 

*/
#include<bits/stdc++.h>
using namespace std;
int ice[310][310],check[310][310],meltice[310][310];
int r,c;//행,열
int dx[]={0,1,0,-1},dy[]={1,0,-1,0}; 

void printArr(){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<ice[i][j]<<" ";	
		}cout<<'\n';
	}cout<<"\n\n\n\n";
}

void melt(void){
	for(int i=0;i<r;i++){for(int j=0;j<c;j++){meltice[i][j]=0;}}
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(ice[i][j]==0) continue;
			for(int k=0;k<4;k++){
				int nx=i+dx[k],ny=j+dy[k];
				if(0<=nx&&nx<r && 0<=ny&&ny<c && ice[nx][ny]==0 && ice[i][j]>0){
					meltice[i][j]++;
				}
			}
		}
	}
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			ice[i][j]-=meltice[i][j];
			if(ice[i][j]<0) ice[i][j]=0;
		}
	}
}
void dfs(int x,int y){
	check[x][y]=1;
	
	for(int k=0;k<4;k++){
		int nx=x+dx[k],ny=y+dy[k];
		if(0<=nx&&nx<r && 0<=ny&&ny<c && ice[nx][ny]!=0 && check[nx][ny]==0){
			dfs(nx,ny);
		}
	}
}
int ice_num(void){
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			check[i][j]=0;
		}
	}
	
	int ans=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(check[i][j]==0 && ice[i][j] != 0){
				ans++;
				dfs(i,j);	
			}
		}
	}
	
	return ans;
}

int main(void){
	freopen("2573.txt","r",stdin);
	
	cin>>r>>c;
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>ice[i][j];	
		}
	}
	
	int timelimit=r*c+1;
	int time=0,answer=0;
	while(true){
		if(time==timelimit) break;
		melt();
		time++;
		int num=ice_num();
		
		if(num>1){
			answer=time;
			break;	
		}else if(num==0){
			//cout<<"dd"<<endl;
			answer=0;
			break;
		}
	}
	cout<<answer<<'\n';
	
	return 0;
}
