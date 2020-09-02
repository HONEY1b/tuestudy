//10162
#include<bits/stdc++.h>
using namespace std;
int n;
int ans=987654321,ansA,ansB,ansC;
int INF=987654321;
int d[10010][4];
void f(int time,int numA,int numB,int numC){
	if((numA+numB+numC)>=ans) return;
	if(time==n){
		if(ans>(numA+numB+numC)){
			ans=(numA+numB+numC);	
			ansA=numA,ansB=numB,ansC=numC;
		}
		return;
	}
	if(time>n)
		return;
	//cout<<time<<" "<<d[time][0]<<" "<<numA<<" "<<numB<<" "<<numC<<endl;
	f(time+370,numA+1,numB+1,numC+1);
	f(time+360,numA+1,numB+1,numC);
	f(time+310,numA+1,numB,numC+1);
	f(time+70,numA,numB+1,numC+1);
	f(time+300,numA+1,numB,numC);
	f(time+60,numA,numB+1,numC);
	f(time+10,numA,numB,numC+1);
}

void dp(int time,int numA,int numB,int numC){
	if((numA+numB+numC)>=d[time][0]){
		return;	
	}
	if(time>n)
		return;
	if(time==n){
		if(d[time][0]>(numA+numB+numC)){
			d[time][0]=numA+numB+numC;
			d[time][1]=numA;
			d[time][2]=numB;
			d[time][3]=numC;
		}
		return;
	}
	if(d[time][0]!=INF){
		return;	
	}
	cout<<time<<" "<<d[time][0]<<" "<<numA<<" "<<numB<<" "<<numC<<endl;
	dp(time+370,numA+1,numB+1,numC+1);
	dp(time+360,numA+1,numB+1,numC);
	dp(time+310,numA+1,numB,numC+1);
	dp(time+70,numA,numB+1,numC+1);
	dp(time+300,numA+1,numB,numC);
	dp(time+60,numA,numB+1,numC);
	dp(time+10,numA,numB,numC+1);
}

int main(void){
	cin>>n; // n√ 	
	for(int i=0;i<=10000;i++){
		d[i][0]=d[i][1]=d[i][2]=d[i][3]=INF;
	}
	
	//f(0,0,0,0); 
//	if(ansA==0&&ansB==0&&ansC==0)
//		cout<<-1<<endl;
//	else
//		cout<<ansA<<" "<<ansB<<" "<<ansC<<endl;
		
	dp(0,0,0,0);
	if(d[n][0]==INF){
		cout<<-1<<endl;	
	}
	else{
		cout<<d[n][1]<<" "<<d[n][2]<<" "<<d[n][3]<<"\n";	
	}
	
	return 0;
}
