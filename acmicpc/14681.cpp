//14681
#include<stdio.h>
#include<iostream>
using namespace std;

int main(void){
	int x,y;
	scanf("%d %d",&x,&y);	
	
	int ans;
	if(x>0){
		if(y>0){
			ans=1;
		}else{
			ans=4;
		}
	}else{
		if(y>0){
			ans=2;
		}else{
			ans=3;
		}
	}
	printf("%d\n",ans);
	
	return 0;
}
