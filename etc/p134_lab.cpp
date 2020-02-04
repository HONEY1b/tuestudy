//p134_lab

#include<stdio.h>
//1번노드에서 n번 노드까지의 경로 
int n,m;
int mini=987654321;
int map[11][11];
int check[11];

void f(int node,int sum){
	if(node>=n){
		if(sum < mini){
			mini = sum;
		}
		return;
	}
	for(int i=1;i<=n;i++){
		if(check[i]==0 && map[node][i]>0){
			check[i]=1;
			f(i,sum+map[node][i]);
			check[i]=0;
		}
	}	
}

int main(void){
	freopen("p134_lab.txt","r",stdin);
	scanf("%d %d",&n, &m);
	
	int a, b, c;
	for(int i=1;i<=m;i++){
		scanf("%d %d %d",&a,&b,&c);
		map[a][b]=c; map[b][a]=c;
	}
	
	check[1]=1;
	
	f(1,0);
	
	printf("%d\n",mini);
	
	return 0;
	
}
