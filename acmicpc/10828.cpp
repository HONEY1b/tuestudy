//10828
#include<iostream>
#include<string.h>
using namespace std;

int arr[10010];
int top=0;

void Push(int num){
	top++;
	arr[top]=num;
}

void Top(){
	if(top==0){
		cout << -1<<'\n';	
	}else{
		cout<<arr[top]<<'\n';	
	}
}

void Size(){
	cout << top<<'\n';	
}

void Empty(){
	if(top==0){
		cout<<1<<'\n';
	}else{
		cout<<0<<'\n';
	}
}

void Pop(){
	if(top==0){
		cout<<-1<<'\n';	
	}else{
		Top();
		arr[top]=-1;
		top--;	
	}
}

int main(void){
	int n,num;
	freopen("10828.txt","r",stdin);
	cin>> n;
	for(int i=0;i<n;i++){
		string cmd;
		cin>>cmd;
		if(cmd.compare("push")==0){
			cin>>num;
			Push(num);
		}
		if(cmd.compare("top")==0){
			Top();
		}
		if(cmd.compare("size")==0){
			Size();	
		}
		if(cmd.compare("empty")==0){
			Empty();
		}
		if(cmd.compare("pop")==0){
			Pop();	
		}
	}
	
	return 0;
}
