//3047
#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
	int arr[3];
	cin>>arr[0]>>arr[1]>>arr[2];
	sort(arr,arr+3);
	char str[5];
	cin>>str;
	int A=arr[0],B=arr[1],C=arr[2];
	
	for(int i=0;i<3;i++){
		if(str[i]=='A'){
			cout<<arr[0]<<" ";
		}else if(str[i]=='B'){
			cout<<arr[1]<<" ";
		}else if(str[i]=='C'){
			cout<<arr[2]<<" ";
		}
	}
	
	return 0;
}
