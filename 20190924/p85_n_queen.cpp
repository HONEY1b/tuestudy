//p85_n_queen
#include<stdio.h>
#include<math.h>
int q[10];
int n=0;
int cnt=0;

bool promising(int i){
	if(i == 1) return true;
	for(int j=1;j<i;j++){
		if(q[j]==q[i]||abs(q[i]-q[j])==(i-j))
			return false;
	}
	return true;
}
void f(int level){
	if(level>n){
		cnt++;
	}
	
	for(int i=1; i<=n; i++){
		q[level]=i;
		if(promising(level)){
			f(level+1);
		}
		
	}
	
}

int main(void){
	
	//freopen("p_85_n_queen.txt","r",stdin);
	scanf("%d",&n);
	
	f(1);
	printf("%d",cnt);
	return 0;
}
