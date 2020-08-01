//2458
#include<bits/stdc++.h>
using namespace std;
vector<int> v[510];
int n,m; //학생수, 비교한 키 수 

int main(void){
	freopen("2458.txt","r",stdin);
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		int a,b; //a>b
		scanf("%d %d",&a,&b);
		v[a].push_back(b);	
	}
	
//	for(int i=1;i<n;i++){
//		printf("%d보다 작은 학생들 : ",i);
//		for(int j=0;j<v[i].size();j++){
//			printf("%d ",v[i][j]);
//		}
//		printf("\n");
//	}

	//bfs();
	queue<int> q;
	
	
	return 0;
}
