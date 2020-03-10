//1755
#include<bits/stdc++.h>
using namespace std;
int a,b;
string alp[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
vector<pair<string,int> > change;
int arr[100];

//bool cmp(auto a,auto b){
//	return a.first>b.first;	
//}

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin>>a>>b;
	int num=b-a+1;
	for(int i=0;i<num;i++){
		arr[i]=a;
		a++;	
	}
	
//	for(int i=0;i<num;i++){cout<<arr[i]<<" ";}
	for(int i=0;i<num;i++){
		int x=arr[i]/10,y=arr[i]%10;
		if(x==0){
			change.push_back({alp[y],arr[i]});
			}
		else{
			string str=alp[x]+" "+alp[y];
			change.push_back({str,arr[i]});
		}
	}
	sort(change.begin(),change.end());
	int t=0;
	for(int i=0;i<num;i++){
		cout<<change[i].second<<' ';
		t++;
		if(t==10){
			cout<<'\n';
			t=0;
		}
	}
	
	

	return 0;
}
