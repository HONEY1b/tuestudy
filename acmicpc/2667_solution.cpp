//2667_solution
#include<stdio.h>
#include<algorithm>
using namespace std;

int a[30][30],b[900];
int c,n;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};

void dfs(int x,int y,int color){
	a[x][y]=color;
	for(int k=0;k<4;k++){
		int nx=x+dx[k],ny=y+dy[k];
		if(nx>=0 && ny>=0 && nx<n && ny<n && a[nx][ny]==1){
			dfs(nx,ny,color);	
		}
	}
}

int main(void){
	freopen("2667.txt","r",stdin);
	scanf("%d",&n);
	//printf("%d\n",n);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%1d",&a[i][j]);
		}
	}
//	for(int i=0;i<n;i++){for(int j=0;j<n;j++){printf("%d ",a[i][j]);}printf("\n");}
	
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]==1){
				dfs(i,j,cnt+2);
				cnt++;
				//cnt+2->2���� ä���
				//1�� �͸� �δ������̶� �����Ұ��̶�!
				//�̷��� ���ϸ� check�迭,������ ���� �� �����Ѵ�. 
			}
		}
	}
	printf("%d\n",cnt);
	
	int no;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			no=a[i][j];
			if(no>0){
				b[no-2]++;	
			}
		}
	}
	sort(b,b+cnt);
	for(int i=0;i<cnt;i++){
		printf("%d\n",b[i]);	
	}
	
	return 0;
}
