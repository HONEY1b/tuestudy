//1654
#include<bits/stdc++.h>
using namespace std;
long long arr[10010];
int n,m;
long long Max=0;

int main(void){
	freopen("1654.txt","r",stdin);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	
	long long start=0,end=arr[n-1];
	long long mid;
	while(start<=end){
		mid=(start+end)/2;
		if(mid==0){Max=1; break;}
		
		//cout<<start<<" "<<mid<<" "<<end<<"\n\n";
		
		int total=0;
		for(int i=0;i<n;i++){
			total+=(arr[i]/mid);
		}
		
		if(total>=m){
			Max=max(Max,mid);
			start=mid+1;
		}else if(total<m){
			end=mid-1;
		}
	}
	
	cout<<Max;
	
	return 0;
}
