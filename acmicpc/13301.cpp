//13301
#include<iostream>
using namespace std;
long long arr[100];

int main(void){
	int n;
	cin>>n;
	n--;
	
	arr[0]=1,arr[1]=1,arr[2]=2,arr[3]=3;
	for(int i=2;i<=n+1;i++){
		arr[i]=arr[i-1]+arr[i-2];
	}
	
	cout<<arr[n]*2+arr[n+1]*2<<endl;
	
	return 0;
}
