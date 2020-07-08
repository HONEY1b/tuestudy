#include <string>
#include<stack>
#include<iostream>
#include <vector>

using namespace std;
int board[5][5]={{0,0,0,0,0},{0,0,1,0,3},{0,2,5,0,3},{4,2,4,4,2},{3,5,1,3,1}};
int moves[100]={1,5,3,5,1,2,1,4};
void printD(){
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("%d ",board[i][j]);	
		}
		printf("\n");
	}
	printf("\n");
}
int solution() {
    stack<int> s;
    int answer = 0;
    s.push(0);
    for(int i=0;i<8;i++){
    	//printD();
        int move=moves[i]-1; //크레인이 가는 위치
        //printf("%d ",move);
        for(int j=0;j<5;j++){
            if(board[j][move]!=0){
            	//printf("%d %d\n",move,board[j][move]);
                if(s.top()==board[j][move]){
                    answer++;
                    s.pop();
                }else{
                	//printf("%d\n",s.top());
                    s.push(board[j][move]);
                }
                board[j][move]=0;
                break;
            }
    	}
    }
    return answer;
}

int main(void){
	printf("%d\n",solution());	
	return 0;	
}
