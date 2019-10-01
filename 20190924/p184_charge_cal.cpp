//p184_charge_cal
#include<stdio.h>
int m,n;
int arr[10];
int mini = 987654321;

void f(int charge,int cnt){
	if(cnt > mini) return;
	if(charge==0){
		if(cnt<mini){
			mini=cnt;
			return;
		}
	}
	else if(charge<0){
		return;	
	}
	else{
		for(int i=0;i<n;i++){
			f(charge-arr[i],cnt+1);
		}
	}
}

int main(void){
	freopen("p184_charge_cal.txt","r",stdin);
	scanf("%d %d",&m,&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);	
	}
	f(m,0);
	printf("%d",mini);
	return 0;
}
