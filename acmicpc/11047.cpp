//11047
#include<stdio.h>
#include<iostream>
using namespace std;
int arr[12],n,k;
int ans,Mini=987654321;

void f(int num,int a){
	//cout<<num<<'\t'<<a<<'\n';
	if(num>Mini) return;
	if(!a) {
		if(num<Mini){
			Mini=num;
			return;
		}
	}
	for(int i=n-1;i>0;i--){
		//printf("%d\n",i);
		if(a/arr[i]!=0){
			f(num+a/arr[i],a%arr[i]);	
		}
	}
}


int main(void){
	//ios_base::sync_with_stdio(0);
	//cin.tie(0);
	freopen("11047.txt","r",stdin);
	
	//cin >>n>>k;
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++) scanf("%d",&&arr[i]);
	
	f(0,k);
	
	printf("%d\n",Mini);
	//cout<<Mini<<'\n';
	
	return 0;
}
