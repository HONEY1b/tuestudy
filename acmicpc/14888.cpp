//14888
#include<stdio.h>
#include<iostream>
using namespace std;
int n;//¼öÀÇ °³¼ö
int arr[15];// ¼ö ÀÔ·Â
int a,b,c,d,a2,b2,c2,d2; // µ¡¼À,»¬¼À,°ö¼À,³ª´°¼À
int maximum=-0x7fffffff,minimum=0x7fffffff;//ÃÖ´ñ°ª,ÃÖ¼Ú°ª

void f(int round,int total){
	if(round>=n){
		if(total>maximum){
			maximum=total;
			return;	
		}
	}
	
	if(a>0){
		a--;
		f(round+1,total+arr[round]);
		a++;
	}
	if(b>0){
		b--;
		f(round+1,total-arr[round]);
		b++;
	}
	if(c>0){
		c--;
		f(round+1,total*arr[round]);
		c++;
	}
	if(d>0){
		d--;
		f(round+1,total/arr[round]);
		d++;
	}
}

void f2(int round,int total){
	if(round>=n){
		if(total<minimum){
			minimum=total;
			return;	
		}
	}
	
	if(a>0){
		a--;
		f2(round+1,total+arr[round]);
		a++;
	}
	if(b>0){
		b--;
		f2(round+1,total-arr[round]);
		b++;
	}
	if(c>0){
		c--;
		f2(round+1,total*arr[round]);
		c++;
	}
	if(d>0){
		d--;
		f2(round+1,total/arr[round]);
		d++;
	}
}

int main(void){
	freopen("14888.txt","r",stdin);
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];	
	}
	cin>>a>>b>>c>>d;
	a2=a,b2=b,c2=c,d2=d;
	
	f(1,arr[0]);//ÃÖ´ë°ª 
	
	f2(1,arr[0]);//ÃÖ¼Ò°ª 
	
	cout<<maximum<<'\n';
	cout<<minimum;
	
	return 0;
}
