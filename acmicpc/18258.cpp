//18258
#include<iostream>
using namespace std;
int front=0,back=0,size=0;
int arr[2000000];
void Push(int num){
	arr[back]=num;
	back++;size++;
	return;
}

void Pop(){
	if(size==0){
		cout<<-1<<'\n';	
	}else{
		cout<<arr[front]<<'\n';
		front++;
		size--;
	}
}

void Size(){
	cout<<size<<'\n';
}

void Empty(){
	if(size==0){
		cout<<1<<'\n';
	}else{
		cout<<0<<'\n';
	}
}

void Front(){
	if(size==0){
		cout<<-1<<'\n';
	}else{
		cout<<arr[front]<<'\n';
	}
}

void Back(){
	if(size==0){
		cout<<-1<<'\n';
	}else{
		cout<<arr[back-1]<<'\n';
	}
}
int main(void){
	freopen("18258.txt","r",stdin);
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string str;
		cin>>str;
		if(str.compare("push")==0){
			int a;
			cin>>a;
			Push(a);
		}else if(str.compare("pop")==0){
			Pop();
		}else if(str.compare("size")==0){
			Size();
		}else if(str.compare("empty")==0){
			Empty();
		}else if(str.compare("front")==0){
			Front();
		}else if(str.compare("back")==0){
			Back();
		}
	}
	
	return 0;
}
