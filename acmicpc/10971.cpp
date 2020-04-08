//10971
#include<bits/stdc++.h>
using namespace std;
int n,MAX=987654321;
int mapp[15][15];
int check[15][15];
int d[15][15];



int f(int s,int e){
	if(!mapp[s][e]&&s!=e){return MAX;}
	//s,e가 길이 없을 때 
	
	if(d[s][e]>0){return d[s][e];}
	//s->e 길이가 나와있을 때
	 
	if(check[s][e]){return d[s][e];}
	//이미 간 길일때 
	
	d[s][e]=mapp[s][e];
	check[s][e]=1;
	for(int i=1;i<=n;i++){
		d[s][e]=min(d[s][i]+d[i][e],d[s][e])+mapp[s][e];	
	}
	return d[s][e];
}

int main(void){
	freopen("10971.txt","r",stdin);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&mapp[i][j]);
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("%d\t",mapp[i][j]);
		}
		printf("\n");
	}printf("\n");
	
	int ans=0x7fffffff;
	for(int i=1;i<=n;i++){
		memset(d,0,sizeof(d));
		memset(check,0,sizeof(check));
		int cur=f(i,i);

		for(int i=1;i<=n;i++){for(int j=1;j<=n;j++){printf("%d\t",d[i][j]);}printf("\n");}printf("\n");

		if(cur<ans){ans=cur;}	
	}
	printf("%d\n",ans);
	
	return 0;
}
