//10844
#include<iostream>
using namespace std;
int n;
int d[101][15];
int main(void){
	int div=1000000000;
	cin>>n;
	for(int i=1;i<10;i++){
		d[1][i]=1;
	}
	if(n==1){
		cout<<9<<endl;
		return 0;	
	}
	long long ans=0;
	for(int i=2;i<=n;i++){
		for(int j=0;j<10;j++){
			if(j==0){
				d[i][j]=d[i-1][1];
			}
			else if(j==9){
				d[i][j]=d[i-1][8];
			}else{
				d[i][j]=d[i-1][j-1]%div+d[i-1][j+1]%div;
			}
		}
	}
	
	for(int i=0;i<10;i++){
		ans=(ans%div)+(d[n][i]%div);	
	}
	cout<<ans%div<<endl;
	
	return 0;
}
