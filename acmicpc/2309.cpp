//2309
#include<bits/stdc++.h>
using namespace std;
int arr[9];
int check[9];
int total;

int main(void){
	freopen("2309.txt","r",stdin);
	for(int i=0;i<9;i++){
		scanf("%d",&arr[i]);
		total+=arr[i];	
	}
	total-=100;
	int p1,p2;
	sort(arr,arr+9);
	int find=0;
	for(int i=0;i<9;i++){
		for(int j=i+1;j<9;j++){
			if(arr[i]+arr[j]==total){
				p1=arr[i],p2=arr[j];
			}
		}
	}
	printf("%d\n%d\n",p1,p2);
	return 0;
}
/*
//2309
#include<bits/stdc++.h>
using namespace std;
int arr[9],check[9],total;

int main(void){
	freopen("2309.txt","r",stdin);
	for(int i=0;i<9;i++){
		scanf("%d",&arr[i]);
		total+=arr[i];	
	}
	sort(arr,arr+9);
	for(int i=0;i<8;i++){
		for(int j=i+1;j<9;j++){
			if(total-arr[i]-arr[j] == 100){
				check[i]=1,check[j]=1;	
			}
		}
	}
	
	for(int i=0;i<9;i++){
		if(!check[i]){
			printf("%d\n",arr[i]);
		}
	}
	return 0;
}
*/
