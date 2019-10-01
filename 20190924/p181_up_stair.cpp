//p181_up_stair
#include<stdio.h>
int n,ans;
void f(int cur){
	if(cur == n){
		ans++;
		return;
	}
	else if(cur>n){
		return;	
	}
	else{
		f(cur+1);
		f(cur+2);
	}
}
int main(void){
	scanf("%d",&n);
	f(0);
	printf("%d",ans);
	return 0;
}
