//10866
/*
-1
-1
-1
-1
1
1
2

0
333
2
2
2
0
1234
1234
1234
*/
#include<iostream>
using namespace std;
int arr[10100];
int front=5000,back=5000,size=0;
void Push_front(int num){
	if(size==0){
		front--;back--;
		arr[front]=num;
	}else{
		front--;
		arr[front]=num;	
	}
	size++;
}
void Push_back(int num){
	if(size==0){
		back++;front++;
		arr[back]=num;
	}else{
		back++;
		arr[back]=num;	
	}
	size++;
}
void Pop_front(){
	if(size==0){
		cout<<-1<<'\n';
		front=5000;back=5000;
	}else{
		cout<<arr[front]<<'\n';
		front++;
		size--;	
		if(size==0){
			front=5000;back=5000;
		}
	}
}
void Pop_back(){
	if(size==0){
		cout<<-1<<'\n';
		front=5000;back=5000;
	}else{
		cout<<arr[back]<<'\n';
		back--;
		size--;
		if(size==0){
			front=5000;back=5000;
		}
	}	
}
void Size(){
	cout<<size<<'\n';	
}
void Empty(){
	if(size==0){
		cout<<1<<'\n';
		front=5000;back=5000;
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
		cout<<arr[back]<<'\n';	
	}
}
int main(void){
	freopen("10866.txt","r",stdin);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string str;
		cin>>str;
		if(str.compare("push_front")==0){
			int num;
			cin>>num;
			Push_front(num);
		}else if(str.compare("push_back")==0){
			int num;
			cin>>num;
			Push_back(num);
		}else if(str.compare("pop_front")==0){
			Pop_front();
		}else if(str.compare("pop_back")==0){
			Pop_back();
		}else if(str.compare("size")==0){
			Size();
		}else if(str.compare("empty")==0){
			Empty();
		}else if(str.compare("front")==0){
			Front();
		}else if(str.compare("back")==0){
			Back();
		}
		
		//for(int i=4980;i<5020;i++){printf("%d ",arr[i]);}printf("\n%d\t\t%d\n\n\n",front,back);
	}
	
	return 0;
}
