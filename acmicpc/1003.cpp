//1003
#include<bits/stdc++.h>
using namespace std;
int arr[42];
int d[42][2];
int f[42];
int fibonacci(int n) {
	if(f[n]!=-1){
    	return f[n];
	}
    if (n == 0) {
    	d[n][0]++;
        return f[n]=0;
    } else if (n == 1) {
    	d[n][1]++;
        return f[n]=1;
    } else {
    	f[n]=fibonacci(n-1) + fibonacci(n-2);
    	d[n][0]=d[n-1][0]+d[n-2][0];
    	d[n][1]=d[n-1][1]+d[n-2][1];
        return f[n];
    }
}

int main(void){
	freopen("1003.txt","r",stdin);
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	memset(f,-1,sizeof(f));
	//f[0]=0,f[1]=1,f[2]=1;
	for(int i=0;i<n;i++){
		fibonacci(arr[i]);
		//printf("%d\n",f[arr[i]]);
		printf("%d %d\n",d[arr[i]][0],d[arr[i]][1]);
	}
	
	return 0;
}
