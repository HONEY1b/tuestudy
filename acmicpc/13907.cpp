//13907
#include<bits/stdc++.h>
using namespace std;
int n,m,k,s,d;
vector<vector<int> > v;
vector<vector<int> > v2;
int karr[30010];

int Dijkstra(int sta,int des){
	priority_queue <pair<int,int> > pq;
	vector<int> dist(n+10,1e9+7);
	vector<bool> check(n+10,0);
	
	pq.push({0,sta});
	
	dist[sta]=0;
	
	while(!pq.empty()){
		int now=pq.top().second;
		pq.pop();
		if(check[now]) continue;
		
		check[now]=true;
		
		for(int i=1;i<=n;i++){
			if(v[now][i]!=0){
				int next=i, nc=dist[now]+v[now][i];
				if(dist[next]>nc){
					dist[next]=nc;
					pq.push({-nc,next});
				}
			}
		}
		
	}
	return dist[des];
}

int main(void){
	freopen("13907.txt","r",stdin);
	scanf("%d %d %d",&n,&m,&k); //도시수 도로수 세금 인상 수 
	scanf("%d %d",&s,&d); //출발-도착 
	
	v.resize(n+10,vector<int>(n+10,0));
	v2.resize(n+10,vector<int>(n+10,0));
	
	for(int i=0;i<m;i++){
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		v[a][b]=c;
		v[b][a]=c;
	}
//	for(int i=1;i<=n;i++){for(int j=1;j<=n;j++){printf("%d ",v[i][j]);}printf("\n");}
	
	//인상되는 요금 입력받음 
	for(int i=1;i<=k;i++){
		scanf("%d",&karr[i]);
	}
	
	int ans=0;
	for(int kk=0;kk<=k;kk++){
		//맵의 요금 인상분 변경 
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(v[i][j]!=0){
					v[i][j]+=karr[kk];
				}
			}
		}
	//	for(int i=1;i<=n;i++){for(int j=1;j<=n;j++){printf("%d ",v[i][j]);}printf("\n");}
	//	printf("\n\n\n");
		ans=Dijkstra(s,d);
		printf("%d\n",ans);
	}
	
	
	return 0;
}
