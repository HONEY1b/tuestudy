//2293
#include<bits/stdc++.h>
using namespace std;
int arr[110];
int d[1000010];
int main(void){
	freopen("2293.txt","r",stdin);
	int n,m; //동전 수, 만들려는 수 
	int total=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	
	d[0]=1;
	for(int i=0;i<=m;i++){
		for(int j=1;j<=n;j++){
			d[i+arr[j]]+=d[i];
		}
	}cout<<endl;
	
	cout<<d[m]<<endl;
	return 0;
}
