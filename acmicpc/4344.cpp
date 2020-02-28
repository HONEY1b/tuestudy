//4344
#include<stdio.h>
#include<algorithm>
using namespace std;

int arr[1010];

int upper(int len,double k){
	int s=0,e=len-1;
	while(s<e){
		int m=(s+e)/2;
		if(arr[m]<k) s=m+1;
		else e=m;
	}
	return e;
}
int main(void){
	freopen("4344.txt","r",stdin);
	int t;
	scanf("%d",&t);
	
	while(t--){
		int n;
		double total=0,avg=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);	
			total+=arr[i];
		}
		
		avg=total/n;
		sort(arr,arr+n);
		int up=upper(n,avg);
		//printf("%d\n",up);
		double ans=(double)(n-up)/n*100;
		printf("%.3lf\n",ans);
	}
	
	return 0;
}
