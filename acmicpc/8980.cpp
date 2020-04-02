//8980
#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> > v[2010];
vector<pair<int,int> > p;
int n,c,t;
int arr[2010];
int maxi=-987654321;
void f(int cur,int cap,int tot){
	printf("%d %d %d\n",cur,cap,tot);
	if(cap<0)return;
	if(cur>n){
		if(tot>maxi) maxi=tot;
		return;
	}
	
	for(int i=0;i<p.size();i++){
		if(p[i].first == cur){
			cap-=p[i].second;
		}
	}
	
	for(int i=0;i<v[cur].size();i++){
		int nxt=v[cur][i].first,siz=v[cur][i].second;
		p.push_back(make_pair(nxt,siz));
		f(nxt,cap-siz,tot+siz);
	}
}

int main(void){
	freopen("8980.txt","r",stdin);
	scanf("%d %d",&n,&c);
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		int p,q,r;
		scanf("%d %d %d",&p,&q,&r);
		v[p].push_back(make_pair(q,r));
	}
	
	f(1,c,0);
	printf("%d",maxi);
	
	return 0;
}
