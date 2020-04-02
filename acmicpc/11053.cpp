//11053
#include<stdio.h>
int arr[1010],s[1010];
int t;

int main(void){
	freopen("11053.txt","r",stdin);
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d",&arr[i]);	
	}
	
	for(int i=0;i<t;i++){
		s[i]=1;
		for(int j=0;j<i;j++){
			if(arr[i]>arr[j] && s[i]<s[j]+1){
				s[i]=s[j]+1;
			}
		}
	}
	
	int ans=0;
	for(int i=0;i<t;i++){
		if(s[i]>ans){
			ans=s[i];
		}
	}
	
	printf("%d\n",ans);
	
	return 0;
}
