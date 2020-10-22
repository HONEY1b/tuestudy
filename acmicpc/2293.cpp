//2293
#include<bits/stdc++.h>
using namespace std;
int arr[110];
long long d[1000010];
int main(void){
	freopen("2293.txt","r",stdin);
	int n,m; //동전 수, 만들려는 수 
	int total=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	
//	d[0]=1;
//	for(int i=0;i<n;i++){
//		for(int j=0;j<=m;j++){
//			if(d[j+arr[i]]<=m){
//				d[j+arr[i]]+=d[j];	
//			}
//		}
//	}
//	cout<<d[m];
	for(int i=0;i<=m;i++){
		d[i]=-1;	
	}
	d[0]=1;
	for(int i=0;i<=m;i++){
		for(int j=0;j<n;j++){
			if(d[i+arr[j]]<=m){
				if(d[i+arr[j]]==-1){
					d[i+arr[j]]=d[i];
				}else{
					d[i+arr[j]]+=d[i];
				}
			}
		}
	}
	cout<<d[m];
	return 0;
}
