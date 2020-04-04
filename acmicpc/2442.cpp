//2442
#include<stdio.h>
using namespace std;

int main(void){
	int n;
	scanf("%d",&n);
	int t=n-1;
	for(int i=1;i<=n;i++){
		for(int j=t;j>0;j--){printf(" ");}
		for(int k=1;k<=i*2-1;k++){
			printf("*");
		}
		printf("\n");
		t--;
	}
	return 0;
}
