//2495
#include<bits/stdc++.h>
using namespace std;
int a;
int arr[12];
int check[12];
int maxi;
void ff(void){
	for(int i=7;i>=0;i--){
		arr[i]=a%10;
		a/=10;	
	}
}
int f(void){
	maxi=-1;
	for(int i=0;i<8;i++){printf("%d ",arr[i]);}printf("\n");
		check[0]=1;
	for(int i=0;i<8;i++){
		check[i]=1;
		if(i!=0 && arr[i]==arr[i-1]){
			check[i]=check[i-1]+1;
		}
	}
	for(int i=0;i<8;i++){printf("%d ",check[i]);}printf("\n");
	for(int i=0;i<8;i++){
		if(check[i]>maxi){
			maxi=check[i];
		}
	}
	return maxi;
}

int main(void){
	freopen("2495.txt","r",stdin);
	for(int i=0;i<3;i++){
		scanf("%d",&a);
		ff();
		printf("%d\n",f());
	}
	return 0;
}
