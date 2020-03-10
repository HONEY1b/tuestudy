//2036
#include<bits/stdc++.h>
 
using namespace std;
int n;
vector<int> v;
int main(void){
	freopen("2036.txt","r",stdin);
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		v.push_back(a);
	}
	
	long long sum=0;
	if(n%2 == 1){
		v.push_back(1); n++;
		sort(v.begin(),v.end(),greater<int>());
		sum=0;
		for(int i=0;i<n-1;i=i+2){
			int j=i+1;
			sum+=v[i]*v[j];
			//printf("%d %d %d\n",i,j,sum);
		}
	}else{
		sort(v.begin(),v.end(),greater<int>());
		sum=0;
		for(int i=0;i<n-1;i=i+2){
			int j=i+1;
			if(v[i]*v[j]<0){
				sum=sum+v[i]+v[j];
			}else{
				sum+=(long long)v[i]*v[j];	
			}
			printf("%d %d %d\n",v[i],v[j],sum);
		}
	}
//	for(int i=0;i<n;i++){printf("%d\n",v[i]);}
	printf("%lld\n",sum);
	
	return 0;
}
