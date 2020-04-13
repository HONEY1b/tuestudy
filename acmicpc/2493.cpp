//2493
#include<bits/stdc++.h>
using namespace std;
int tow[500010];
stack<pair<int,int> > s;
int n;
int main(void){
	freopen("2493.txt","r",stdin);
	scanf("%d",&n);	
	for(int i=1;i<=n;i++){
		scanf("%d",&tow[i]);
	}
	
	for(int i=1;i<=n;i++){
		int ans=0;
		while(!s.empty()){
			if(s.top().first>tow[i]){
				ans=s.top().second;
				break;
			}
			else{
				s.pop();
			}
		}
		printf("%d ",ans);
		s.push(make_pair(tow[i],i));	
	}
	
	
	return 0;
}
