//3040
#include<bits/stdc++.h>
using namespace std;
int num[100];
int main(void){
	ios_base::sync_with_stdio();
	cin.tie(0);cout.tie(0);
	
	freopen("3040.txt","r",stdin);
	
	int total=0;
	int arr[10];
	
	for(int i=0;i<9;i++){
		cin>>arr[i];
		total+=arr[i];	
		num[arr[i]]=3;
	}
	total-=100;
	
	//두명의 키가 합쳐서 total이 되는 수 찾기
	for(int i=0;i<9;i++){
		int a=arr[i];
		int b=total-a;
		//cout<<a<<" "<<b<<endl;
		if(num[b]==3){
			num[a]=num[b]=2;
			break;	
		}
	}
	for(int i=0;i<9;i++){
		if(num[arr[i]]==3){
			cout<<arr[i]<<endl;
		}
	}
	
}
