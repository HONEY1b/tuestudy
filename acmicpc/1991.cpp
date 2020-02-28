//1991
#include<bits/stdc++.h>
using namespace std;
int n;
char arr[30][3];

int search(char node){
	if(node=='.') return -1;
	for(int i=0;i<n;i++){
		if(node==arr[i][0]){
			return i;
		}
	}
}
void Pre(int i){
	if(arr[i][0]!='.'){
		cout<<arr[i][0];
		int l=search(arr[i][1]),r=search(arr[i][2]);
		if(l!=-1)Pre(l);
		if(r!=-1)Pre(r);
	}
}

void In(int i){
	int l=search(arr[i][1]),r=search(arr[i][2]);
	if(l!=-1) In(l);
	if(arr[i][0]!='.'){cout<<arr[i][0];}
	if(r!=-1) In(r);	
}

void Post(int i){
	int l=search(arr[i][1]),r=search(arr[i][2]);
	if(l!=-1) Post(l);
	if(r!=-1) Post(r);
	if(arr[i][0]!='.'){cout<<arr[i][0];}
}

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	//freopen("1991.txt","r",stdin);
	
	cin>>n;
	
	
	
	for(int i=0;i<n;i++){
		cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
	}
	
//	for(int i=0;i<n;i++){cout<<i<<" "<<arr[i][0]<<" "<<arr[i][1]<<" "<<arr[i][2]<<endl;}

	Pre(0);
	cout<<'\n';
	In(0);
	cout<<'\n';
	Post(0);
	
	return 0;
}
