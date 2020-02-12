//2565
#include<bits/stdc++.h>
using namespace std;
vector< pair<int,int> > v;
int d[510];
int n;
int main(void){
	freopen("2565.txt","r",stdin);
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		v.push_back(make_pair(a,b));
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		d[i]=1;
		for(int j=0;j<i;j++){
			if(v[i].second>v[j].second && d[i]<d[j]+1){
				d[i]=d[j]+1;
			}
		}
	}
	int maxi=0;
	for(int i=0;i<v.size();i++){
		if(maxi<d[i]){
			maxi=d[i];
		}
	}
	printf("%d\n",n-maxi);
	return 0;
}
