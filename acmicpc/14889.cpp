//14889
//팀 분배를 진행
//모든 팀원이 분배되면
//각 팀의 능력치 계산
//두 팀의 능력치 차이가 최소일때 답! 
#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
int arr[30][30],check[30];
int mini=0x7fffffff;
int start[15],link[15];
int n;
int f2(int num,int team[],int type);

void f(int level){
	if(level>=n){
		//check==1 -> start팀
		//check==0 -> link팀 
		int ans1=f2(n/2,start,1);
		int ans2=f2(n/2,link,2);
		if(abs(ans1-ans2)<mini){
			mini=abs(ans1-ans2);
		}
		//printf("%d %d\n",ans1,ans2);
		return;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		}
	}	
}

int f2(int num,int team[],int type){
	int total=0;
	for(int i=0;i<num;i++){
		if(team[i]!=type)continue;
		for(int j=0;j<num;j++){
			if(team[j]!=type)continue;
			total+=arr[i][j];
			total+=arr[j][i];
		}
	}
	return total;
}

int main(void){
	freopen("14889.txt","r",stdin);
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	f(0);
	
	printf("%d\n",mini);
	return 0;	
}
