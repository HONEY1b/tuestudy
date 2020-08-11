//10026
#include<bits/stdc++.h>
using namespace std;
char RGB_map[110][110];
int n;
int check[110][110];
int dx[]={0,1,0,-1},dy[]={1,0,-1,0};

void printArr(){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<RGB_map[i][j]<<" ";
		}cout<<'\n';
	}cout<<"\n\n\n";
}

void dfs(int x,int y){
	
	check[x][y]=1;
	
	for(int k=0;k<4;k++){
		int nx=x+dx[k],ny=y+dy[k];
		if(0<=nx&&nx<n && 0<=ny&&ny<n && check[nx][ny]==0 && RGB_map[x][y]==RGB_map[nx][ny]){
			dfs(nx,ny);
		}
	}
}

int nonRGB(){
	int total=0;
	//printArr();
	memset(check,0,sizeof(check));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(check[i][j]==0){
				total++;
				dfs(i,j);
			}
		}
	}
	return total;
}

int RGB(){
	int total=0;
	memset(check,0,sizeof(check));
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(RGB_map[i][j]=='G')
				RGB_map[i][j]='R';
		}
	}
	
	//printArr();
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(check[i][j]==0){
				total++;
				dfs(i,j);
			}
		}
	}
	return total;
}

int main(void){
	freopen("10026.txt","r",stdin);	
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>RGB_map[i];	
	}
	
	//printArr();
	
	//nonRGB();
	//RGB();
	
	cout<<nonRGB()<<'\n';
	cout<<RGB();
	
	return 0;
}
