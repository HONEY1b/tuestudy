//line3
/*
1.숫자의 길이를 파악한다
2.길이의 절반 근처에서 다음으로 진행한다. 
*/
#include <string>
#include <vector>
#include<iostream>
#include<cmath>
using namespace std;

int leng(int n){
	int tmp=n,len=0;
	while(tmp!=0){
		tmp/=10;
		len++;
	}
	return len;
}

vector<int> solution(int n) {
    vector<int> answer;
    if(n<10){
    	answer.push_back(0);
		answer.push_back(n);	
		return answer;
    }
    //n<10일때까지 반복한다.
	int ans=0; 
   	while(n>=10){ 
    	//숫자의 길이를 파악한다. 
    	int len=leng(n);
    	
    	//처음부터 돌면서 숫자의 합이 가장 작은 2개를 찾는다.
    	int minA=987654231,minB=987654321;
		for(int i=1;i<=len;i++){
			//숫자 2개로 나눈다
			int div=pow(10,i);
			int a=n/div,b=n%div;
			//길이의 합이 len과 동일한지 확인(0으로 시작 방지)
			int lenA=leng(a),lenB=leng(b);
			if(lenA+lenB != len) continue;
			//두 수의 합이 작은 경우 minA,minB 수정 
			if(a+b < minA+minB){
				minA=a;
				minB=b;	
			}
		}
		n=minA+minB;
		ans++;
	}
	
	answer.push_back(ans);
	answer.push_back(n)
    return answer;
}
