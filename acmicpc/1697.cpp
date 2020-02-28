//1697
#include<bits/stdc++.h>
using namespace std;
int mini=987654321;

void DFS(int x,int y,int cnt){
	if(x==y) {
		if(cnt<mini) mini=cnt;
		return;	
	}
	if(cnt>mini || x>100000 || x<0) return;
	
	DFS(x+1,y,cnt+1);
	DFS(x-1,y,cnt+1);
	DFS(x*2,y,cnt+1);
	
}
int BFS(void){

}

int main(void){
	
}
