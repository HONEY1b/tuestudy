//11057
#include<iostream>
using namespace std;
int n;
int d[1010][11];
int main(void){
	int div=10007;
	cin>>n;
	for(int i=0;i<10;i++){
		d[1][i]=1;
	}
	for(int i=2;i<=n;i++){
		for(int j=0;j<10;j++){
			for(int k=0;k<=j;k++){
				d[i][j]=((d[i][j]%div)+(d[i-1][k]%div))%div;
			}
		}
	}
	int total=0;
	for(int i=0;i<10;i++){
		total=((total%div)+(d[n][i]%div))%div;	
	}
	cout<<total;
	
	return 0;
}
