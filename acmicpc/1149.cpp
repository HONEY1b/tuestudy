//1149
#include<stdio.h>
int n;
int arr[1010][3];


int main(void){
	scanf("%d",&n);	
	for(int i=0;i<n;i++){
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);//R,G,B로 칠하는 비용
		arr[i][0]=a;
		arr[i][1]=b;
		arr[i][2]=c;
	}
	
	f();
	return 0;
}
