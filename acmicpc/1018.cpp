//1018
/*
1. 각각의 칸을 기준으로 8*8을 찾는다.
2. 각구역에 대해 규칙을 만족하려면 필요한 색칠의 수를 구한다 (B로 시작/W로 시작 나눠서 비교) 
3. 최솟값을 찾는다. 
*/
#include<bits/stdc++.h>
using namespace std;
int n,m;
//char arr[60][60];
int dx[]={0,1};
int dy[]={1,0};

int f(int x,int y,char color,char arr[60][60]){
	int cnt=0;
	if(arr[x][y]!=color){
		cnt++;
		if(arr[x][y]=='B'){
			arr[x][y]='W';
		}else{
			arr[x][y]='B';
		}
	}
	
	for(int i=x;i<x+8;i++){
		for(int j=y;j<y+8;j++){
			for(int k=0;k<2;k++){
				int nx=i+dx[k],ny=j+dy[k];
				if(arr[i][j] == arr[nx][ny]){
					cnt++;
					if(arr[nx][ny]=='B'){
						arr[nx][ny]='W';	
					}else{
						arr[nx][ny]='B';
					}
				}
			}
		}
	}
	printf("%d %d\n",x,y);
	printf("%d\n",cnt);
	for(int i=0;i<n;i++){for(int j=0;j<m;j++){printf("%c ",arr[i][j]);}printf("\n");}printf("\n\n");
	
	return cnt;
}

int main(void){
	char arr[60][60];
	char arr2[60][60];
	freopen("1018.txt","r",stdin);
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%s",arr[i]);
	}
	
	int ans=987654321;
	
//	for(int i=0;i<n;i++){for(int j=0;j<m;j++){printf("%c ",arr[i][j]);}printf("\n");}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			
			//(i,j)에서 시작
			//맵사이즈되나 확인
			if(i+8>n || j+8>m){continue;} 
			//w로 시작
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					arr2[i][j]=arr[i][j];
				}
			}
			int tmp=f(i,j,'W',arr2);
			
			//b로 시작 
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					arr2[i][j]=arr[i][j];
				}
			}
			int tmp2=f(i,j,'B',arr2);
			if(tmp<ans){
				ans=tmp;
			}
			if(tmp2<ans){
				ans=tmp2;	
			}
		}
	}
	
	printf("%d\n",ans);
	return 0;
}
