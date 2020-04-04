//1966
#include<bits/stdc++.h>
using namespace std;

int main(void){
	freopen("1966.txt","r",stdin);
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d %d",&n,&m);
		int arr[101];
		priority_queue<int> pq;
		queue<pair<int,int> > q;
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
			pq.push(arr[i]);
			q.push(make_pair(i,arr[i]));
		}
		int cnt=0;
		while(!q.empty()){
			int cur=q.front().second,idx=q.front().first;
			q.pop();
			if(cur<pq.top()){
				q.push(make_pair(idx,cur));
			}else{
				cnt++;
				pq.pop();
				if(idx==m){printf("%d\n",cnt);}
			}
		}
	}
	return 0;
}
