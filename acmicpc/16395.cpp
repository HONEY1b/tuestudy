//16395
#include<iostream>
using namespace std;

int d[35][35];
int main(void){
	int n,m;
	cin>>n>>m;
	d[1][1]=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j==1 || j==n){
				d[i][j]=1;
				continue;
			}
			d[i][j]=d[i-1][j]+d[i-1][j-1];
		}
	}
	
	cout<<d[n][m];
	
	return 0;
}
