//6359
#include<bits/stdc++.h>
using namespace std;
int arr[110];//0:´ÝÈû,1:¿­¸² 

int main(void){
	freopen("6359.txt","r",stdin);
	int t;
	scanf("%d",&t);
	while(t--){
		memset(arr,0,sizeof(arr));
		int n;
		scanf("%d",&n);
		int a=0;
		for(int i=1;i<=n;i++){
			a=i;
			for(int j=1;a<=n;j++){
				a=i*j;
				//printf("%d ",a);
				if(arr[a]==1){
					arr[a]=0;
				}else if(arr[a]==0){
					arr[a]=1;
				}
			}
		}
		int cnt=0;
		for(int i=1;i<=n;i++){
			if(arr[i]==1){cnt++;}	
		}
		printf("%d\n",cnt);
	}
	return 0;
}
