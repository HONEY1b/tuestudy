//2170
#include<bits/stdc++.h>
using namespace std;
int n;
vector< pair<int,int> > v;
vector< pair<int,int> > line;
int main(void){
	freopen("2170.txt","r",stdin);
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		if(a<b){
			v.push_back(make_pair(a,b));
		}
		else{
			v.push_back(make_pair(b,a));
		}
	}
	sort(v.begin(),v.end());
	
	line.push_back(make_pair(v[0].first,v[0].second));
	int t=0;
	for(int i=1;i<v.size();i++){
		int start=line[t].first,end=line[t].second;
		int s1=v[i].first,e1=v[i].second;
		if(start<=s1 && s1<end){
			if(end<e1) {
				line[t].second=e1;
			}
		}else if(end<=s1){
			line.push_back(make_pair(s1,e1));
			t++;
		}
	}
	int total=0;
	for(int i=0;i<line.size();i++){
		total+=line[i].second-line[i].first;
	}
	
	printf("%d\n",total);
	
	return 0;
}
