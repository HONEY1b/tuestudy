//9376
#include<bits/stdc++.h>
using namespace std;
char mapp[110][110];
int d0[110][110];
int d1[110][110];
int d2[110][110];
int h,w;

int main(void){
	freopen("9376.txt","r",stdin);
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&h,&w);
		for(int j=0;j<=w+1;j++){
			mapp[0][j]='.';
			mapp[h+1][j]='.';
		}
		for(int i=1;i<h+1;i++){
			mapp[i][0]='.';
			scanf("%s",&mapp[i][1]);
			mapp[i][w+1]='.';
		}
		
		for(int i=0;i<=h+1;i++){
			for(int j=0;j<=w+1;j++){
				printf("%c ",mapp[i][j]);	
			}
			printf("\n");
		}
	}
	
	
	return 0;
}
