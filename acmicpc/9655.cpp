//9655
#include<bits/stdc++.h>
using namespace std;

int dp(int turn,int num){
	if(turn==2 && num==0){
		return 0;
	}else if(turn ==1 && num==0){
		return	0;
	}
	if(d[turn][num]) return d[turn][num];
	if(turn==1){
		dp(2,num-1);
		dp(2,num-3);	
	}else if(turn==2){
		dp(1,num-1);
		dp(1,num-3);
	}
}
int main(void){
	ios_base::sync_with_stdio();
	cin.tie(0);cout.tie(0);
	
	int n;
	cin>>n;
	dp(1,n);
	
	return 0;
}
