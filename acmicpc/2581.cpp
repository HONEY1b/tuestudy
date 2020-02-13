//2581
#include<stdio.h>
bool d[10010];
bool f(int x){
	if(x==1) return false;
	for(int i=2;i*i<=x;i++){
		if(x%i==0){
			return false;	
		}
	}
	return true;
}


int main(void){
//	for(int i=2;i<=10000;i++){
//		d[i]=f(i);	
//	}
	int a,b;
	scanf("%d %d",&a,&b);
	int cnt=0,ans=0,small=987654321;
	for(int i=a;i<=b;i++){
		d[i]=f(i);
		if(d[i]){
			cnt++;
			ans+=i;	
			if(i<small){
				small=i;	
			}
		}
	}
	if(!cnt){
		printf("-1");	
	}
	else{
		printf("%d\n%d\n",ans,small);
	}
	
	return 0;
}
