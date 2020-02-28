//1110
#include<stdio.h>
int n;
int arr[110];

int main(void){
	scanf("%d",&n);
	int s=n;
	arr[0]=n;
	int index=0;
	for(int i=1;i<100;i++){
		//새로운 수열 만들기
		int x=s/10,y=s%10;
		int xy=(x+y)%10;
		int neww=(s%10)*10+xy;
		arr[i]=neww;
		s=arr[i];
		for(int j=0;j<i;j++){
			if(arr[j]==arr[i]){
				index=i;
				break;
			}
		}
		if(index!=0)break;
	}
	printf("%d\n",index);
	
	return 0;
}
