//14501
#include<stdio.h>
using namespace std;
int n;
int t[20],p[20],d[20];
int c[20];

int f(int start,int end){
	
	
	for(int i=1;i<=n;i++){
	
	}
	
	return d[end];
}

int main(void){
	freopen("14501.txt","r",stdin);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d %d",t[i],p[i]);	
	}
	
	printf("%d\n",f(0,n));
	
	return 0;
}
