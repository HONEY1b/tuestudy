//10163
#include<stdio.h>
int arr[110][110];
int arr2[110];
int main(void){
	freopen("10163.txt","r",stdin);
	int x1,y1,h,w;
	int n;
	scanf("%d",&n);
	for(int k=1;k<=n;k++){
		scanf("%d %d %d %d",&x1,&y1,&w,&h);	
		int x2=x1+w,y2=y1+h;
		for(int i=x1;i<x2;i++){
			for(int j=y1;j<y2;j++){
				arr[i][j]=k;
			}
		}
	
	}
	for(int i=0;i<110;i++){
		for(int j=0;j<110;j++){
			arr2[arr[i][j]]++;
		}
	}
	for(int i=1;i<=n;i++){
		printf("%d\n",arr2[i]);
	}
	
	return 0;
}
