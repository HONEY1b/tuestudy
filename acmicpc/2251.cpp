//2251
#include<stdio.h>
int a,b,c;
int v[210];
bool check[210][210];

void DFS(int x,int y,int z){
	if(check[x][y]==true) return;
	if(x==0){v[z]=1;}
	check[x][y]=true;
	
	//a->b
	if(x+y>b){
		DFS(x+y-b,b,z);
	}
	else{
		DFS(0,x+y,z);
	}

	//a->c
	if(x+z>c){
		DFS(x+z-c,y,c);
	}
	else{
		DFS(0,y,x+z);
	}	
	
	//b->c
	if(y+z>c){
		DFS(x,y+z-c,c);
	}
	else{
		DFS(x,0,y+z);
	}	
	
	//b->a
	if(x+y>a){
		DFS(a,x+y-a,z);
	}
	else{
		DFS(x+y,0,z);
	}	
	
	//c->a
	if(x+z>a){
		DFS(a,y,x+z-a);
	}
	else{
		DFS(x+z,y,0);
	}	
	
	//c->b
	if(y+z>b){
		DFS(x,b,y+z-b);
	}
	else{
		DFS(x,y+z,0);
	}	
}

int main(void){
	scanf("%d %d %d",&a,&b,&c);	
	
	DFS(0,0,c);
	
	for(int i=0;i<210;i++){
		if(v[i]==1)
			printf("%d ",i);
	}
	
	return 0;
}
