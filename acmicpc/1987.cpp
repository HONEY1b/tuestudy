//1987
#include<bits/stdc++.h>
using namespace std;
char arr[25][25];
int R,C;
int ans;
int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
int alph[30];

void printArr(){
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			printf("%c ",arr[i][j]);
		}printf("\n");
	}printf("\n\n\n");
}

void dfs(int x,int y,int round){
	alph[arr[x][y]-'A']=1;
	ans=max(ans,round);
	
	for(int k=0;k<4;k++){
		int nx=x+dx[k],ny=y+dy[k];
		if(0<=nx&&nx<R && 0<=ny&&ny<C && alph[arr[nx][ny]-'A']==0 && arr[nx][ny]!=0){
			dfs(nx,ny,round+1);	
			alph[arr[nx][ny]-'A']=0;
		}
	}
}

int main(void){
	freopen("1987.txt","r",stdin);

	scanf("%d %d",&R,&C);
	for(int i=0;i<R;i++){
		scanf("%s",arr[i]);	
	}
	
	dfs(0,0,1);
	printf("%d\n",ans);
	
	return 0;
}
