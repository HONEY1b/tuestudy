#include <iostream>

using namespace std;
int main() {
	int arr[10];
	for(int i=0;i<6;i++){
		cin>>arr[i];	
		if(arr[i]<=0 || arr[i]>45){
			cout<<"false";
			return 0;	
		}
	}
	for(int i=0;i<5;i++){
		if(arr[i]>=arr[i+1]){
			cout<<"false";
			return 0;
		}
	}
	cout<<"true";
	
	return 0;
}
