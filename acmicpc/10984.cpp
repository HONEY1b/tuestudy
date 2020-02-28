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
	
	while(t--){
		scanf("%d",&n);
		total_c=0,total_g=0;
		for(int j=0;j<n;j++){
			int a;
			double b;
			scanf("%d %lf",&a,&b);
			total_c+=a;
			total_g+=b;
		}
		printf("%d %.1f\n",total_c,total_g/n);
		
	}
	return 0;
}
