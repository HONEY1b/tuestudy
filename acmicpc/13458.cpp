//13458
#include<stdio.h>
int arr[1000010];
int n,b,c;

int main(void){
	freopen("13458.txt","r",stdin);
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);	
	}
	scanf("%d %d",&b,&c);
	
	long long ans=n;//총 감독관 수
	for(int i=0;i<n;i++){
		long long tmp=arr[i]-b;//남은 학생 수
		if(tmp<=0) continue;
		long long tmp2=(tmp+c-1)/c;
		ans+=tmp2; 
	}
	printf("%lld\n",ans);

	
	return 0;
}
