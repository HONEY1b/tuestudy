//1915
#include<bits/stdc++.h>
using namespace std;
int arr[1010][1010];
int n,m,maxSize=0;

void printArr(){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",arr[i][j]);
		}printf("\n");
	}printf("\n\n\n");	
}

bool f(int x,int y,int size){
	for(int i=x;i<x+size;i++){
		for(int j=y;j<y+size;j++){
			if(arr[i][j]==0){
				return false;	
			}
		}
	}
	return true;
}

int main(void){
	freopen("1915.txt","r",stdin);
	scanf("%d %d",&n,&m);
	maxSize=n>m ? m : n;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%1d",&arr[i][j]);
		}
	}
	int ans=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[i][j]==0){
				continue;
			}
			if(arr[i+1][j]==0 && arr[i][j+1]==0 && arr[i+1][j+1]==0) continue;
			for(int k=maxSize;k>0;k--){
				if(i+k>=n || j+k>=m)continue;
				if(f(i,j,k)){
					ans=max(k*k,ans);	
				}
			}
		}
	}
	printf("%d\n",ans);
	
	return 0;
}
