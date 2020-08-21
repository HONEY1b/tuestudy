//2011
#include<bits/stdc++.h>
using namespace std;
int d[5010];

int main(void){
	string str;
	cin>>str;
	int DIV=1000000;
	int len=str.length();
	if(str[0]=='0'){
		cout<<0<<'\n';
		return 0;	
	}
	d[0]=1;
	for(int i=1;i<len;i++){
		if(str[i]=='0'){
			if(str[i-1]=='1' || str[i-1]=='2'){
				if(i>=2)
					d[i]=d[i-2]%DIV;	
				else
					d[i]=d[i-1]%DIV;
			}else{
				cout<<0<<'\n';
				return 0;
			}
		}else if(str[i-1]=='1'){
			if(i>=2)
				d[i]=(d[i-2]+d[i-1])%DIV;
			else
				d[i]=(d[i-1]+1)%DIV;
		}else if(str[i-1]=='2'){
			if('1'<=str[i] && str[i]<='6'){
				if(i>=2)
					d[i]=(d[i-2]+d[i-1])%DIV;
				else
					d[i]=(d[i-1]+1)%DIV;
			}else{
				d[i]=d[i-1]%DIV;	
			}
		}else{
			d[i]=d[i-1]%DIV;	
		}
		//cout<<str[i]<<" "<<d[i]<<endl;
	}
	cout<<d[len-1]%DIV<<'\n';
	
	return 0;
}
