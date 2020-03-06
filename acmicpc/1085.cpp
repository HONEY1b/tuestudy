//1085
#include<stdio.h>

int main(void){
	freopen("1085.txt","r",stdin);
	int x,y,w,h;
	scanf("%d %d %d %d",&x,&y,&w,&h);
	int arr[4];
	arr[0]=x,arr[1]=y,arr[2]=w-x,arr[3]=h-y;
	int minn=987654321;
	for(int i=0;i<4;i++){
		if(minn>arr[i]){
			minn=arr[i];
		}
	}
	printf("%d\n",minn);
	return 0;
}
