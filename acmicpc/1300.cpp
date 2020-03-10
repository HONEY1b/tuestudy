//1300
#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n,k;
	scanf("%d %d",&n,&k);
	//vector<long long> v;
	int t=0;
	for(int i=1;i<=n;i++){
		long long a;
		for(int j=i;j<=n;j++){
			if(i==j){
				t++;
				if(t==k) printf("%lld",(long long)i*j);
			}
			else{
				t++;
				if(t==k) printf("%lld",(long long)i*j);
				t++;
				if(t==k) printf("%lld",(long long)i*j);
			}
		}
	}
	//sort(v.begin(),v.end());
	//printf("%lld",v[k-1]);
	return 0;
}
