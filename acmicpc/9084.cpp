//9084
#include<iostream>
#include<string.h>
using namespace std;

int main(void){
	ios_base::sync_with_stdio();
	cin.tie(0);cout.tie(0);
	freopen("9084.txt","r",stdin);
	int t;
	cin>>t;
	
	while(t--){
		int d[10010];
		int coin[25];
		int n,money;
		memset(d,0,sizeof(d));
		memset(coin,0,sizeof(coin));
		
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>coin[i];
			d[coin[i]]=1;	
		}
		money=0;
		cin>>money;
		d[0]=1;
		for(int i=0;i<=money;i++){
			if(d[i]==0)continue;
			for(int j=0;j<n;j++){
				if(d[i+coin[j]]==0){
					d[i+coin[j]]=1;	
				}
				else{
					d[i+coin[j]]+=d[i];
				}
			}
		}
		cout<<d[money]<<endl;
		cout<<"\n\n----------------------------------\n\n"<<endl;
	}
	
	
	return 0;
}
