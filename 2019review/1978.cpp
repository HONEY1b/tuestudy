//1978
#include<stdio.h>
#include<vector>
#include<iostream>
using namespace std;

int d[1010],arr[110];
vector<int> prime;
int n,cnt,notprime;
int main(void){
	freopen("1978.txt","r",stdin);
	
	//소수=0 소수x=1
	d[1]=2;
	prime.push_back(2);
	prime.push_back(3);
	for(int i=4;i<=1000;i++){
		for(int j=0;j<prime.size();j++){
			if(notprime==2)break;
			if(i%prime[j]==0) {
				d[i]=1;
				notprime=2;
			}
		}
		if(!notprime) {
			prime.push_back(i);
		}
		else if(notprime==2){
			notprime=0;
		}
	}
	
//	for(int i=1;i<=1000;i++){
//		if(d[i]==0) printf("%d\n",i);
//	}
	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(!d[i]) cnt++;
	}	
	printf("%d\n",cnt);
	return 0;
}
