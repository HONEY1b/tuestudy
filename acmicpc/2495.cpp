//2495
#include<bits/stdc++.h>
using namespace std;
int arr[12];
int maxi;

int f(int x,int exx){
	if(x==0){
		for(int i=1;i<=10;i++){
			if(maxi<arr[i]){
				maxi=arr[i];
			}
		}
		return maxi;
	}
	if(x%10 == exx){
		arr[x%10]++;	
	}else{
		arr[x%10]=1;	
	}
	f(x/10,x%10);
}

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
	
	freopen("2495.txt","r",stdin);
	
	int a;
	for(int i=0;i<3;i++){
		cin>>a;
		cout<<f(a,0)<<'\n';
		for(int i=1;i<=10;i++){
			arr[i]=0;	
		}
	}
	return 0;
}
