//2108
#include<bits/stdc++.h>
using namespace std;
int arr[500010];
int arr2[10010];

int main(void){
	freopen("2108.txt","r",stdin);
	int n;
	scanf("%d",&n);
	
	memset(arr2, 0, sizeof(arr2));
	
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		arr2[arr[i]+4000]++;
	}
	sort(arr,arr+n);
	
	int total=0;
	for(int i=0;i<n;i++){
		total+=arr[i];	
	}
	int ans=round((double)total/n);

	int ans2=arr[n/2];
	
	int mini=-987654321,mini2=-987654321,ans3=-987654321;
	for(int i=0;i<10010;i++){
		if(mini<arr2[i]){
			mini=arr2[i];
		}
	}
	
	vector<int> v;
	for(int i=0;i<10010;i++){
		if(mini==arr2[i]){
			v.push_back(i-4000);
		}
	}
	sort(v.begin(),v.end());
	if(v.size()==1){
		ans3=v[0];	
	}else{
		ans3=v[1];
	}

	int ans4=abs(arr[n-1]-arr[0]);
	printf("%d\n%d\n%d\n%d\n",ans,ans2,ans3,ans4);
	
	return 0;
}
