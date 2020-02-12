//2667_solution3
#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;

struct Point{
	int x,y,cnt;
	//cnt:���� ������ �ֵ��� ����, �������� ����Ʈ �� 
};

int n;
vector< vector<int> > a;
vector< vector<Point> > parent;
//����ü�� �� 2���� �迭 
priority_queue<int, vector<int>, greater<int> > pq;
//��������

//���������̶��
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
//return parent[x][y]=find(temp.x,temp.y); �� �ڵ� ���п� �θ� �ѹ��� ã�� 

void group(int x1,int y1,int x2,int y2){
	int temp;
	Point X=find(x1,y1);
	Point Y=find(x2,y2);
	
	temp=parent[X.x][X.y].cnt+parent[Y.x][Y.y].cnt;
	
	parent[X.x][X.y]=parent[Y.x][Y.y];
	//���߿� �ϳ��� �θ� �ֻ������� �ٲ��� (��ü)
	
	
	parent[Y.x][Y.y].cnt=temp;
	//����Ʈ �� �����ؼ� �߰���
	
	//����Ʈ���϶��� ��찡 ��������
	//����� X>>>>Y �� ��� x�� y�� ���̸� ��,���� ������ ���̰� ���̳� 
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
	//������ ũ�⸦ n*n���� �����ش�! 
	parent.resize(n,vector<Point>(n));
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
			parent[i][j]=Point{i,j,1};
			
			if(a[i][j]==1){
				
				//������(�Ʒ���)���� union 
				if(i>0 && a[i-1][j]==1)
					group(i-1,j,i,j);
				
				//�������� union 
				if(j>0 && a[i][j-1]==1){
					Point temp=find(i,j);
					Point temp2 = find(i,j-1);
					//���ʰ� union�ϴ� ��� �̹� ���� �θ��� �� �־
					//�˻縦 �� �Ŀ� union�� �Ѵ�. 
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


