//5585
#include<bits/stdc++.h>
using namespace std;
int arr[]={500,100,50,10,5,1};
int mon;
int main(void){
	cin>>mon;
	mon=(1000-mon);
	int i=0;
	int total=0;
	while(mon!=0 && i<6){
		total+=mon/arr[i];
		//cout<<arr[i]<<" : "<<total<<endl;
		mon=mon%arr[i];
		i++;
	}
	
	cout<<total;
	
	return 0;
}
