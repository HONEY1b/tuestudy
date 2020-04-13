//8111
#include<stdio.h>
typedef long long ll;
ll min(ll a,ll b){return (a>b)?b:a;};
ll f(ll start,int n){
	printf("%d %d\n",start,n);
	if(start%n ==0){return start;}
	
	ll num1=start*10,num2=start*10+1;
	return min(f(num1,n),f(num2,n));
}

int main(void){
	freopen("8111.txt","r",stdin);	
	int t;
	scanf("%d",&t);
	while(t--){
		int num;
		scanf("%d",&num);
		ll ans=f(1,num);
		printf("%lld\n",ans);
	}
	
	return 0;
}
