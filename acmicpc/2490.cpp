//2490
#include<bits/stdc++.h>
using namespace std;
int main(void){
	ios_base::sync_with_stdio();
	cin.tie(0);cout.tie(0);
	
	freopen("2490.txt","r",stdin);
	
	for(int i=0;i<3;i++){
		int arr[4];
		cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
		int front=0,back=0;
		for(int j=0;j<4;j++){
			if(arr[j]==0)
				front++;
			else
				back++;
		}
		
		if(front==1){
			cout<<"A\n";
		}else if(front==2){
			cout<<"B\n";
		}else if(front==3){
			cout<<"C\n";
		}else if(front==4){
			cout<<"D\n";
		}else if(front==0){
			cout<<"E\n";
		}
	}
	
	
	return 0;
}
