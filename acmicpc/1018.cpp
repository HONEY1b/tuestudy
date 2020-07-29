//1018
/*
1. 각각의 칸을 기준으로 8*8을 찾는다.
2. 각구역에 대해 규칙을 만족하려면 필요한 색칠의 수를 구한다 (B로 시작/W로 시작 나눠서 비교) 
3. 최솟값을 찾는다. 
*/
#include<bits/stdc++.h>
using namespace std;
char arr[60][60];
char map1[8][8]{
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'}
};
char map2[8][8]{
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'}
};

int n,m;

int f(int y,int x,int type){
	int cnt=0;
	for(int i=y;i<y+8;i++){
		for(int j=x;j<x+8;j++){
			if(map1[i-y][j-x]!=arr[i][j]){
				cnt++;	
			}
		}
	}
	return cnt;
}
int f2(int y,int x,int type){
	int cnt=0;
	for(int i=y;i<y+8;i++){
		for(int j=x;j<x+8;j++){
			if(map2[i-y][j-x]!=arr[i][j]){
				cnt++;	
			}
		}
	}
	return cnt;
}

int main(void){

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
			int tmp1=f(i,j,1);
			ans=min(ans,tmp1);
			int tmp2=f2(i,j,2);
			ans=min(ans,tmp2);
		}
	}
	
	printf("%d\n",ans);
	return 0;
}
