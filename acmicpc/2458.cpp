//2458
#include<bits/stdc++.h>
using namespace std;
vector<int> v[510];
int n,m; //�л���, ���� Ű �� 

int main(void){
	freopen("2458.txt","r",stdin);
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		int a,b; //a>b
		scanf("%d %d",&a,&b);
		v[a].push_back(b);	
	}
	
//	for(int i=1;i<n;i++){
//		printf("%d���� ���� �л��� : ",i);
//		for(int j=0;j<v[i].size();j++){
//			printf("%d ",v[i][j]);
//		}
//		printf("\n");
//	}

	//bfs();
	queue<int> q;
	
	
	return 0;
}
