//1753
#include<bits/stdc++.h>
using namespace std;
vector< pair<int,int> > d[20010];
bool check[20010];
int INF=987654321;
int n,m,s; //노드수, 간선수, 시작점 
int main(void){
	freopen("1753.txt","r",stdin);
		
	cin>>n>>m>>s;
	for(int i=0;i<m;i++){
		int a,b,c;
		cin>>a>>b>>c;
		d[a].push_back(make_pair(b,c));
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<d[i].size();j++){
			for(int k=0;k<n;k++){
				
			}
		}
	}
	
	return 0;
}
