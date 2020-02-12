//4673
#include<bits/stdc++.h>
#define MAX 100
using namespace std;
bool arr[MAX];
int ff(int n){
	int ans=n;
	while(n){
		ans+=n%10;
		n/=10;
	}
	return ans;
}

void f(void){
	for(int i=1;i<MAX;i++){
		int a=ff(i);
		if(!arr[a]){
			arr[a]=true;
		}
	}
}


int main(void){
	f();
	for(int i=1;i<MAX;i++){
		if(!arr[i]){
			printf("%d\n",i);
		}
	
	}
	
	return 0;
}
