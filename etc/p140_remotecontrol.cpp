//p140_remotecontrol
#include<stdio.h>
int a,b;
int arr[6]={-1,1,-5,5,-10,10};
int cnt=40;

void f(int tem,int cl){
	if(cl > cnt) return;
	if(tem==b) {
		cnt=cl;
		return;
	}
	
	for(int i=0;i<6;i++){
		f(tem+arr[i],cl+1);
	}
}

int main(void){
	scanf("%d %d",&a,&b);
	f(a,0);	
	printf("%d",cnt);
	return 0;
}
