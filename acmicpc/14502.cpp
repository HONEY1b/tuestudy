//14502
#include<stdio.h>
#include<queue>
using namespace std;

int n,m,realAnswer=0;
int arr[15][15];
int dx[]={1,0,-1,0};
int dy[]={0,-1,0,1};

void bfs(){
	int arr2[15][15];
	queue< pair<int,int> >q;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			arr2[i][j]=arr[i][j];
			if(arr2[i][j]==2){
				q.push(make_pair(i,j));	
			}
		}
	}
	
	while(!q.empty()){
		int x=q.front().first,y=q.front().second;
		q.pop();
		for(int i=0;i<4;i++){
			int nx=x+dx[i],ny=y+dy[i];
			if(0<=nx && nx<n && 0<=ny && ny<m){
				if(arr2[nx][ny]==0){
					arr2[nx][ny]=2;
					q.push(make_pair(nx,ny));
				}
			}
		}
	}
	//for(int i=0;i<n;i++){for(int j=0;j<m;j++){printf("%d ",arr2[i][j]);}printf("\n");}printf("\n\n\n");
	
	int answer=0;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr2[i][j]==0){
				answer++;	
			}
		}
	}
	
	if(answer>realAnswer){
		realAnswer=answer;	
		//for(int i=0;i<n;i++){for(int j=0;j<m;j++){printf("%d ",arr2[i][j]);}printf("\n");}printf("\n\n\n");
				 
	}
	
	return;
}

void makeWall(int x,int y,int cnt){
	//printf("%d %d %d\n",x,y,cnt);
	if(cnt>=3){
		bfs();
		return;	
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[i][j]==0){
				arr[i][j]=1;
				makeWall(i,j,cnt+1);
				arr[i][j]=0;
			}
		}
	}
}

int main(void){
	freopen("14502.txt","r",stdin);
	scanf("%d %d",&n,&m);
	for(int i=0;i<=n+1;i++){
		for(int j=0;j<=m+1;j++){
			if(i==0 || i==n+1 || j==0 || j==m+1){
				arr[i][j]=1;
			}else{
				scanf("%d",&arr[i][j]);	
			}
		}
	}
	n+=2;m+=2;
	//for(int i=0;i<n;i++){for(int j=0;j<m;j++){printf("%d ",arr[i][j]);}printf("\n");}printf("\n\n\n");
	
	makeWall(0,0,0);
	
	printf("%d\n",realAnswer);
	
	return 0;
}
