//2798
#include<bits/stdc++.h>
using namespace std;
int arr[110];
int c[110];
int n,m,ans=0;
int mini=0xfffffff;

int main(void){
	freopen("2798.txt","r",stdin);	
	
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);	
	}
	sort(arr,arr+n);
	for(int i=0;i<n-2;i++){
		if(arr[i]>m) continue;
		for(int j=i+1;j<n-1;j++){
			if(arr[i]+arr[j] > m) continue;
			for(int k=j+1;k<n;k++){
				int sum=arr[i]+arr[j]+arr[k];
				if(sum>m)continue;
				if(abs(sum-m)<mini){
					ans=sum;
					mini=abs(sum-m);
					//printf("%d %d %d %d\n",arr[i],arr[j],arr[k],sum);
				}
			}
		}
	}
	printf("%d\n",ans);
	
	return 0;
}
