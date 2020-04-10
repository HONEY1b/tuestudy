//2493
#include<bits/stdc++.h>
using namespace std;
vector<int> v;
vector<int> d;
stack<pair<int,int> > s;
int n;
int main(void){
	freopen("2493.txt","r",stdin);
	scanf("%d",&n);	
	v.resize(n+1);
	d.resize(n+1,0);
	
	for(int i=1;i<=n;i++){
		scanf("%d",&v[i]);
		s.push(make_pair(v[i],i));
	}
	
	/*
	for(int i=0;i<n;i++){
		int start=v[i],find=0;
		if(i==0){
			printf("0 ");
			continue;
		}
		for(int j=i-1;j>=0;j--){
			if(v[i]<v[j]){
				printf("%d ",j+1);
				find=1;
				break;
			}
		}
		if(find==0){printf("0 ");}
	}
	
	*/
	
	for(int i=n;i>0;i--){
		//printf("%d %d\n",s.top().first,v[i]);
		if(s.empty()) break;
		if(s.top().second==i) s.pop();
		printf("%d %d\n",s.top().first,v[i]);
		while(s.top().first<v[i]){
			s.pop();
		}
		if(s.top().first>v[i]){
			d[i]=s.top().second;
		}
	}
	
//	while(!s.empty()){
//		if(s.top().second==i) s.pop();
//		if(s.top().first>=v[i]){
//			d[i]=s.top().second;	
//		}
//	}
	
	for(int i=1;i<=n;i++){
		printf("%d ",d[i]);	
	}
	
	return 0;
}
