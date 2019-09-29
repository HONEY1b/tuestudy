//2548_vector

#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(void){
	int n;
	freopen("2548.txt","r",stdin);
	scanf("%d",&n);
	
	vector<int> v(n);
	
	for(int i=0;i<n;i++){
		scanf("%d",&v[i]);
	}
	
	sort(v.begin(),v.end());
	
	printf("%d",v[(n+1)/2-1]);
	
	return 0;
}
