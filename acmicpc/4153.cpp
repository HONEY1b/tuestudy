//4153
#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
	freopen("4153.txt","r",stdin);
	while(true){
		int arr[3];
		scanf("%d %d %d",&arr[0],&arr[1],&arr[2]);
		if(arr[0]==0) break;
		sort(arr,arr+3);	
		long long aa=arr[0]*arr[0],bb=arr[1]*arr[1],cc=arr[2]*arr[2];
		if(aa+bb == cc){
			printf("right\n");
		}else{
			printf("wrong\n");	
		}
	}
	
	return 0;
}
