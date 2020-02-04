//2477
#include<stdio.h>
using namespace std;
int n;
int d[6][2];
int w,h,wi,hi;
int main(void){
	//freopen("2477.txt","r",stdin);
	
	scanf("%d",&n);	
	int a,b;
	for(int i=0;i<6;i++){
		scanf("%d %d",&a,&b);
		d[i][0]=a;
		d[i][1]=b;
		if(a==1||a==2){
			if(w<b){
				w=b,wi=i;
			}
		}
		else{
			if(h<b){
				h=b,hi=i;
			}
		}
	}
	
	int total1=w*h;
	int total2=d[(wi+3)%6][1]*d[(hi+3)%6][1];
	int total = total1-total2;
	printf("%d\n",total*n);
	
	
	return 0;
}
