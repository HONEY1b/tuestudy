//2805
#include<bits/stdc++.h>
using namespace std;
int n;
long long m;
long long arr[1000010];

int main(void){
	freopen("2805.txt","r",stdin);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	long long start=0;
	long long end=arr[n-1];
	long long mid,Max=0;
	
	while(start<=end){
		mid=(start+end)/2;
		
		//cout<<start<<" "<<mid<<" "<<end<<"\n\n";
		
		long long total=0;
		for(int i=0;i<n;i++){
			int tmp=arr[i]-mid;
			if(tmp<0)continue;
			total+=tmp;
		}
		
		//cout<<total<<endl;
		
		if(total>=m){
			Max=max(mid,Max);
			start=mid+1;
		}else if(total<m){
			end=mid-1;
		}
	}
	
	cout<<Max<<endl;
	return 0;
}
