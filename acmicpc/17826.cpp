//17826
#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
	freopen("17826.txt","r",stdin);
	int arr[55];
	int hon,num=50;
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	cin>>hon;
	int left=0,right=num-1;
	int rank=0;
	while(left<=right){
		int mid=(left+right)/2;
		if(arr[mid]==hon){
			rank=mid+1;
			break;
		}else if(arr[mid]>hon){
			left=mid+1;	
		}else if(arr[mid]<hon){
			right=mid-1;	
		}
	}
	if(1<=rank && rank<=5){
		cout<<"A+"<<endl;
	}else if(6<=rank && rank<=15){
		cout<<"A0"<<endl;
	}else if(16<=rank && rank<=30){
		cout<<"B+"<<endl;
	}else if(31<=rank && rank<=35){
		cout<<"B0"<<endl;
	}else if(36<=rank && rank<=45){
		cout<<"C+"<<endl;
	}else if(46<=rank && rank<=48){
		cout<<"C0"<<endl;
	}else if(49<=rank && rank<=50){
		cout<<"F"<<endl;
	}

	return 0;
}
