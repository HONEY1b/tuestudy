#include <iostream>
#include <unistd.h>
#include<cstring>
#include<vector>

using namespace std;

int compute(int n);

int compute(int n){
	return n*10;
}

int main() {
	// [!!주의!!] compute 함수는 이미 구현되어있지만, 숨김처리되어 있습니다. 호출해서 테스트 해주세요.
	
	int Max=0x7fffffff;
	vector< pair<int,int> > v;
	
	int num;

	while(!cin.eof()){
		cin>>num;
		bool find=false;
		for(int i=0;i<v.size();i++){
			if(v[i].first==num){
				cout<<v[i].second<<" ";
				find=true;
			}
		}
		if(!find){
			int a=compute(num);
			cout<<a<<" ";
			v.push_back(make_pair(num,a));
		}
	}
	return 0;
}

