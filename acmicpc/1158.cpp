//1158
#include<bits/stdc++.h>
using namespace std;
int n,k;
bool arr[5010];
queue<int> q;
void printD(){
	for(int i=1;i<=n;i++){
		cout<<i<<" ";
	}
	cout<<endl;
	for(int i=1;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(void){
	cin>>n>>k;
	int cur=0;
	arr[0]=true;
	while(q.size()<n){
		//printD();
		for(int i=0;i<k;i++){
			if(cur<n){cur++;}
			else{cur=1;}	
			while(arr[cur]!=0){
				if(cur<n){cur++;}
				else{cur=1;}	
			}
		}
		
		if(arr[cur]==false){
			arr[cur]=1;
			q.push(cur);
		}
	}
	
	cout<<"<";
	while(!q.empty()){
		cout<<q.front();
		q.pop();
		if(q.empty()){
			cout<<">";	
		}else{
			cout<<", ";	
		}
	}
	
	return 0;
}
