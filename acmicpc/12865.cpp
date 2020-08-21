//12865
#include<bits/stdc++.h>
using namespace std;
int n,m;
int arr[110][2];
int d[100000][100000];
long long Min=-987654321;

int dp(int weight,int value){
	if(d[weight][value]!=-1){
		return d[weight][value];	
	}
	if()
}

int main(void){
	freopen("12865.txt","r",stdin);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>arr[i][0]>>arr[i][1]; // 무게 , 가치
	}
	dp(0,0);
	return 0;
}
