//10570
#include<bits/stdc++.h>
using namespace std;

int arr[1010];
int num=1000;
int main(void){
	freopen("10570.txt","r",stdin);
	int t;
	scanf("%d",&t);
	while(t--){
		memset(arr,0,sizeof(arr));
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			int a;
			scanf("%d",&a);
			arr[a]++;
		}
		int ans=987654321,cnt=0;
		for(int i=1;i<=num;i++){
			if(cnt<arr[i]){
				ans=i,cnt=arr[i];
			}else if(cnt==arr[i]){
				if(i<ans){
					ans=i,cnt=arr[i];	
				}
			}
		}
		printf("%d\n",ans);
	}
	
	
	return 0;
}
