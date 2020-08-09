//2583
#include<bits/stdc++.h>
using namespace std;
int squ[110][110];

int main(void){
	freopen("2583.txt","r",stdin);
	int n,m,k;
	cin>>n>>m>>k;
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			squ[i][j]=1000;
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<squ[i][j]<<'\t';
		}cout<<endl;
	}cout<<"\n\n\n\n";
	
	for(int i=0;i<k;i++){
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		for(int x=x1;x<=x2;x++){
			for(int y=y1;y<=y2;y++){
				squ[y][x]=0;
			}
		}
	}
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<squ[i][j]<<'\t';
		}cout<<endl;
	}
	
	return 0;
}
