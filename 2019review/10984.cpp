//10984
#include<stdio.h>
#include<iostream>
using namespace std;
int t,n,total_c;
float avg_g,total_g;
int g[14];

int main(void){
	
	freopen("10984.txt","r",stdin);
	
	scanf("%d",&t);
	
	for(int i=0;i<t;i++){
		scanf("%d",&n);
		total_c=0,total_g=0;
		for(int j=0;j<n;j++){
			int a;
			float b;
			scanf("%d %f",&a,&b);
			total_c+=a;
			total_g+=b;
			//printf("%.1f %.1f \n",b,total_g);
		}	
		avg_g=total_g/n;
		printf("%d %.1f\n",total_c,total_g/n);
		
	}
	return 0;
}
