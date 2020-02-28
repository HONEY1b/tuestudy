//2606
#include<bits/stdc++.h>
using namespace std;
int n,line;
vector<int> v[110];
int arr[110],cnt;

void DFS(int node){
	arr[node]=1;
	for(int i=0;i<v[node].size();i++){
		if(arr[v[node][i]]==0){
			arr[v[node][i]]=1;
			DFS(v[node][i]);
		}
	}
	return;
}

void BFS(int node){
	queue<int> q;
	q.push(node);
	
	while(!q.empty()){
		int x=q.front();
		q.pop();
		arr[x]=1;
		for(int i=0;i<v[x].size();i++){
			if(arr[v[x][i]]==0){
				q.push(v[x][i]);
			}
		}
	}
}

void UnionFind(){
	
}

void FloydWarshall(){
	
}

int main(void){
	freopen("2606.txt","r",stdin);
	scanf("%d %d",&n,&line);
	for(int i=0;i<line;i++){
		int a,b;
		scanf("%d %d",&a,&b);	
		v[a].push_back(b);
		v[b].push_back(a);
	}
//	for(int i=1;i<=n;i++){for(int j=0;j<v[i].size();j++){printf("%d",v[i][j]);}printf("\n");}
//	DFS(1);
	BFS(1);

	for(int i=2;i<=n;i++){
		if(arr[i]==1){
			cnt++;
		}
	}
	printf("%d\n",cnt);
	
	return 0;
}
