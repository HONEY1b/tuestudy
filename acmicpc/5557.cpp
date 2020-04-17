//5557
#include<stdio.h>
using namespace std;
int n,ans;
int arr[110];
int d[110];

void f(int cnt,int sum){
	//printf("%d %d\n",cnt,sum);
	if(sum>20||sum<0){return;}
	
	if(cnt==n-1){
		if(sum==arr[n-1]) ans++;
		return;	
	}
	
	f(cnt+1,sum+arr[cnt]);
	f(cnt+1,sum-arr[cnt]);
	return;
}
int f2(int cnt,int sum){
	//printf("%d %d\n",cnt,sum);
	if(sum>20||sum<0){	return d[cnt]=0;}
	
	if(cnt==n-1){
		if(sum==arr[n-1]) return d[cnt]=1;
		else return d[cnt]=0;
	}
	
	if(d[cnt]) { 
		return d[cnt];}
	
	d[cnt]=f2(cnt+1,sum+arr[cnt])+f2(cnt+1,sum-arr[cnt]);
	return d[cnt];
}

int main(void){
	freopen("5557.txt","r",stdin);
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	//f(0,0);
	
	//printf("%d\n",ans);
	printf("%d\n",f2(0,0));
	
	
	return 0;
}
