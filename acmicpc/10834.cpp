//10834
//±¦È÷ ¾î·Æ°Ô ¾È³ª´²¶³¾îÁö´Â°É »ý°¢Çß´Ù.. 
#include<bits/stdc++.h>
using namespace std;
int belt;
int dir;
vector< pair<int,int> >v;

int main(void){
	freopen("10834.txt","r",stdin);
	
	scanf("%d",&belt);
	long long fir=1,sec=1,ans=1;	
	for(int i=0;i<belt;i++){
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		dir+=c;
		v.push_back(make_pair(a,b));
		//fir*=a,sec*=b;
		//if(sec%fir==0) {fir=1,sec=1;}
		ans=(ans/a)*b;
	}
//	ans=sec%fir;
//	if(ans==0) ans=10;
//	for(int i=0;i<belt;i++){printf("%d %d\n",v[i].first,v[i].second);}
	printf("%d %d\n",dir%2,ans);
	return 0;
}
