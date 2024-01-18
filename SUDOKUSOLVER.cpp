#include<bits/stdc++.h>
using namespace std;
bool isSafe(int i,int j,vector<vector<char>>& board,char val){
    for(int p=0;p<board.size();p++){
        // NOt in Row
        if(board[i][p]==val)return false;
        // Not in Col
        if(board[p][j]==val)return false;
        // Not in 3*3 matrix
        if(board[3*(i/3)+p/3][3*(j/3)+p%3]==val)return false;
    }
    return true;
}
bool solving(vector<vector<char>>& board){
    int n=board.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(board[i][j]=='.'){
                for(char ch='1';ch<='9';ch++){
                    if(isSafe(i,j,board,ch)){
                        board[i][j]=ch;
                        bool pos=solving(board);
                        if(pos)return true;
                        else
                        board[i][j]='.';
                    }
                }
                return false;
            }
        }
    }
    return true;
}
void solve(vector<vector<char>>& board){
     solving(board);
}
int main(){
    vector<vector<char>> board;
    for(int i=0;i<9;i++){
        vector<char> vec;
        for(int j=0;j<9;j++){
            char board;
        cin>>board;
        vec.push_back(board);
        }
        board.push_back(vec);
    }
solve(board);
 for(int i=0;i<9;i++){
        for(int j=0;j<9;j++)
        cout<<board[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}