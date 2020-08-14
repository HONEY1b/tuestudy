//1977
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int d[200];

int main(void){
	int n,m;
	int total=0;
	vector<int> v;
	cin>>n>>m;
	for(int i=1;i*i<=10000;i++){
		d[i]=i*i;
		if(n<=i*i && i*i<=m){
			v.push_back(i*i);
			total+=i*i;
		}
	}
	if(total==0){
		cout<<-1<<endl;
	}
	else {
		sort(v.begin(),v.end());

		cout<<total<<"\n"<<v[0];
	}
	return 0;
}
