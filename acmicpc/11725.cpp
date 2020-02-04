//11725
#include<bits/stdc++.h>
using namespace std;

int main(void){
	freopen("11725.txt","r",stdin);
	scanf("%d",&n);
	for(int i=0;i<n-1;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	return 0;
}
