//3036
#include<stdio.h>
int n;
int arr[110];



int main(void){
	freopen("3036.txt","r",stdin);	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);	
	}
	
	int stan=arr[0];
	for(int i=1;i<n;i++){
		int div=gcd(stan,arr[i]);
		printf("%d/%d\n",stan/div,arr[i]/div);
	}
	
	return 0;
}

//int gcd(int a, int b){
//	if(a<b){
//		int tmp=a;
//		a=b;
//		b=tmp;	
//	}
//	while(b!=0){
//		int nn=a%b;
//		a=b;
//		b=nn;
//	}
//	return a;
//}
