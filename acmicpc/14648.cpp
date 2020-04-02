//14648
#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int n,q;

long long f1(int a,int b){
	long long total=0;
	int tmp;
	for(int i=a;i<=b;i++){
		total+=v[i];
	}
	tmp=v[a];
	v[a]=v[b];
	v[b]=tmp;
	return total;
}

long long f2(int a,int b,int c,int d){
	long long total1=0,total2=0;
	for(int i=a;i<=b;i++){
		total1+=v[i];
	}
	for(int i=c;i<=d;i++){
		total2+=v[i];
	}
	return total1-total2;
}

int main(void){
	freopen("14648.txt","r",stdin);
	scanf("%d %d",&n,&q);
	v.resize(n+1);
	for(int i=1;i<=n;i++){
		scanf("%d",&v[i]);
	}
	while(q--){
		int t;
		scanf("%d",&t);	
		if(t==1){
			int a,b;
			scanf("%d %d",&a,&b);
			printf("%lld\n",f1(a,b));
		}else if(t==2){
			int a,b,c,d;
			scanf("%d %d %d %d",&a,&b,&c,&d);
			printf("%lld\n",f2(a,b,c,d));	
		}
	}
	return 0;
}
