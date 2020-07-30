//2981
#include<bits/stdc++.h>
using namespace std;
int n;
int arr[110];
int main(void){
	freopen("2981.txt","r",stdin);
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);	
	}
	vector<int> v;
	sort(arr,arr+n);
	//arr[0]보다 작은 수로 나누면서 나머지가 같은것을 찾는다. 
	for(int i=2;i<=arr[0];i++){
		int div=arr[0]%i;
		bool res=false;
		for(int j=0;j<n;j++){
			if(div==arr[j]%i){
				res=true;
			}else{
				res=false;
				break;
			}
		}
		if(res){
			v.push_back(i);	
		}
	}
	
	for(int i=0;i<v.size();i++){
		printf("%d ",v[i]);	
	}
		
	return 0;
}
