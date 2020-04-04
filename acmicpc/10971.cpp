//10971
#include<bits/stdc++.h>
using namespace std;
int n;
int mapp[11][11];
int check[11];



int f(int start){
	
}

int main(void){
	freopen("10971.txt","r",stdin);
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&mapp[i][j]);
		}
	}
	int ans=0x7fffffff;
	for(int i=0;i<n;i++){
		int cur=f(i);
		if(cur<ans){ans=cur;}	
	}
	
	return 0;
}
