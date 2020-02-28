//15596
#include<iostream>
#include <vector>
int n;
long long sum(std::vector<int> &a) {
	long long ans = 0;
    for(int i=0;i<a.size();i++){
		ans+=a[i];
    }
	return ans;
}

int main(void){
	std::vector<int> a;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int c;
		scanf("%d",&c);
		a.push_back(c);
	}
	
	long long ans= sum(a);
	return 0;
}
