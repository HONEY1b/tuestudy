//11055
#include<stdio.h>
int n,sum;
int arr[1010];
int d[1010];

int main(void){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);	
	}
	
	for(int i=0;i<n;i++){
		d[i]=arr[i];
		for(int j=0;j<i;j++){
			if(arr[j]<arr[i]&&d[i]<d[j]+arr[i]){
				d[i]=d[j]+arr[i];
			}
		}
		if(sum<d[i]) sum=d[i];
	}
	printf("%d\n",sum);
	
	return 0;	
}
