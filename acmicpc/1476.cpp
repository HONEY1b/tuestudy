//1476
#include<stdio.h>

int main(void){
	int e,s,m;
	scanf("%d %d %d",&e,&s,&m);
	
	int a=1,b=1,c=1;
	int cnt=1;
	while(true){
		if(a>15) a=1;
		if(b>28) b=1;
		if(c>19) c=1;
		if(a==e&&b==s&&c==m){break;}
		a++;b++;c++;
		cnt++;
	}
	
	printf("%d\n",cnt);
	
	return 0;
}
