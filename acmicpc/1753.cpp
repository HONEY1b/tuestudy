//1753
#include<bits/stdc++.h>
using namespace std;
vector< pair<int,int> > v[20010];
int n,m,s; //노드수, 간선수, 시작점 
int main(void){
	freopen("1753.txt","r",stdin);
		
	cin>>n>>m>>s;
	for(int i=0;i<m;i++){
		int a,b,c;
		cin>>a>>b>>c;
		v[a].push_back(make_pair(b,c));
	}
	
	return 0;
}
