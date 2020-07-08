//2231
#include<bits/stdc++.h>
using namespace std;
int n;

int f(int num){
	int total=num;
	while(num!=0){
		total+=num%10;
		num/=10;
	}
	return total;
}

int main(void){
	
	cin>>n;
	int ans=0;
	for(int i=n/2;i<n;i++){
		if(f(i)==n){
			ans=i;
			break;
		}
	}
	printf("%d\n",ans);
	return 0;
}
