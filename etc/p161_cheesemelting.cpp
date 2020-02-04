//p161_cheesemelting
#include<stdio.h>
int ch[101][101];

int main(void){
	freopen("p161_cheesemelting.txt","r",stdin);
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d",&ch[i][j]);
		}
	}
	return 0;
	
}
