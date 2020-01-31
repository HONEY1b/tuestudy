//11720
#include<stdio.h>
#include<iostream>
using namespace std;

int main(void){
	int n;
	scanf("%d",&n);
	char arr[100];
	int total=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		total+=arr[i]-48;	
	}
	cout<<total<<'\n';
	return 0;
}
