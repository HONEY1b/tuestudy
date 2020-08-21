//11653
#include<bits/stdc++.h>
using namespace std;
bool arr[10000010];
void Prime(int num){
	for(int i=2;i*i<=num;i++){
		if(arr[i]==true)continue;
		for(int j=2;i*j<=num;j++){
			if(arr[i*j]==false)arr[i*j]=true;
		}
	}
}


int main(void){
	int n;
	cin>>n;	
	
	Prime(n);
	
	vector<int> v;
	while(n>1){
		for(int i=n;i>-0;i--){
			if(arr[i]==true) continue;
			if(n%i == 0){
				v.push_back(i);	
				n=n/i;
				break;
			}
		}
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<'\n';	
	}
	
	return 0;
}
