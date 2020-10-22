//kakao 2
/*
1.각 orders에서 course 사이즈 만큼 선택 - permutation으로 돌리기
2. course사이즈가 order보다 크면 다음 order로 
3.오름차순이 아닌경우 다시 1로
4.checked vector에 있는경우 다시 다음 course
5.선택된 코드는 checked vector에 저장
6. 모든 order에서 해당 문자들이 동일하게 들어가있는지 확인
7. 들어가있으면 num증가
9. num이 2이상이면 answer배열에 추가 

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
    
	//orders 알파벳 순으로 정렬 
    for(int i=0;i<orders.size();i++){
    	sort(orders[i].begin(),orders[i].end());
    }
	sort(orders.begin(),orders.end());
	
    //각 course 별로 order에서 문자열 추출 
    for(int j=0;j<course.size();j++){
    	int maxCourse=0;
    	vector< pair<int,string> > maxV;
    	
    	//각 orders별로 경우의 수 진행 
    	for(int i=0;i<orders.size();i++){
    		
    		//course가 orders[i]의 길이보다 길어지면 다음 orders로 진행 
    		if(orders[i].size()<course[j]) continue;
    		
    		//orders[i]에서 course만큼 문자열 추출 
	    	do{
	    		bool valid=true;
	    		string tmp=orders[i],str=tmp.substr(0,course[j]);
	    		
	    		//문자열이 오름차순이 아니면 다음으로 진행 
	    		for(int k=0;k<str.length()-1;k++){
	    			if(str[k]>str[k+1]){
	    				valid=false;
						break;	
	    			}
	    		}
	    		if(valid==false) continue;
	    		
	    		//이미 확인한 문자열인지 확인
	    		valid=true;
	    		for(int k=0;k<checked.size();k++){
	    			string tmp=checked[k];
	    			if(tmp.compare(str)==0){
	    				valid=false;
						break;
	    			}
	    		}
	    		if(valid==false) continue;
	    		
	    		//없는 문자열이면 checked에 push 
	    		checked.push_back(str);
	    		//모든 orders에 대해 str이 들어있는지 확인 
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
