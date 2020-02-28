//1546
#include<stdio.h>
#include<algorithm>
using namespace std;

int arr[1010];
int n;
int main(void){
	freopen("1546.txt","r",stdin);
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);	
	}
	sort(arr,arr+n);
	int maxx=arr[n-1];
	double t=0;
	for(int i=0;i<n;i++){
		double aa=arr[i];
		t+=(aa/maxx)*100;
	}
	printf("%.2f\n",t/n);
	
	return 0;
}
