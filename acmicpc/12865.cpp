//12865
#include<bits/stdc++.h>
using namespace std;
int n,m;
int arr[110][2];
int d[110][10000000];
long long Min=-987654321;


int main(void){
	freopen("12865.txt","r",stdin);
	scanf("%d %d",&n,&m);
	memset(d,Min,sizeof(110));
	for(int i=1;i<=n;i++){
		int a,b;
		scanf("%d %d",&arr[i][0],&arr[i][1]);	
	}
	int vol=0;
	
	printf("%lld\n",dp(n,m));
	
	return 0;
}
