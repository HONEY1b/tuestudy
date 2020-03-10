//1373
#include<string>
#include<iostream>
using namespace std;
string arr[]={"0","1","2","3","4","5","6","7"};

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string str;
	cin>>str;
	string ans="";
	for(int i=str.length()-1;i>=0;i=i-3){
		int a=0,b=0,c=0;
		if(i-2>=0){a=str[i-2]-'0';}
		if(i-1>=0){b=str[i-1]-'0';}
		if(i>=0){c=str[i]-'0';}
//		int a=str[i-2]-'0',b=str[i-1]-'0',c=str[i]-'0';
//		cout<<a<<b<<c<<endl;
		int total=a*4+b*2+c*1;
		ans+=arr[total];
	}
	for(int i=ans.length()-1;i>=0;i--){
		cout<<ans[i];	
	}
	return 0;
}
