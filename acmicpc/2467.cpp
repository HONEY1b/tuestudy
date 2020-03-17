//2467
#include<bits/stdc++.h>
using namespace std;
int n;
vector<long long> pos;
vector<long long> neg;
int p,q;

int main(void){
	freopen("2467.txt","r",stdin);
	scanf("%d",&n);	
	for(int i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		if(a>=0) pos.push_back(a);
		else neg.push_back(a);
	}
	int mini=0x7fffffff;
	for(int i=0;i<neg.size();i++){
		int tmpmin=abs(neg[i]+pos[pos.size()-1]);
		for(int j=pos.size()-1;j>=0;j--){
			int c=abs(neg[i]+pos[j]);
			if(c>tmpmin) break;
			tmpmin=c;
			if(c<mini){
				mini=c;
				p=neg[i],q=pos[j];
			}
		}
	}
	printf("%d %d\n",p,q);
	
	
	return 0;
}
