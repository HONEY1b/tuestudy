//line3
/*
1.������ ���̸� �ľ��Ѵ�
2.������ ���� ��ó���� �������� �����Ѵ�. 
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
    //n<10�϶����� �ݺ��Ѵ�.
	int ans=0; 
   	while(n>=10){ 
    	//������ ���̸� �ľ��Ѵ�. 
    	int len=leng(n);
    	
    	//ó������ ���鼭 ������ ���� ���� ���� 2���� ã�´�.
    	int minA=987654231,minB=987654321;
		for(int i=1;i<=len;i++){
			//���� 2���� ������
			int div=pow(10,i);
			int a=n/div,b=n%div;
			//������ ���� len�� �������� Ȯ��(0���� ���� ����)
			int lenA=leng(a),lenB=leng(b);
			if(lenA+lenB != len) continue;
			//�� ���� ���� ���� ��� minA,minB ���� 
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
