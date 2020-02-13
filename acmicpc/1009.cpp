//1009
#include<stdio.h>
int t;

int main(void){
	freopen("1009.txt","r",stdin);
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d %d",&a,&b);
		int ans=1;
		while(b--){
			ans*=a;
			ans%=10;
		}
		if(ans==0) ans=10;
		printf("%d\n",ans);
	}
	
	return 0;
}
