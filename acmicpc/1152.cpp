//1152
#include<string>
#include<iostream>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	freopen("1152.txt","r",stdin);
	string str="";
	getline(cin,str);
	int cnt=0;
	for(int i=0;i<str.length();i++){
		if(str[i]==' ' && i!=0 && i!=(str.length()-1)){
			cnt++;
		}
	}
	
	cout<<cnt+1;
	return 0;
}
