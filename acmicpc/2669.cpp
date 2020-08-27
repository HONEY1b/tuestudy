//2669
#include<bits/stdc++.h>
using namespace std;
int d[101][101];

int main(void){
	freopen("2669.txt","r",stdin);
	for(int i=0;i<4;i++){
		int x1,x2,y1,y2;
		cin>>x1>>y1>>x2>>y2;
		for(int i=x1;i<x2;i++){
			for(int j=y1;j<y2;j++){
				d[i][j]=1;
			}
		}
	}
	
	int ans=0;
	for(int i=0;i<101;i++){
		for(int j=0;j<101;j++){
			if(d[i][j]==1){
				ans++;
			}
		}
	}
	
	cout<<ans<<endl;
	
	return 0;
}
