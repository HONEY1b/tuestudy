//1931
#include<bits/stdc++.h>
using namespace std;
vector< pair<int,int> >v;
vector< int > d;
vector< bool > check;
int n,Max=-987654321;

void f(int level,int start, int end, int sum){
	if(level>=n){
		if(sum>Max){
			Max=sum;
			return;
		}
	}
	
	for(int i=0;i<v.size();i++){
		if(!check[i] && start<=v[i].first && end<v[i].second){
			check[i]=true;
			f(level+1,start, v[i].second, sum+v[i].second-end);
			check[i]=false;
			f(level+1,start,end,sum);
		}
	}
}

int main(void){
	freopen("1931.txt","r",stdin);
	scanf("%d",&n);
	check.resize(n+1);
	for(int i=0;i<n;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		v.push_back(make_pair(a,b));
	}
	sort(v.begin(),v.end());
//	for(int i=0;i<v.size();i++){printf("%d %d\n",v[i].first,v[i].second);}
	f(0,0,0,0);
	int cnt=0;
	for(int i=0;i<v.size();i++){
		if(check[i]) cnt++;
	}
	printf("%d\n",cnt);
	return 0;
}
