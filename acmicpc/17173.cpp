//17173
#include<iostream>
using namespace std;
int arr[1010];

int main(void){
	freopen("17173.txt","r",stdin);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>arr[i];
	}
	long long total=0;
	for(int i=1;i<=n;i++){
		for(int j=0;j<m;j++){
			if(i%arr[j]==0){
				total+=i;
				break;	
			}
		}
	}
	cout<<total;
	
	return 0;
}
