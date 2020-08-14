//2845
#include<iostream>
using namespace std;
int main(void){
	freopen("2845.txt","r",stdin);
	int n,m,a,b,c,d,e;
	cin>>n>>m;
	int total=n*m;
	cin>>a>>b>>c>>d>>e;
	a-=total,b-=total,c-=total,d-=total,e-=total;
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
	
	return 0;
}
