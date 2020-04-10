//10971
#include<bits/stdc++.h>
using namespace std;
int n,MAX=2147483647;
int mapp[15][15];
int check[15];
int d[15][15];
int ans=2147483647;


void f(int s,int e,int cur,int sum){
	bool isOk=true;
	for(int i=1;i<=n;i++){
		if(check[i]==0){
			isOk=false;
		}
	}
	if(isOk){
		if(sum<ans) {
			sum=ans;
		}
		return;
	}
	
	for(int i=1;i<=n;i++){
		if(!check[i]){
			check[i]=1;
			f(s,e,i,sum+mapp[cur][i]);
			f(s,e,i,sum);
			check[i]=0;
		}
	}
}


int main(void){
	freopen("10971.txt","r",stdin);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&mapp[i][j]);
		}
	}
	
	int cur=2147483647;
	for(int i=1;i<=n;i++){
		memset(d,0,sizeof(d));
		memset(check,0,sizeof(check));
		
		f(1,1,1,0);

//		for(int i=1;i<=n;i++){for(int j=1;j<=n;j++){printf("%d\t",d[i][j]);}printf("\n");}printf("\n");

		if(cur<ans){ans=cur;}	
	}
	printf("%d\n",ans);
	
	return 0;
}
