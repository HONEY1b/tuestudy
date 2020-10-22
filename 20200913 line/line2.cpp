//line2

#include <string>
#include<queue>
#include <vector>
#include<iostream>

using namespace std;

vector<int> solution(vector<int> ball, vector<int> order) {
    vector<int> answer;
    while(ball.size()>0){
    	for(int i=0;i<order.size();){
			if(ball[0] == order[i]){
				answer.push_back(order[i]);
				ball.erase(ball.begin());
				order.erase(order.begin()+i);
				i=0;
			}else if(ball.back()  == order[i]){
				answer.push_back(order[i]);
				ball.pop_back();
				order.erase(order.begin()+i);
				i=0;
			}else{
				i++;	
			}
		}
    }
    
    return answer;
}
