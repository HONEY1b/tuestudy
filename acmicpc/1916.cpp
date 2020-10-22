//1916
#include<bits/stdc++.h>
using namespace std;
vector< pair<int,int> > v[1010];
int d[1010];
int INF=987654321;

int main(void){
    freopen("1916.txt","r",stdin);

    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;

        v[a].push_back(make_pair(b,c));
    }
    for(int i=0;i<=n;i++){
        d[i]=INF;
    }

    int s,e;
    cin>>s>>e; //출발도시, 도착도시
    priority_queue< pair<int,int> > pq;
    pq.push(make_pair(0,s));
    d[s]=0;
    while(!pq.empty()){
        int x=pq.top().second;
        int cost=-pq.top().first;

        pq.pop();

        //cout<<x<<" "<<cost<<endl;

        for(int i=0;i<v[x].size();i++){
            int next=v[x][i].first;
            int nextCost=v[x][i].second;
            //cout<<next<<" "<<nextCost<<" "<<d[next]<<" "<<cost+nextCost<<endl;
            if(d[next]>cost+nextCost){
                d[next]=cost+nextCost;
                //cout<<x<<" "<<next<<" "<<d[next]<<endl;
                pq.push(make_pair(-d[next],next));
            }
        }
    }

    cout<<d[e]<<endl;
    return 0;

}