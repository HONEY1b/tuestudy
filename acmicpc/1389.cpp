//1389
#include<bits/stdc++.h>
using namespace std;
int n,m;//模备 荐, 模备 包拌荐
//vector<int> v[110]; 
int arr[110][110];
int d[110][110];
int INF=99999;

void printArr(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<arr[i][j]<<"\t";
		}cout<<'\n';
	}cout<<"\n\n";
	cout<<"--------------------------------------\n";
}


int main(void){
	freopen("1389.txt","r",stdin);
	cin>>n>>m;
	
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			d[i][j]=arr[i][j]=INF;
		}
	}
	
	for(int i=1;i<=m;i++){
		int a,b;
		cin>>a>>b;
		arr[a][b]=arr[b][a]=1;
	}
	for(int k=1;k<=n;k++){
		for(int j=1;j<=n;j++){
			for(int i=1;i<=n;i++){
				if(i==j) continue;
				if(arr[i][k]!=INF && arr[k][j]!=INF){
					arr[i][j]=min(arr[i][j],arr[i][k]+arr[k][j]);
				}
			}
		}
	}
	
	
	int mini=INF,minidx=0;
	
	
	for(int i=1;i<=n;i++){
		int total=0;
		for(int j=1;j<=n;j++){
			if(arr[i][j]==INF)continue;
			total+=arr[i][j];
		}
		if(mini>total){
			minidx=i;
			mini=total;
		}
	}
	
	cout<<minidx<<endl;
	return 0;
}
