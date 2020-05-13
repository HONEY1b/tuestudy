//1707
#include<bits/stdc++.h>
using namespace std;
vector<int> v[20001];
int c[20001];
int n,k;

void bfs(int start){
	queue<int> q;
	q.push(start);
	c[start]=1;
		
	while(!q.empty()){
		int x=q.front();
		q.pop();
		
		for(int i=0;i<v[x].size();i++){
			int k=v[x][i];
			if(c[k]!=0)continue;
			if(c[x]==1){
				c[k]=2;	
			}else if(c[x]==2){
				c[k]=1;	
			}
			q.push(k);
		}
	}
}

int main(void){
	freopen("1707.txt","r",stdin);	
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&k);	
		
		for(int i=0;i<=n;i++){
			v[i].clear();
			c[i]=0;	
		}
		
		for(int i=1;i<=k;i++){
			int a,b;
			scanf("%d %d",&a,&b);
			v[a].push_back(b);
			v[b].push_back(a);
		}
		
		for(int i=1;i<=n;i++){
			if(c[i]==0){
				bfs(i);
			}
		}
		
		bool ok=true;
		for(int i=1;i<=n;i++){
			for(int j=0;j<v[i].size();j++){
				if(c[i]==c[v[i][j]]){
					ok=false;
				}
			}
		}
		if(ok){printf("YES\n");}
		else{printf("NO\n");}
	}
	
	return 0;
}
