//11054
/*
	LIS 를 찾다가 작아지면 그때부터는 LDS를 찾는다. 

*/
#include<bits/stdc++.h>
using namespace std;

int d[1010];
int arr[1010];
int main(void){
	freopen("11054.txt","r",stdin);	
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];	
	}
	d[0]=1;
	for(int i=1;i<n;i++){
		d[i]=1;
		int des=0;
		for(int j=0;j<i;j++){
			if(des==1) break;
			if(d[j]+1 > d[i] && arr[j]<arr[i] && des==0){
				d[i]=d[j]+1;	
			}else if(d[j]+1 > d[i] && arr[j]>arr[i]){
				des=i;
				d[i]=d[j]+1;
			}
		}
		for(int j=des;j<n;j++){
			if(d[j]+1 > d[i] && arr[j]>arr[i]){
				d[i]=d[j]+1;
			}
		}
	}
	
	for(int i=0;i<n;i++){
		cout<<d[i]<<" ";	
	}cout<<endl;
	
	return 0;
}
