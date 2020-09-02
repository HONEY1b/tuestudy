//16561
#include<iostream>
using namespace std;
int n;
int arr[1500];
int ans=0;
int d[3];
void f(int level,int sum){
	if(level==3){
		if(sum==n){
			//cout<<d[0]<<" "<<d[1]<<" "<<d[2]<<endl;
			if(d[0]!=0 && d[1]!=0 && d[2]!=0)
				ans++;	
		}
		return;
	}
	for(int i=1;i<n;i++){
		if(arr[i]!=0){
			d[level]=arr[i];
			f(level+1,sum+arr[i]);
			d[level]=0;
		}
	}
}
int main(void){
	cin>>n;
	for(int i=1;i<n;i++){
		arr[i]=i*3;	
	}
	f(0,0);	
	cout<<ans<<"\n";
	
	return 0;
}
