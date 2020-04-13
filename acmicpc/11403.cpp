//11403
#include<bits/stdc++.h>
using namespace std;

int n;
int mapp[110][110];
int arr[110][110];
int c[110];

int BFS(int s,int e){
	queue<int> q;
	memset(c,0,sizeof(c));
	
	for(int i=0;i<n;i++){
		if(mapp[s][i]){
			q.push(i);	
			c[i]=1;
		}
	}
	
	while(!q.empty()){
		int x=q.front();
		q.pop();
//		for(int i=0;i<n;i++){for(int j=0;j<n;j++){printf("%d ",mapp[i][j]);}printf("\n");}printf("\n\n");
		if(c[e])break;
		for(int i=0;i<n;i++){
			if(mapp[x][i] && !c[i]){
				q.push(i);
				mapp[x][i]=1;
				c[i]=1;
			}
		}
	}
	return c[e];
}

int main(void){
	freopen("11403.txt","r",stdin);	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&mapp[i][j]);
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			mapp[i][j]=BFS(i,j);
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",mapp[i][j]);
		}printf("\n");
	}
	
	return 0;
}
