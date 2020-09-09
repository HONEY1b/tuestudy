//1475
#include<iostream>
using namespace std;
int arr[10];
int max(int a,int b){
	return a>b? a:b;
}
int main(void){
	int n;
	cin>>n;
	if(n==0){
		cout<<1;
		return 0;	
	}
	while(n>0){
		arr[n%10]++;
		n/=10;
	}
	int ans=max(0,(arr[6]+arr[9]+1)/2);
	for(int i=0;i<10;i++){
		if(i==6 || i==9)continue;
		ans=max(ans,arr[i]);
	}
	cout<<ans<<endl;
	
	return 0;
}
