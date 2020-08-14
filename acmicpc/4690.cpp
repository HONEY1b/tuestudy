//4690
#include<stdio.h>
using namespace std;
int arr[3];

int check(int number){
	int a=arr[0]*arr[0]*arr[0];
	int b=arr[1]*arr[1]*arr[1];
	int c=arr[2]*arr[2]*arr[2];
	return (number*number*number)==(a+b+c);
}

void f(int level,int num){
	//printf("level : %d num : %d - %d %d %d\n",level,num,arr[0],arr[1],arr[2]);
	if(level==3){
		if(!(arr[0]<=arr[1] && arr[1]<=arr[2])) return;
		if(check(num)){
			printf("Cube = %d, Triple = (%d,%d,%d)\n",num,arr[0],arr[1],arr[2]);	
		}
		return;
	}
	for(int i=2;i<num;i++){
		if(level!=0){if(i<arr[0])continue;}
		arr[level]=i;
		f(level+1,num);
		arr[level]=0;
	}
}

int main(void){
	for(int i=2;i<=100;i++){
		arr[0]=arr[1]=arr[2]=0;
		f(0,i);	
	}
	
	return 0;
}
