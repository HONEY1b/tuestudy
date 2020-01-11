//10164
#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int d[20][20]
int main(void){
	cin >>a>>b>>c;
	
	d[1][1]=1;
	for(int i=1;i<a;i++){
		for(int j=1;j<b;j++){
			d[i][j]=d[i][j-1]+d[i-1][j];
		}
	}
	
	
	
	return 0;
}
