//10833
#include<iostream>
using namespace std;

int main(void){
	freopen("10833.txt","r",stdin);
	int n;
	cin>>n;
	int total=0;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		total+=(b%a);
	}
	cout<<total<<endl;
	return 0;
}
