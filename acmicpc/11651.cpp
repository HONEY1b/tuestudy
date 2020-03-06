//11651
//내가만든 cmp는 왜 안되는지 아직 못찾음 
#include<bits/stdc++.h>
using namespace std;
vector< pair<int,int> > v;
int n;
//bool cmp(pair<int,int> &a, pair<int,int> &b){
//	if(a.second>b.second) return a.second<b.second;
//	else if(a.second==b.second) return a.first<b.first;
//}
int main(void){
	freopen("11651.txt","r",stdin);
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		//v.push_back(make_pair(a,b));	
		v.push_back(make_pair(b,a));
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++){
		printf("%d %d\n",v[i].second,v[i].first);	
	}
	return 0;
}
