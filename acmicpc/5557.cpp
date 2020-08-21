//5557
#include<bits/stdc++.h>
using namespace std;
int n;
int arr[110];
int ans=0;
void f(int level,int sum){
	if(sum>20 || sum<0) return;
	cout<<level<<" "<<sum<<endl;
	if(level==n-1){
		if(sum==arr[n-1]){
			ans++;
		}
		return ;
	}
	
	f(level+1,sum+arr[level]);
	f(level+1,sum-arr[level]);
}
int main(void){
	ios_base::sync_with_stdio();cin.tie(0);cout.tie(0);
	freopen("5557.txt","r",stdin);	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];	
	}
	
	f(0,0);
	
	cout<<ans<<endl;
	return 0;
}
