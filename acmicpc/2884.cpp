//2884
#include<stdio.h>

int main(void){
	int h,m,hm=60,dec=45;
	scanf("%d %d",&h,&m);
	if(m<dec){
		h--;
		m=m+hm-dec;
		if(h<0){
			h=23;
		}
	}else{
		m-=dec;	
	}
	printf("%d %d\n",h,m);
	
	return 0;	
}
