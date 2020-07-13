//10814
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Pair{
	int index,age;
	string name;	
};

bool cmp(Pair a,Pair b){
	if(a.age<b.age){return a.age<b.age;}
	else if(a.age==b.age){
		return a.index<b.index;
	}
	return a.age<b.age;
}

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	freopen("10814.txt","r",stdin);
	
	int t;
	cin>>t;
	vector<Pair> v;
	for(int i=0;i<t;i++){
		int a;
		string b;
		Pair p;
		cin>>a>>b;
		p.index=i;p.age=a;p.name=b;	
		v.push_back(p);
	}
	
	sort(v.begin(),v.end(),cmp);
	
	for(int i=0;i<t;i++){
		cout<<v[i].age<<" "<<v[i].name<<'\n';
	}
	
	return 0;
}
