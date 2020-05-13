//2751
#include<vector>
#include<algorithm>
#include<stdio.h>
using namespace std;

int main(void){
	freopen("2751.txt","r",stdin);
	vector<int> v;
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a;
		scanf("%d",&a);	
		v.push_back(a);
	}
	
	sort(v.begin(),v.end());
	
	for(int i=0;i<n;i++){
		printf("%d\n",v[i]);
	}
	
	return 0;
}
