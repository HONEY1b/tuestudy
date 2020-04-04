//1107
#include<bits/stdc++.h>
int arr[11],n,num;
int MAX=1000000;
int f(int s){
	int cnt=0;
	do{
		for(int i=0;i<num;i++){
			if(arr[i]==s%10){
				return MAX;
			}
		}
		cnt++;
		s/=10;
	}while(s);
	return cnt;
}

int main(void){
	//freopen("1107.txt","r",stdin);
	
	scanf("%d %d",&n,&num);
	for(int i=0;i<num;i++){scanf("%d",&arr[i]);}
	
	int ans=abs(n-100);
	
	for(int i=0;i<=1000000;i++){
		int c=f(i);
		c+=abs(i-n);
		if(ans>c) ans=c;
		//printf("%d %d %d\n",i,f(i),ans);
	}
	printf("%d\n",ans);
	
	return 0;
}
