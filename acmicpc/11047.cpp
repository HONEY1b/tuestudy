//11047
#include<bits/stdc++.h>
#define MAX 0x7FFFFFFF
using namespace std;
int arr[12],n,k;
int ans,Mini=MAX;
vector<int> d;

void f(int num,int a){
	//printf("%d %d\n",num,a);
	if(num>Mini) return;
	if(!a) {
		if(num<Mini){
			Mini=num;
			return;
		}
	}
	for(int i=0;i<n;i++){
		if(a/arr[i]!=0 && a>=arr[i]){
			f(num+a/arr[i],a%arr[i]);
		}
	}
}


int main(void){
	freopen("11047.txt","r",stdin);
	
	scanf("%d %d",&n,&k);
	d.resize(n+1);
	for(int i=0;i<n;i++) scanf("%d",&arr[i]);
	
	f(0,k);

	printf("%d\n",Mini);
	
	return 0;
}
