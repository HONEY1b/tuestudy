//kakao 2
/*
1.�� orders���� course ������ ��ŭ ���� - permutation���� ������
2. course����� order���� ũ�� ���� order�� 
3.���������� �ƴѰ�� �ٽ� 1��
4.checked vector�� �ִ°�� �ٽ� ���� course
5.���õ� �ڵ�� checked vector�� ����
6. ��� order���� �ش� ���ڵ��� �����ϰ� ���ִ��� Ȯ��
7. �������� num����
9. num�� 2�̻��̸� answer�迭�� �߰� 

*/
#include <string>
#include <vector>
#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

void printD(vector<string> orders){
	for(int i=0;i<orders.size();i++){
		cout<<orders[i]<<endl;
	}
	cout<<"\n----------------------------\n";
}

bool checkStr(string str,string check){
	int len=str.length();
	int len2=check.length();
	for(int i=0;i<len;i++){
		bool valid=false;
		for(int j=0;j<len2;j++){
			if(str[i]==check[j]) {
				valid=true;
				break;
			}
		}
		if(valid==false) return false;
	}
	return true;
}
vector<string> solution(vector<string> orders, vector<int> course) {
    vector<string> answer;
    vector<string> checked; 
    
	//orders ���ĺ� ������ ���� 
    for(int i=0;i<orders.size();i++){
    	sort(orders[i].begin(),orders[i].end());
    }
	sort(orders.begin(),orders.end());
	
    //�� course ���� order���� ���ڿ� ���� 
    for(int j=0;j<course.size();j++){
    	int maxCourse=0;
    	vector< pair<int,string> > maxV;
    	
    	//�� orders���� ����� �� ���� 
    	for(int i=0;i<orders.size();i++){
    		
    		//course�� orders[i]�� ���̺��� ������� ���� orders�� ���� 
    		if(orders[i].size()<course[j]) continue;
    		
    		//orders[i]���� course��ŭ ���ڿ� ���� 
	    	do{
	    		bool valid=true;
	    		string tmp=orders[i],str=tmp.substr(0,course[j]);
	    		
	    		//���ڿ��� ���������� �ƴϸ� �������� ���� 
	    		for(int k=0;k<str.length()-1;k++){
	    			if(str[k]>str[k+1]){
	    				valid=false;
						break;	
	    			}
	    		}
	    		if(valid==false) continue;
	    		
	    		//�̹� Ȯ���� ���ڿ����� Ȯ��
	    		valid=true;
	    		for(int k=0;k<checked.size();k++){
	    			string tmp=checked[k];
	    			if(tmp.compare(str)==0){
	    				valid=false;
						break;
	    			}
	    		}
	    		if(valid==false) continue;
	    		
	    		//���� ���ڿ��̸� checked�� push 
	    		checked.push_back(str);
	    		//��� orders�� ���� str�� ����ִ��� Ȯ�� 
	    		int ans=0;
	    		for(int k=0;k<orders.size();k++){
	    			if(k==i) {
						ans++;
						continue;
					}
	    			if( checkStr(str,orders[k]) ){ans++;}
	    		}
	    		if(ans>=2 && ans>=maxCourse) {
	    			maxCourse=ans;
	    			maxV.push_back( pair<int,string>(ans,str) );
				}
    		}while(next_permutation(orders[i].begin(),orders[i].end()));
    	}
    	for(int k=0;k<maxV.size();k++){
			if(maxV[k].first == maxCourse){
				answer.push_back(maxV[k].second);	
			}
		}
    }
    sort(answer.begin(),answer.end());
    answer.erase(unique(answer.begin(),answer.end()),answer.end());
	
    return answer;
}

int main(void){
	freopen("kakao2.txt","r",stdin);
	vector<string> o;
	vector<int> c;
	
	int n=6;
	for(int i=0;i<n;i++){
		string tmp;
		cin>>tmp;
		o.push_back(tmp);
	}
	
	int m=3;
	for(int i=0;i<m;i++){
		int tmp;
		cin>>tmp;
		c.push_back(tmp);
	}
	vector<string> ans;
	ans=solution(o,c);
	
	return 0;
}
