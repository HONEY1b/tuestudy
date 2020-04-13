//1697
#include<bits/stdc++.h>
using namespace std;
int mini=987654321;
int c[100010];
int d[100010];

int main(void){
	int n,k;
	scanf("%d %d",&n,&k);
	queue<int> q;
	q.push(n);
	d[n]=0,c[n]=1;
	while(!q.empty()){
		int x=q.front();
		q.pop();
		printf("%d %d\n",x,d[x]);
		if(x==k)break;
		if(x+1<=100000 && !c[x+1]){
			d[x+1]=d[x]+1;
			q.push(x+1);
			c[x+1]=1;
		}
		if(x-1>=0 && !c[x-1]){
			d[x-1]=d[x]+1;
			q.push(x-1);
			c[x-1]=1;
		}
		if(x*2<=100000 && !c[x*2]){
			d[x*2]=d[x]+1;
			q.push(x*2);
			c[x*2]=1;
		}
	}
	printf("%d\n",d[k]);
}
