//2292
#include<stdio.h>

int main(void){
	int n,ans=0;
	scanf("%d",&n);
	n;
	int div=1000000000/6+1;
	int kk=1;
	
	if(n==1){ans=0;}
	else{	for(int i=1;i<div;i++){
			if(n==1){ans=0;break;}
			int j=6*i;
			int next=kk+j;
			//printf("%d\t%d\n",i,kk);
			if(kk<n&&n<=next){ans=i; break;}
			kk=next;
		}
	}
	printf("%d\n",ans+1);
	
	return 0;
}
