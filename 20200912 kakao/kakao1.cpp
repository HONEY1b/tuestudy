//kakao 1
#include <string>
#include <vector>
#include<iostream>
using namespace std;

/*
1단계 new_id의 모든 대문자를 대응되는 소문자로 치환합니다.
2단계 new_id에서 알파벳 소문자, 숫자, 빼기(-), 밑줄(_), 마침표(.)를 제외한 모든 문자를 제거합니다.
3단계 new_id에서 마침표(.)가 2번 이상 연속된 부분을 하나의 마침표(.)로 치환합니다.
4단계 new_id에서 마침표(.)가 처음이나 끝에 위치한다면 제거합니다.
5단계 new_id가 빈 문자열이라면, new_id에 "a"를 대입합니다.
6단계 new_id의 길이가 16자 이상이면, new_id의 첫 15개의 문자를 제외한 나머지 문자들을 모두 제거합니다.
     만약 제거 후 마침표(.)가 new_id의 끝에 위치한다면 끝에 위치한 마침표(.) 문자를 제거합니다.
7단계 new_id의 길이가 2자 이하라면, new_id의 마지막 문자를 new_id의 길이가 3이 될 때까지 반복해서 끝에 붙입니다.

...!@BaT#*..y.abcdefghijklm
*/

using namespace std;

string solution(string new_id) {
    string answer = "";
    int len=new_id.size();
    
    //step 1 - upper->lower
    for(int i=0;i<len;i++){
    	new_id[i]=tolower(new_id[i]);	
    }
    
    //step 2 - remove unvalid char tmp에 결과 
    string tmp="";
    for(int i=0;i<len;i++){
		if('a'<=new_id[i] && new_id[i]<='z'){
			tmp.push_back(new_id[i]);
		}else if('0'<=new_id[i] && new_id[i]<='9'){
			tmp.push_back(new_id[i]);
		}else if(new_id[i]=='-' || new_id[i]=='_' || new_id[i]=='.'){
			tmp.push_back(new_id[i]);
		}
    }
    
    //step3 - .. -> . new_id 에 결과 
    len=tmp.length();
    char s=tmp[0];
    new_id="";
    int i=0;
    for(int i=0;i<len;i++){
    	if(tmp[i]=='.' && new_id.back()=='.'){
			continue;
		}else{
			new_id.push_back(tmp[i]);
		}
    }
    
    //step4 tmp에 결과 
    tmp="";
    if(new_id.back()=='.') new_id.pop_back();
    len=new_id.length();
    for(int i=0;i<len;i++){
    	if(i==0 || i==len-1){
			if(new_id[i]=='.') continue;
		}
		tmp.push_back(new_id[i]);
    }
    
    //step5 new_id에 결과 
    new_id="";
    if(tmp.length()==0) new_id="a";
    else new_id=tmp;
    
    //step6 new_id에 결과 
    if(new_id.length()>15){
		while(new_id.length()>15){
			new_id.pop_back();
		}
		if(new_id.back()=='.') new_id.pop_back();
	}else if(new_id.length()<3){
		while(new_id.length()<3){
			new_id.push_back(new_id.back());
		}
	}
	answer=new_id;
    return answer;
}
int main(void){
	string str;
	cin>>str;
	cout<<solution(str);
	
	return 0;
}
