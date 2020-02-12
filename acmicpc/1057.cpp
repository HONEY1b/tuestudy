//1057
#include<stdio.h>
int a,b,c,ans=-1;
int arr[100010];
void f(int round,int level){
	b=(b+1)/2,c=(c+1)/2;
	if(b==c){
		ans=level;
		return;	
	}
	for(int i=1;i<=round;i+=2){
		arr[(i+1)/2]=(i+1)/2;
	}
	arr[b]=b,arr[c]=c;
	f((round+1)/2,level+1);
}

int main(void){
	scanf("%d %d %d",&a,&b,&c);
	for(int i=1;i<=a;i++){
		arr[i]=i;
	}
	f(a,1);
	printf("%d\n",ans);
	return 0;
}
