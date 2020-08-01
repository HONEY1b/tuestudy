//10816
#include<bits/stdc++.h>
using namespace std;
vector<int> v(20000010);
vector<pair<int,int> > v2;
int Max=987654321;
int n,m;

bool cmp(pair<int,int> p1,pair<int, int> p2){
	return p1.second < p2.second;
}

int main(void){
	freopen("10816.txt","r",stdin);
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		v[a+10000000]++;
	}
	
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		int a;
		scanf("%d",&a);
		v2.push_back(make_pair(i,a));
	}
	
	//입력 받은 거 내림차순으로 정렬 
	//sort(v2.begin(),v2.end(),cmp);

	//for(int i=0;i<v2.size();i++){printf("%d\t",v2[i].second);}
	//printf("\n");
	for(int i=0;i<v2.size();i++){
		printf("%d ",v[v2[i].second + 10000000]);	
	}
	
	return 0;
}
