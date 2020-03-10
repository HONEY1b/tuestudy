//2511
#include<stdio.h>
int main(void){
	int arr[3][11];
	char b[11];
	freopen("2511.txt","r",stdin);
	for(int i=0;i<10;i++){
		scanf("%d",&arr[0][i]);	
	}
	for(int i=0;i<10;i++){
		scanf("%d",&arr[1][i]);	
	}
	int win_A=0,win_B=0;
	char def='D';
	for(int i=0;i<10;i++){
		if(arr[0][i]>arr[1][i]){
			b[i]='A';
			def='A';
			win_A+=3;
		}else if(arr[0][i]<arr[1][i]){
			b[i]='B';
			def='B';
			win_B+=3;
		}else{
			b[i]='D';
			win_A++;win_B++;	
		}
	}
	printf("%d %d\n",win_A,win_B);
	if(win_A==win_B){
		printf("%c\n",def);
	}else if(win_A>win_B){
		printf("A\n");
	}else{
		printf("B\n");	
	}
	
	
	return 0;
}
