//7568
#include<bits/stdc++.h>
using namespace std;
int n;
int arr[55];
vector< pair<int,int> > v;

int main(void){
	freopen("7568.txt","r",stdin);
	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		v.push_back(make_pair(a,b));
	}
	
	int rank,same;
	for(int i=0;i<n;i++){
		rank=1,same=0;
		for(int j=0;j<n;j++){
			if(i!=j){
				if(v[i].first<v[j].first && v[i].second<v[j].second){
					rank++;
				}
//				else if((v[i].first>v[j].first && v[i].second<v[j].second) || (v[i].first<v[j].first && v[i].second>v[j].second)){
//					same++;
//				}
			}
		}
		arr[i]=rank;
	}
	for(int i=0;i<n;i++){
		printf("%d\n",arr[i]);	
	}
	
	
	
	return 0;
}
