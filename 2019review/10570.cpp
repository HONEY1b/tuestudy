//10570
#include<bits/stdc++.h>
using namespace std;
int arr[1010];
int main(void){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    while(n--){
    	int v,max=-987654321,maxin=987654321;
    	cin >> v;
    	for(int i=0;i<v;i++){
    		int a;
			cin>>a;
			arr[a]++;
			if(max<arr[a]&&maxin>a){
				max=arr[a];
				maxin=a;
			}
		}
		printf("%d\n",maxin);	
	}
	
	return 0;
}
