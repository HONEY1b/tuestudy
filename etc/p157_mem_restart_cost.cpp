//p157_mem_restart_cost
#include<stdio.h>
#define MAXV 9999999
int n,m;
int b[101];
int c[101];

int min(int a,int b){
	return a<b? a:b;
}

int f(int i, int r){
	if(i==0){
		if(r<=0) return 0;
		else return MAXV;
	}
	else if(r<0){
		return f(i-1,r);
	}
	else return min(f(i-1,r), f(i-1,r-b[i])+c[i]);	
}

int main(void){
	freopen("p157_mem_restart_cost.txt","r",stdin);
	
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++) scanf("%d",&b[i]);
	for(int i=1;i<=n;i++) scanf("%d",&c[i]);
	
	int cost = f(n,m);
	printf("%d",cost);
	return 0;
}
