//2711
#include<bits/stdc++.h>
using namespace std;
char * str;

int main(void){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t,n;
    cin >>t;
    while(t--){
    	cin >> n;
    	cin >> str;
    	cout << str;
		int llen = strlen(str);
		for(int i=0;i<llen;i++){
			if(i!=n-1){
				printf("%s",str[i]);
			}
		}
	}
	
	return 0;
}
