//5624
#include<stdio.h>
int n,arr[5010];
int check[5010];

void f(int ran,int acc,int sum){
	if(sum>arr[ran]) return;
	if(acc>3){
		if(arr[ran]==sum){
			check[ran]=1;
			return;
		}
	}
	for(int i=0;i<=ran;i++){
		f(ran,acc+1,sum+arr[i]);
	}
}

int main(void){
	freopen("5624.txt","r",stdin);
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);	
	}
	int ans=0;
	for(int i=0;i<n;i++){
		f(i,1,0);
		if(check[i]) ans++;
	}
	printf("%d\n",ans);
	
	return 0;
}
