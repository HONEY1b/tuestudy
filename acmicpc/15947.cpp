//15947
/*
baby sukhwan tururu turu
very cute tururu turu
in bed tururu turu
baby sukhwan
*/
#include<iostream>
using namespace std;

int main(void){
	int n;
	cin>>n;
	int a=n/14,b=n%14;
	if(b==3 || b==7 || b==11){
		if(a==0){
			cout<<"tururu";	
		}else if(a==1){
			cout<<"turururu";	
		}else if(a==2){
			cout<<"tururururu";
		}else{
			cout<<"tu+ru*"<<a+2<<"\n";	
		}
	}else if(b==4 || b==8 || b==12){
		if(a==0){
			cout<<"turu";	
		}else if(a==1){
			cout<<"tururu";	
		}else if(a==2){
			cout<<"turururu";
		}else if(a==3){
			cout<<"tururururu";
		}else{
			cout<<"tu+ru*"<<a+1<<"\n";	
		}
	}else if(b==1 || b==13){
		cout<<"baby\n";
	}else if(b==2 || b==0){
		cout<<"sukhwan\n";
	}else if(b==5){
		cout<<"very\n";
	}else if(b==6){
		cout<<"cute\n";
	}else if(b==9){
		cout<<"in\n";
	}else if(b==10){
		cout<<"bed\n";
	}
	
	return 0;
}
