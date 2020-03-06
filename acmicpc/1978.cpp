//1929
#include<stdio.h>
int n,m;
bool arr[1010];
bool f(int num){
	for(int i=2;i*i<=num;i++){
		if(num%i==0){
			return true;
		}
	}
	return false;
}
int main(void){
	freopen("1978.txt","r",stdin);
	scanf("%d",&n);
	arr[1]=true;
	for(int i=4;i<=1000;i++){
		arr[i]=f(i);
	}
	int cnt=0;
	for(int i=1;i<=n;i++){
		int a;
		scanf("%d",&a);
		if(arr[a]==false){
			cnt++;	
		}
	}
	printf("%d\n",cnt);
	
	return 0;
}
