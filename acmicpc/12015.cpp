//12015
#include<bits/stdc++.h>
using namespace std;

int main(void){
	freopen("12015.txt","r",stdin);
	int n;
	vector<int> arr,d;
	cin>>n;
	d.resize(n);
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		arr.push_back(a);
	}
	
	for(int i=0;i<n;i++){
		d[i]=1;
		for(int j=0;j<i;j++){
			//cout<<d[i]<<" "<<d[j]<<endl;
			if(d[i]<d[j]+1 && arr[i]>=arr[j]){
				d[i]=d[j]+1;	
			}
		}
	}
	int ans=-1;
	for(int i=0;i<n;i++){
		ans=max(ans,d[i]);		
	}
	
	cout<<ans<<endl;
	
	return 0;
}
