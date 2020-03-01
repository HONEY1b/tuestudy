//2501
#include<vector>
#include<iostream>
#include<stdio.h>
using namespace std;
int n,k;
int arr[10010];
int f(void){
	for(int i=1;i<=n;i++){
		if(n%i == 0){
			int a=n/i,b=i;
			arr[a]=1,arr[b]=1;
		}
	}
//	for(int i=1;i<=n;i++){
//		printf("%d ",i);	
//	}printf("\n");
//	for(int i=1;i<=n;i++){
//		printf("%d ",arr[i]);	
//	}printf("\n");
	for(int i=1;i<=n;i++){
		if(arr[i]==1){
			k--;
		}
		if(k==0){
			return i;
		}
	}
	return 0;
}
int main(void){
	scanf("%d %d",&n,&k);
	int ans = f();
	printf("%d\n",ans);
	return 0;
}
