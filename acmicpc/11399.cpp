//11399
#include<bits/stdc++.h>
using namespace std;
int n;
int arr[1010];
int d[1010];
int main(void){
	freopen("11399.txt","r",stdin);	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);	
	}
	sort(arr,arr+n);
	int total=0;
	for(int i=0;i<n;i++){
		total=total+arr[i];
		d[i]=total;
	}
	int ans=0;
	for(int i=0;i<n;i++){
		ans+=d[i];
	}
	printf("%d\n",ans);
	return 0;
}
