//p178_maximum_sum
#include<stdio.h>
int max=-98765432;
int n,sum;
int arr[100];

//void f(int st,int end){
//	if(){
//		sum=0;
//		for(int j=end;j<n;j++){
//			sum+=arr[j];
//		}
//		if(sum>max){
//			max = sum;
//			return;
//		}
//	}
//	for(int i=0;i<n;i++){
//		f(i,end);
//	}
//}

int main(void){
	freopen("p178_maximum_sum.txt","r",stdin);	
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&arr[i]);
//	f(0,0);
	
	
	int sum;
	
	for(int i=0;i<n;i++){
		sum=0;
		for(int j=i;j<n;j++){
			sum+=arr[j];
		}
		if(max<sum){
			max=sum;	
		}
	}
	
	printf("%d",max);
	
	return 0;
}
