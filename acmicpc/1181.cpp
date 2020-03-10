//1181
#include<bits/stdc++.h>
using namespace std;
bool cmp(string a, string b){
	if(a.length()==b.length()){
		return a<b;
	}else{
		return a.length()<b.length();
	}
}
int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	string str;
	vector<string> v;
	freopen("1181.txt","r",stdin);
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>str;
		v.push_back(str);
	}	
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<t;i++){
		if(i!=0 && v[i]==v[i-1])continue;
		cout<<v[i]<<'\n';
	}
	
	return 0;
}
