//1934
//유클리드 호제법 찾아보기 
#include<stdio.h>
int t,a,b,ans;
int arr[1010];
bool find;

/*
int f(int n1,int n2,int com){
//	if(n1==1 || n2==1) return n1*n2*com;
	int small=n1<n2?n1:n2;
	for(int i=2;i<=small;i++){
		if(n1%i==0 && n2%i==0){
			n1/=i;
			n2/=i;
			com*=i;
			find=1;
			break;
		}
	}
	if(!find){
		ans=n1*n2*com;
		return ans;	
	}
	find=0;
	f(n1,n2,com);	
}
*/

int f(int x,int y){
	int small=x<y?x:y,big=x>y?x:y;
	
	int g;
	for(int i=small;i>0;i--){
		if(small%i==0 && big%i==0){
			g=i;
			break;
		}
	}
	return x*y/g;
}

int main(void){
	freopen("1934.txt","r",stdin);
	
	scanf("%d",&t);
	
	for(int i=0;i<t;i++){
		scanf("%d %d",&a,&b);
		arr[i]=f(a,b);
		printf("%d\n",arr[i]);	
	}
	
	
	return 0;
}
