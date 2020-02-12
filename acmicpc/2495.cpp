//2495
#include<bits/stdc++.h>
using namespace std;
int arr[12];
int check[12];
int maxi;

int f(void){
	for(int i=0;i<9;i++){
		check[i]=1;
		if(arr[i]==arr[i+1]){
			check[i+1]=check[i]+1;	
		}
	}
	for(int i=0;i<10;i++){
		if(check[i]>maxi){
			maxi=check[i];
		}
	}
	return maxi;
}

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
	
	freopen("2495.txt","r",stdin);
	
	for(int i=0;i<3;i++){
		for(int i=0;i<10;i++){
			scanf("%1d",arr[i]);
		}
		cout<<f()<<'\n';
		memset(arr,0,sizeof(arr));
	}
	return 0;
}
