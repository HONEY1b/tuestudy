//2042
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int n,t1,t2;
vector<ll> v;
vector<ll> seg;

const ll INF=987654321987654321;

int update(int pos,int val,int node,int start,int end){
	if(pos>end||pos<start){
		return seg[node];
	}
	if(start==end){
		return seg[node]=val;
	}
	int mid=(start+end)>>1;
	return seg[node]=update(pos,val,node*2+1,start,mid)+update(pos,val,node*2+2,mid+1,end);	
}	

void printTree(int h){
    int idx=1;
    ll temp;
    for(int i=0;i<=h;i++){
        for(int j=0;j<(1<<i);j++){
            temp=seg[idx++];
            if(temp==INF)
                printf("FF ");
            else
                printf("%lld ",temp);
        }
        printf("\n");
    }
    printf("\n");
}

int main(void){
	freopen("2042.txt","r",stdin);
	
	scanf("%d %d %d",&n,&t1,&t2);
	int total=t1+t2;
	v.resize(n+1);
	
	for(int i=1;i<=n;i++){
		scanf("%lld",&v[i]);
	}
	
	int h=(int)ceil(log2(n));
	int node=(1<<(1+h));
	seg.resize(node,0);
	
	for(int i=1;i<=n;i++){
		update(i,v[i],1,1,n);
	}
	
	printTree(h);	
	
	while(total--){
		int number,a,b;
		scanf("%d %d %d\n",&number,&a,&b);
		if(number==1){
			update(a*2+1,b,1,1,n);
		}else if(number==2){
			int ans=sum(a,b,1,1,n);
			printf("%lld\n",ans);
		}
		
		printTree(h);
	}
	
	return 0;
}
