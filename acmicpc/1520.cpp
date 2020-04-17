//1520
#include<bits/stdc++.h>
using namespace std;
int h,w;
int arr[510][510];
long long d[510][510];
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};

int main(void){
	freopen("1520.txt","r",stdin);
	scanf("%d %d",&h,&w);
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	queue<pair<int,int> > q;
	q.push(make_pair(0,0));
	d[0][0]=1;
	
	
	printf("%lld\n",d[h-1][w-1]);
	return 0;
}
