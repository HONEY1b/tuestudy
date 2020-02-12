//2748
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll arr[92];
int main(void){
	arr[0]=0,arr[1]=1;
	for(int i=2;i<=90;i++){
		arr[i]=arr[i-1]+arr[i-2];
	}
	int n;
	scanf("%d",&n);
	printf("%lld",arr[n]);
	return 0;
}

