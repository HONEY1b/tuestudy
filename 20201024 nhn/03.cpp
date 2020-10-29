#include <bits/stdc++.h>

using namespace std;

void solution2(string orderArr){
	//1. 숫자가 오는경우
		//다음에 () 혹은
	
		//문자가 온다
	
	//2. 문자다음에 괄호가 오는 경우
		//괄호앞,뒤로 문자를 추가
	
	stack<char> s;
	s.push(orderArr[0]);
	for(int i=0;i<orderArr.size();i++){
		if(orderArr[i]!=')'){
			s.push(orderArr[i]);
		}else if(orderArr[i]==')'){
			string tmp="";
			
			// ( 이전까지의 문자 빼기
			while(!(s.top()=='(')){
				tmp.push_back(s.top());
				s.pop();
			}
			s.pop();
			reverse(tmp.begin(),tmp.end());
			
			//괄호 앞 문자가 숫자라면 해당 수만큼 반복
			if(0<=s.top()-'0' && s.top()-'0'<=9){
				string tmp2=tmp;
				for(int ii=1;ii<s.top()-'0';ii++){
					tmp+=tmp2;
				}
			}else{
				tmp=s.top()+tmp+s.top();
			}
			s.pop();
			
			//스택에 다시 넣음
			for(int ii=0;i<ii<tmp.size();ii++){
				s.push(tmp[i]);
			}
		}
	}
	string ans="";
	while(!s.empty()){
		ans.push_back(s.top());
		s.pop();
	}
	reverse(ans.begin(),ans.end());
	cout<<"답 : "<<ans<<endl;
}

void solution(int numOfOrder, string *orderArr) {
  // TODO: 이곳에 코드를 작성하세요. 추가로 필요한 함수와 전역변수를 선언해서 사용하셔도 됩니다.
	
	for(int i=0;i<numOfOrder;i++){
		solution2(orderArr[i]);
		cout<<"\n-----------\n";
	}
}

struct input_data {
  int numOfOrder;
  string *orderArr;
};

void process_stdin(struct input_data& inputData) {
  string line;
  istringstream iss;

  getline(cin, line);
  iss.str(line);
  iss >> inputData.numOfOrder;

  inputData.orderArr = new string[inputData.numOfOrder];
  for (int i = 0; i < inputData.numOfOrder; i++) {
    getline(cin, line);
    iss.clear();
    iss.str(line);
    iss >> inputData.orderArr[i];
  }
}

int main() {
  struct input_data inputData;
  process_stdin(inputData);

  solution(inputData.numOfOrder, inputData.orderArr);
  return 0;
}