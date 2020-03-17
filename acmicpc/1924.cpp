//19224
#include<bits/stdc++.h>
using namespace std;
string date[]={" ","MON","TUE","WED","THU","FRI","SAT","SUN"};
int main(void){
	int a,b;
	cin>>a>>b;
	
	int k=1;
	for(int i=1;i<=12;i++){
		for(int j=1;j<=31;j++){
			if(i==2 && j==29){break;}
			if((i==4||i==6||i==9||i==11) && j==31){break;}
			if(i==a && j==b){cout<<date[k]<<'\n';return 0;}
			if(k==7){k=1;}
			else{k++;}
		}
	}
	return 0;
}
