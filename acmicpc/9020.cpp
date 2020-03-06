//9020
#include<stdio.h>
#include<iostream>
using namespace std;

bool arr[10001];
bool f(int num){
	for(int i=2;i*i<=num;i++){
		if(num%i==0){
			return true;
		}
	}
	return false;
}
int main(void){
	freopen("9020.txt","r",stdin);
	arr[1]=true;
	for(int i=4;i<=10000;i++){
		arr[i]=f(i);
	}
	
	int t;
	scanf("%d",&t);
	while(t--){
		int num;
		scanf("%d",&num);
		int a,b,d=987654321;
		for(int i=2;i<=num/2;i++){
			if(arr[i]==true)continue;
			int j=abs(num-i);
			if(arr[j]==false && abs(j-i)<d){
				a=i,b=j,d=abs(b-a);
			}
		}
		printf("%d %d\n",a,b);
	}
	
	return 0;
}
