//11651
#include<bits/stdc++.h>
using namespace std;
vector< pair<int,int> > v;
int n;
bool cmp(const pair<int,int> &a, const pair<int,int> &b){
	if(a.second>b.second) return a.second<b.second;
	else if(a.second==b.second) return a.first<b.first;
}
int main(void){
	freopen("11651.txt","r",stdin);
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		v.push_back({a,b});	
	}
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<n;i++){
		printf("%d %d\n",v[i].first,v[i].second);	
	}
	return 0;
}
