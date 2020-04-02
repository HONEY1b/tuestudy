//15886
#include<bits/stdc++.h>
using namespace std;

int main(void){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	freopen("15886.txt","r",stdin);
	
	int n;
	char str[1010];
	
	cin>>n>>str;
	
	int ans=0;
	for(int i=0;i<n-1;i++){
		if(str[i]=='E'&&str[i+1]=='W') ans++;
	}
	
	cout<<ans;
	
	return 0;
}
