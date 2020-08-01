//1021
#include<bits/stdc++.h>
using namespace std;

int main(void){
	freopen("1021.txt","r",stdin);	
	int n,m;
	int arr[100];
	cin>>n>>m;
	memset(arr,-1,sizeof(arr));
	
	for(int i=0;i<m;i++){
		cin>>arr[i];	
	}
	deque<int> dq;
	for(int i=0;i<n;i++){
		dq.push_back(i);
	}
	
	for(int i=0;i<m;i++){
		while(true){
			int a=dq.front();
			dq.pop_front();
			
			if(a==arr[i]) break;
			else{
			
			}
		}
	}
	
	return 0;
}
