//16212
#include<bits/stdc++.h>
using namespace std;
int neg[500010];//~1
int pos[500010];//0~
int main(void){
	freopen("16212.txt","r",stdin);
	int n;
	cin>>n;
	int poscnt=0,negcnt=0;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		if(a>=0){
			pos[poscnt]=a;
			poscnt++;
		}else{
			neg[negcnt]=a;
			negcnt++;	
		}
	}
	sort(neg,neg+negcnt);
	sort(pos,pos+poscnt);
	for(int i=0;i<negcnt;i++){
		cout<<neg[i]<<" ";	
	}
	for(int i=0;i<poscnt;i++){
		cout<<pos[i]<<" ";	
	}
	
	return 0;
}
