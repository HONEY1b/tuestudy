//16719
#include<bits/stdc++.h>
using namespace std;
char str[101];
bool ch[101];
void pRint(void){
	for(int i=0;i<str[i];i++){
		if(ch[i]==1){
			printf("%c",str[i]);	
		}
	}	
	printf("\n");
}

void f(int l,int r){
	char next='Z'+1;
	int nexti=-1;
	for(int i=l;i<=r;i++){
		if(next>str[i]&&!ch[i]){
			next=str[i];
			nexti=i;
		}	
	}
	
	if(next=='Z'+1)return;
	ch[nexti]=true;
	
	pRint();
	
	f(nexti+1,r);
	f(l,nexti-1);
};

int main(void){
	scanf("%s",&str);
	int a=0,b=strlen(str);
	f(a,b-1);
	
	return 0;
}
