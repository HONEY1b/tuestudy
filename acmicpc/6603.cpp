//6603
#include<iostream>
#include<algorithm>
using namespace std;
int n;
int arr[15];
int check[6];
int use[50];

void dfs(int level){
	if(level>=n){
		for(int i=0;i<6;i++){
			cout<<check[i]<<" ";
		}
		cout<<'\n';
		return;
	}
	for(int i=level;i<n;i++){
		if(use[arr[i]]==0){
			use[arr[i]]=1;
			check[level]=arr[i];
			dfs(level+1);
			use[arr[i]]=0;
		}
	}
}

int main(void){
	freopen("6603.txt","r",stdin);	
	while(true){
		cin>>n;
		if(n==0)break;
		for(int i=0;i<n;i++){
			cin>>arr[i];	
		}
		sort(arr,arr+n);
		dfs(0);
	}
	
	return 0;
}
