//kakao 1
#include <string>
#include <vector>
#include<iostream>
using namespace std;

/*
1�ܰ� new_id�� ��� �빮�ڸ� �����Ǵ� �ҹ��ڷ� ġȯ�մϴ�.
2�ܰ� new_id���� ���ĺ� �ҹ���, ����, ����(-), ����(_), ��ħǥ(.)�� ������ ��� ���ڸ� �����մϴ�.
3�ܰ� new_id���� ��ħǥ(.)�� 2�� �̻� ���ӵ� �κ��� �ϳ��� ��ħǥ(.)�� ġȯ�մϴ�.
4�ܰ� new_id���� ��ħǥ(.)�� ó���̳� ���� ��ġ�Ѵٸ� �����մϴ�.
5�ܰ� new_id�� �� ���ڿ��̶��, new_id�� "a"�� �����մϴ�.
6�ܰ� new_id�� ���̰� 16�� �̻��̸�, new_id�� ù 15���� ���ڸ� ������ ������ ���ڵ��� ��� �����մϴ�.
     ���� ���� �� ��ħǥ(.)�� new_id�� ���� ��ġ�Ѵٸ� ���� ��ġ�� ��ħǥ(.) ���ڸ� �����մϴ�.
7�ܰ� new_id�� ���̰� 2�� ���϶��, new_id�� ������ ���ڸ� new_id�� ���̰� 3�� �� ������ �ݺ��ؼ� ���� ���Դϴ�.

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
    
    //step 2 - remove unvalid char tmp�� ��� 
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
    
    //step3 - .. -> . new_id �� ��� 
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
    
    //step4 tmp�� ��� 
    tmp="";
    if(new_id.back()=='.') new_id.pop_back();
    len=new_id.length();
    for(int i=0;i<len;i++){
    	if(i==0 || i==len-1){
			if(new_id[i]=='.') continue;
		}
		tmp.push_back(new_id[i]);
    }
    
    //step5 new_id�� ��� 
    new_id="";
    if(tmp.length()==0) new_id="a";
    else new_id=tmp;
    
    //step6 new_id�� ��� 
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
