//2309
#include<bits/stdc++.h>
using namespace std;
int arr[9];
int check[9];

void f(int level,int sum,int cnt){
	if(level>9) return;
	if(cnt>7) return;
	if(sum>100) return;
	if(cnt==7 && sum==100){
		for(int i=0;i<9;i++){
			if(check[i]){
				printf("%d\n",arr[i]);
			}
		}
		return;
	}
	
	if(!check[level]){
		check[level]=1;
		f(level+1,sum+arr[level],cnt+1);
		check[level]=0;
		f(level+1,sum,cnt);
	}
}

int main(void){
	freopen("2309.txt","r",stdin);
	for(int i=0;i<9;i++){
		scanf("%d",&arr[i]);	
	}
	sort(arr,arr+9);
//	for(int i=0;i<9;i++){
//		printf("%d\n",arr[i]);	
//	}
	f(0,0,0);
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
