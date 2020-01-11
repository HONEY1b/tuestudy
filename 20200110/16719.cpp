//16719
#include<stdio.h>
#include<iostream>
using namespace std;
char str[101];
int len;
bool check [101];

void f(int l,int r){
	int mini='Z'+1;
	int index=-1;
	
	for(int i=l;i<=r;i++){
		if(!check[i]&&min>str[i]){
			min=str[i];
			index=i;	
		}
	}
	if(mini=='Z'+1)return;
	check[index]=true;
	
	for(int i=0; str[i];i++){
		if(check[i]) printf("%c",str[i]);	
	}
	printf("\n");
	
	f(index+1,r);
	f(l,index-1);
}

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	scanf("%s",str);
	len=strlen(str);
	
	f(0,len-1);	
	
	return 0;
}
