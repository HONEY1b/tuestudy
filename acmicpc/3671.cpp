//3671
#include<bits/stdc++.h>
using namespace std;
char s[210];
int arr[210];
int c[210];
int len,cnt;

bool Prime(int num){
	for(int i=2;i*i<=num;i++){
		if(num%i==0){return false;}
	}
	return true;
}

void f(int level,int num){
	if(Prime(num)){cnt++;}
	if(level==len){return;}
	
	for(int i=0;i<len;i++){
		if(!c[i]){
			c[i]=1;
			num=num*10+arr[i];
			f(level+1,num);
			c[i]=0;
		}
	}
}


int main (void){
	freopen("3671.txt","r",stdin);	
	int t;
	scanf("%d\n",&t);
	while(t--){
		memset(s,0,sizeof(s));
		memset(arr,0,sizeof(arr));
		scanf("%s",&s);
		len=strlen(s);
		for(int i=0;i<len;i++){
			arr[i]=s[i]-'0';
		}
		
		//숫자 만들기
		//배열에서 하나씩 떼어오기 
		//소수인지 판단 
		cnt=0;
		f(0,0); 
		printf("%d\n",cnt);
	}
	
	return 0;
}
