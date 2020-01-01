//15916
#include<bits/stdc++.h>
using namespace std;
vector <long long> v;
int main(void){
	int n,k;
	scanf("%d",&n);
	v.resize(n+1);
	v[0]=0;
	for(int i=1;i<=n;i++){
		scanf("%d",&v[i]);
	}
	scanf("%d",&k);
	for(int i=1;i<=n;i++){
		if(v[i]==i*k){
			printf("T\n");
			return 0;
		}
	}
	printf("F\n");
	
	return 0;
}
