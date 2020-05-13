//10989
#include<stdio.h>
using namespace std;
int arr[10010];

int main(void){
	freopen("10989.txt","r",stdin);	
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		arr[a]+=1;
	}
	for(int i=0;i<10010;i++){
		if(arr[i]==0)continue;
		int a=arr[i];
		for(int j=0;j<a;j++){
			printf("%d\n",i);
		}
	}
	
	return 0;
}
