//1197
#include<bits/stdc++.h>
using namespace std;
int arr[10010][10010];
int d[10010][10010];
int node,edge;


struct Node{
	int x,y,cost;	
};
vector<Node> v;
bool cmp(Node n1,Node n2){
	return n1.cost<n2.cost;	
}

void printA(){
	for(int i=1;i<=node;i++){
		for(int j=1;j<=node;j++){
			cout<<arr[i][j]<<" ";	
		}cout<<endl;
	}cout<<endl<<endl;	
}

int main(void){
	freopen("1197.txt","r",stdin);
		
	cin>>node>>edge;
	for(int i=0;i<edge;i++){
		int a,b,c;
		cin>>a>>b>>c;
		arr[a][b]=c;
		arr[b][a]=c;
		v.push_back({a,b,c});
	}
	
	sort(v.begin(),v.end(),cmp);
	
	
	return 0;
}
