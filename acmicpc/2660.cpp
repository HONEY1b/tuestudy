//2660
#include<iostream>
using namespace std;
int d[52][52];
int ans[52];
int n;
int INF=987654321;
void printArr(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(d[i][j]==INF)
				cout<<0<<" ";
			else cout<<d[i][j]<<" ";
		}cout<<'\n';
	}cout<<"\n\n\n";
}
int main(void){
	freopen("2660.txt","r",stdin);	
	
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==j) d[i][j]=0;
			else d[i][j]=INF;
		}
	}
	
	while(true){
		int a,b;
		cin>>a>>b;
		if(a==-1 && b==-1) break;	
		d[a][b]=1;
		d[b][a]=1;
	}
	
	for(int i=1;i<=n;i++){
		int maxi=0;
		for(int j=1;j<=n;j++){
			for(int k=1;k<=n;k++){
				if(d[i][k]+d[k][j]<d[i][j])
					d[i][j]=d[i][k]+d[k][j];
			}
			maxi=max(maxi,d[i][j]);
		}
		ans[i]=maxi;
	}
	//점수
	int mini=INF;
	for(int i=1;i<=n;i++){
		mini=min(mini,ans[i]);
	}
	
	//점수인 사람 수 
	int num=0;
	for(int i=1;i<=n;i++){
		if(ans[i]==mini)
			num++;
	}
	cout<<mini<<" "<<num<<'\n';
	for(int i=0;i<n;i++){
		if(ans[i]==mini){
			cout<<i<<" ";
		}
	}
	return 0;
}
