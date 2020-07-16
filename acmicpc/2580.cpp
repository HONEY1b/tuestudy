//2580
#include<stdio.h>
using namespace std;
int a[12][12];
int c[10];

void f(int x,int y){
	
	for(int k=1;k<10;k++){
		for(int kk=1;kk<10;kk++){
			if(a[kk][y]==0)continue;
			c[a[kk][y]]=1;
			c[a[x][kk]]=1;
		}
		a[i][j]=k;	
	}
}

int main(void){
	for(int i=1;i<10;i++){
		for(int j=1;j<10;j++){
			scanf("%d",&a[i][j]);	
		}
	}
	for(int i=1;i<10;i++){
		for(int j=1;j<10;j++){
			if(a[i][j]==0){
				f(i,j);
			}
		}
	}
	return 0;
}
