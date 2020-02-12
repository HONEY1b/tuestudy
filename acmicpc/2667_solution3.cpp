//2667_solution3
#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;

struct Point{
	int x,y,cnt;
	//cnt:내가 포함한 애들의 개수, 단지내의 아파트 수 
};

int n;
vector< vector<int> > a;
vector< vector<Point> > parent;
//구조체로 된 2차원 배열 
priority_queue<int, vector<int>, greater<int> > pq;
//내림차순

//오른차순이라면
//priority_queue<int> pq;
//priority_queue<int, vector<int>, greater<int>> pq; 

Point find(int x, int y){
	Point temp=parent[x][y];
	if(temp.x==x && temp.y==y) return temp;
	else{
//		parent[x][y]=find(temp.x,temp.y);
//		return parent[x][y];
		return parent[x][y]=find(temp.x,temp.y);
	}
}
//return parent[x][y]=find(temp.x,temp.y); 이 코드 덕분에 부모를 한번에 찾음 

void group(int x1,int y1,int x2,int y2){
	int temp;
	Point X=find(x1,y1);
	Point Y=find(x2,y2);
	
	temp=parent[X.x][X.y].cnt+parent[Y.x][Y.y].cnt;
	
	parent[X.x][X.y]=parent[Y.x][Y.y];
	//둘중에 하나의 부모를 최상위꺼로 바꿔줌 (합체)
	
	
	parent[Y.x][Y.y].cnt=temp;
	//아파트 수 세야해서 추가됨
	
	//편향트리일때의 경우가 빠져있음
	//사이즈가 X>>>>Y 인 경우 x를 y에 붙이면 왼,오의 사이즈 차이가 많이남 
}

void printMap(void){
	for(int i=0;i<n;i++){
		for(int j=0;j<a.size();j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
int main(void){
	freopen("2667.txt","r",stdin);
	scanf("%d",&n);
	
	a.resize(n,vector<int>(n));
	//벡터의 크기를 n*n으로 정해준다! 
	parent.resize(n,vector<Point>(n));
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
			parent[i][j]=Point{i,j,1};
			
			if(a[i][j]==1){
				
				//열기준(아래쪽)으로 union 
				if(i>0 && a[i-1][j]==1)
					group(i-1,j,i,j);
				
				//왼쪽으로 union 
				if(j>0 && a[i][j-1]==1){
					Point temp=find(i,j);
					Point temp2 = find(i,j-1);
					//왼쪽과 union하는 경우 이미 같은 부모일 수 있어서
					//검사를 한 후에 union을 한다. 
					if(temp.x!=temp2.x || temp.y!=temp2.y)
						group(i,j-1,i,j);
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]){
				Point temp=find(i,j);
				if(temp.x==i && temp.y==j)
					pq.push(temp.cnt);
			}
		}
	}
	
	printf("%d\n",pq.size());
	while(pq.size()){
		printf("%d\n",pq.top());
		pq.pop();	
	}
	
	return 0;
}


