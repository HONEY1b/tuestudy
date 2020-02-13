//16118
#include<bits/stdc++.h>
#define MAX 0x7FFFFFFF
using namespace std;
vector< vector<int> > v;
vector< vector<int> > fox;
vector< vector<int> > wolf;
int n,m;

int f(int x,int y){
	if(x==y) return 0;
	if(fox[x][y]!=0) return fox[x][y];
	fox[x][y]=MAX;
	for(int i=2;i<=n;i++){
		if(x!=i&&y!=i&&fox[x][i]!=0&&fox[i][y]!=0)
			fox[x][y]=min(fox[x][y],f(x,i)+f(i,y));
	}
	return fox[x][y];
}

int w(int x,int y){
	if(x==y) return 0;
	if(wolf[x][y]!=0) return wolf[x][y];
	wolf[x][y]=MAX;
	for(int i=1;i<=n;i++){
		if(x!=i&&y!=i&&wolf[x][i]!=0&&wolf[i][y]!=0){
			//printf("%d %d %d %d\n",i,x,y,wolf[x][y]);
			wolf[x][y]=min(wolf[x][y],(w(x,i)+1)/2+w(i,y)*2);
		}
	}
	return fox[x][y];
}

int main(void){
	freopen("16118.txt","r",stdin);
	scanf("%d %d",&n,&m);
	v.resize(n+1,vector<int>(n+1));
	fox.resize(n+1,vector<int>(n+1));
	wolf.resize(n+1,vector<int>(n+1));
	for(int i=0;i<m;i++){
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		v[a][b]=c,v[b][a]=c;
		fox[a][b]=c,fox[b][a]=c;
		wolf[a][b]=c,wolf[b][a]=c;
	}
	
//	for(int i=1;i<=n;i++){for(int j=1;j<=n;j++){printf("%d ",v[i][j]);}printf("\n");}printf("\n");
	
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n;j++){
//			fox[i][j]=MAX;
//			for(int k=1;k<=n;k++){
//				if(i!=k&&j!=k&&fox[i][j]!=0 && fox[k][j]!=0){
//					fox[i][j]=min(fox[i][j],fox[i][k]+fox[k][j]);
//				}
//			}
//		}
//	}
	
	for(int i=1;i<=n;i++){fox[1][i]=f(1,i);}
//	int ans=w(1,n);
	for(int i=1;i<=n;i++){wolf[1][i]=w(1,i);}
	
	//for(int i=1;i<=n;i++){for(int j=1;j<=n;j++){printf("%d ",fox[i][j]);}printf("\n");}printf("\n");
	for(int i=1;i<=n;i++){for(int j=1;j<=n;j++){printf("%d ",wolf[i][j]);}printf("\n");}printf("\n");
	int cnt=0;
	for(int i=2;i<=n;i++){
		if(fox[1][i]<wolf[1][i]) cnt++;	
	}
	printf("%d\n",cnt);
	
	return 0;
}
