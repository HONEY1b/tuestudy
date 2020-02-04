//2752
#include<stdio.h>
int arr[3];
int main(void){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);	
	
	if(a>b&&a>c){
		if(b>c)	printf("%d %d %d\n",c,b,a);
		else printf("%d %d %d\n",b,c,a);
	}
	else if(b>c&&b>a){
		if(a>c)	printf("%d %d %d\n",c,a,b);
		else printf("%d %d %d\n",a,c,b);
	}
	else if(c>a&&c>b){
		if(b>a)	printf("%d %d %d\n",a,b,c);
		else printf("%d %d %d\n",b,a,c);	
	}
	return 0;
}
