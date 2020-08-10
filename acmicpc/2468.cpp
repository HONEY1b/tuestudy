//2468
#include<iostream>
#include<string.h>
using namespace std;
int n;
int arr[110][110];
int check[110][110];
int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
int minh=999,maxh=0;

void printArr(int map2[110][110]){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<map2[i][j]<<" ";
		}cout<<endl;
	}cout<<"\n\n\n";
}

//����� ������ �� ���ϱ� 
void dfs(int x,int y,int h){
	check[x][y]=1;
	
	for(int i=0;i<4;i++){
		int nx=x+dx[i],ny=y+dy[i];
		if(0<=nx&&nx<n && 0<=ny&&ny<n && check[nx][ny]==0 && arr[nx][ny]>h){
			check[nx][ny]=1;
			dfs(nx,ny,h);
		}
	}
	
	return;
}


int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
	
	freopen("2468.txt","r",stdin);
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
			minh=min(minh,arr[i][j]);
			maxh=max(maxh,arr[i][j]);
		}
	}
	
	//�� ���̰� ��~�� ���� ������ �� ���ϱ� 
	int ans=0;
	for(int i=0;i<=maxh;i++){
		//�� �� ���̿����� ������ �� ���ϱ�
		//�ȱ����� ������ �����ϸ� �����Ǽ�+1 -> ���� ���ϱ�
		int safe=0;
		memset(check,0,sizeof(check));
		for(int k=0;k<n;k++){
			for(int m=0;m<n;m++){
				if(check[k][m]==0 && arr[k][m]>i){
					check[k][m]=1;
					safe++;	
					dfs(k,m,i);
				}
			}
		}
		ans=max(ans,safe);
		//printArr(arr);
	}
	cout<<ans<<'\n';
	return 0;
}
