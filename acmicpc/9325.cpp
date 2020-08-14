//9325
#include<iostream>
using namespace std;

int main(void){
	freopen("9325.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int car;
		cin>>car;
		int optionNum;
		cin>>optionNum;
		for(int i=0;i<optionNum;i++){
			int a,b;
			cin>>a>>b;
			car+=a*b;	
		}
		cout<<car<<endl;
	}
	return 0;
}
