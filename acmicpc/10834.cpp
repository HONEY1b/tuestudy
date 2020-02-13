//10834
#include<bits/stdc++.h>
using namespace std;
int belt;
int dir;
vector< pair<int,int> >v;

int main(void){
	freopen("10834.txt","r",stdin);
	
	scanf("%d",&belt);
	long long fir=1,sec=1,ans=1;	
	for(int i=0;i<belt;i++){
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		dir+=c;
		v.push_back(make_pair(a,b));
	}
	for(int i=0;i<belt;i++){
		int a=v[i].first,b=v[i].second;
	}
//	for(int i=0;i<belt;i++){printf("%d %d\n",v[i].first,v[i].second);}
	printf("%d %lld\n",dir%2,ans);

	
	return 0;
}
