//line 1

#include <string>
#include <vector>
#include<iostream>
#include<cstring>

using namespace std;

int solution(vector<vector<int>> boxes) {
	int checkBox[1000010];
	int Max=0,boxNum=boxes.size();
	memset(checkBox,false,sizeof(checkBox));
    for(int i=0;i<boxes.size();i++){
    	for(int j=0;j<boxes[i].size();j++){
    		checkBox[boxes[i][j]]++;	
    		if(Max<boxes[i][j]) Max=boxes[i][j];
    	}
    }
    int total=0;
    for(int i=1;i<=Max;i++){
    	if(total>=boxNum) break;
    	if(checkBox[i]%2 == 0){
    		total=total+(checkBox[i]/2);
    		checkBox[i]=0;
    	}else{
    		total=total+(checkBox[i]/2);
    		checkBox[i]=1;
    	}
    }
    
    int answer = 0;
    if(total<boxNum){
    	for(int i=0;i<=Max;i++){
    		if(total+answer >= boxNum) break;
    		if(checkBox[i]==1){
    			answer++;
    			checkBox[i]--;
    		}
    	}
    }
    return answer;
}
