//1904
//00�� �ѽ� -> 00�� �����̸� ���̰� +2
//1 -> ���� +1 
#include<stdio.h>
int n;//���� <1000000
int div=15746;//������ ���
int ans=0; 
//bool arr[100010];
int arr[1000100];
 
void f(int level){
	if(level>=n){
		ans++;
		ans%=div;
		return;
	}
	
	arr[level]=1;
	f(level+1);
	if(level+1<n){
		arr[level]=0;arr[level+1]=0;
		f(level+2);
	}
}

int main(void){
	scanf("%d",&n);	
	
	//f(0);
	
	arr[0]=0,arr[1]=1,arr[2]=2;
	for(int i=3;i<=n;i++){
		arr[i]=(arr[i-1]+arr[i-2])%div;	
	}
	
	//printf("%d\n",ans);
	printf("%d\n",arr[n]);
	return 0;
}
