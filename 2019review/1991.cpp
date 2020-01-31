//1991
#include<bits/stdc++.h>
using namespace std;
int n;
char arr[30][3];

void Pre(char c,int i){
	//printf("%c %d\n",c,i);
	cout<<c;
	int j;
	if(arr[i][1] != '.'){
		j=arr[i][1]-65;
		//printf("%c %d\n",arr[i][1],j);
		Pre(arr[i][1],j);
	}
	if(arr[i][2] != '.'){
		j=arr[i][2]-65;
		//printf("%c %d\n",arr[i][2],j);
		Pre(arr[i][2],j);
	}
}

void In(char c,int i){
	int j;
	if(arr[i][1] != '.'){
		j=arr[i][1]-65;
		Pre(arr[i][1],j);
	}
	cout<<c;
	if(arr[i][2] != '.'){
		j=arr[i][2]-65;
		Pre(arr[i][2],j);
	}
}

void Post(char c,int i){
	int j;
	if(arr[i][1] != '.'){
		j=arr[i][1]-65;
		Pre(arr[i][1],j);
	}
	if(arr[i][2] != '.'){
		j=arr[i][2]-65;
		Pre(arr[i][2],j);
	}
	cout<<c;
}

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	freopen("1991.txt","r",stdin);
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
	}
//	for(int i=0;i<n;i++){
//		cout<<arr[i][0]<<" "<<arr[i][1]<<" "<<arr[i][2]<<endl;
//	}
	Pre(arr[0][0],0);
	//printf("\n");
	//In(arr[0][0],0);
	//printf("\n");
	//Post(arr[0][0],0);
	
	return 0;
}
