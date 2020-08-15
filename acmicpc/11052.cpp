//11052
#include<bits/stdc++.h>
using namespace std;
int arr[1010];
int d[1010];

int main(void){
	freopen("11052.txt","r",stdin);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	
	d[1]=arr[1];
	for(int i=1;i<=n;i++){
		d[i]=arr[i];
		for(int j=1;j<=i;j++){
			if(d[i-j]>0){
				d[i]=max(d[i-j]+arr[j],d[i]);	
			}
		}
	}
	cout<<d[n];
	
	return 0;	
}
