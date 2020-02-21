//10816
#include<bits/stdc++.h>
using namespace std;
vector<int> v1;
vector<int> v2;
int arr[500000];
int f(int x){
	int start=0,end=v1.size()-1;
	int mid;
	while(start<=end){
		mid=(start+end)/2;
		if(v1[mid]==x){return 1;}
		else if(v1[mid]<x){
			start=mid+1;	
		}
		else if(v1[mid]>x){
			end=mid-1;	
		}
	}
	return 0;	
}
int main(void){
	freopen("10816.txt","r",stdin);
	int n,m;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int k;
		scanf("%d",&k);
		v1.push_back(k);	
	}
	sort(v1.begin(),v1.end());
	
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		int k;
		scanf("%d",&k);
		v2.push_back(k);	
	}
	for(int i=0;i<m;i++){
		int ans=f(v2[i]);
		if(ans==1){
			arr[i]++;
		}
	}
	for(int i=0;i<m;i++){
		printf("%d ",arr[i]);	
	}
	
	
	return 0;
}
