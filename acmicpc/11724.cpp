//11724
#include<bits/stdc++.h>
using namespace std;
int n,k;
vector<int> v[1010];
bool check[1010];

void bfs(int node){
	queue<int> q;
	q.push(node);
	check[node]=1;
	
	while(!q.empty()){
		int x=q.front();
		q.pop();
		for(int i=0;i<v[x].size();i++){
			if(check[v[x][i]]==0){
				q.push(v[x][i]);
				check[v[x][i]]=1;	
			}
		}
	}
}
int main(void){
	freopen("11724.txt","r",stdin);
	cin>>n>>k;
	for(int i=0;i<k;i++){
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	int ans=0;
	for(int i=1;i<=n;i++){
		if(check[i]==0){
			ans++;
			bfs(i);
		}
	}
	cout<<ans<<endl;
	return 0;
}
