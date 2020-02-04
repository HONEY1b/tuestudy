//10164
#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int d[20][20];
/*
void printD(void){
	for(int i=0;i<=a;i++){
		for(int j=0;j<=b;j++){
			printf("%d ",d[i][j]);	
		}
		printf("\n");
	}
	printf("\n");
}
*/

int main(void){
	scanf("%d %d %d",&a,&b,&c);
	
	
	//cÀÇ x,yÁÂÇ¥
	int x=1,y=1;
	if(c!=0){
		x=(c+b-1)/b;
		y=(c%b!=0)? c%b:b;
	}
	 
	d[1][1]=1;
	for(int i=1;i<=x;i++){
		for(int j=1;j<=y;j++){
			d[i][j]+=d[i][j-1]+d[i-1][j];
		}
	}
	int tmp=d[x][y];
	
	d[x][y]=1;
	
	for(int i=x;i<=a;i++){
		for(int j=y;j<=b;j++){
			if(i==x&&j==y) {continue;}
			d[i][j]+=d[i][j-1]+d[i-1][j];
		}
	}
	
	printf("%d\n",tmp*d[a][b]);
	return 0;
}
