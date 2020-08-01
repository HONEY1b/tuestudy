//11866
#include<bits/stdc++.h>
using namespace std;
int n,m;//1~n까지의 숫자중 m번째꺼만 제외! 
queue<int> q;
int main(void){
	
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		q.push(i);
	}
	printf("<");
	while(!q.empty()){
		for(int i=0;i<m-1;i++){
			int n=q.front();
			q.pop();
			q.push(n);	
		}
		printf("%d",q.front());
		q.pop();
		if(!q.empty()){
			printf(", ");	
		}
	}
	printf(">");
	
	
	return 0;
}
