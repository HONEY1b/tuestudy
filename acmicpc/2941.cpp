//2941
/*
?	c=
?	c-
d?	dz=
©¢	d-
lj	lj
nj	nj
?	s=
?	z=
*/
#include<bits/stdc++.h>
using namespace std;

int main(void){
	freopen("2941.txt","r",stdin);
	string str;
	cin>>str;
	int len=str.length();
	int word=0;
	for(int i=0;i<len;i++){
		if(str[i]=='=' || str[i]=='-')continue;
		if(str[i]=='c'){
			if(str[i+1]=='=' || str[i+1]=='-'){word++; i++;}
			else word++;
		}
		else if(str[i]=='d'){
			if(str[i+1]=='z'&& str[i+2]=='='){word++; i+=2;}
			else if(str[i+1]=='-'){word++; i++;}
			else word++;
		}
		else if(str[i]=='l'){
			if(str[i+1]=='j'){word++; i++;}
			else word++;
		}
		else if(str[i]=='n'){
			if(str[i+1]=='j'){word++; i++;}
			else word++;
		}
		else if(str[i]=='s'){
			if(str[i+1]=='='){word++; i++;}
			else word++;
		}
		else if(str[i]=='z'){
			if(str[i+1]=='='){word++; i++;}
			else word++;
		}else{word++;}
		
	}
	
	cout<<word<<endl;
	
	
	return 0;
}
