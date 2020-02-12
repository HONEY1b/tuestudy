//1920
#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int arr[100010];
int n,m;

int main(void){
	freopen("1920.txt","r",stdin);	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		v.push_back(a);	
	}
	sort(v.begin(),v.end());
	scanf("%d",&m);
	while(m--){
		int a;
		scanf("%d",&a);
		int st=0,end=n-1,find=0,mid;
		while(st<=end){
			mid=(end+st)/2;
			if(v[mid]==a){
				find=1;	
				break;
			}else if(v[mid]<a){
				st=mid+1;
			}else{
				end=mid-1;
			}
		}
		printf("%d\n",find);
	}
	
	return 0;
}
