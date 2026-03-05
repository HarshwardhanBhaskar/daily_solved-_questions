// valid sudoko is in classical matrix problem, we need to check if the current number is in the same row, column and 3*3 box
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool isValid(vector<vector<char>>&board){
        int row[9][9]={0},col[9][9]={0},boxes[9][9]={0};
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;
                int num=board[i][j]-'1';
                int box=(i/3)*3+j/3;
                if(row[i][num] || col[j][num] || boxes[box][num]){
                     return false;
                }
            row[i][num]=1;
            col[j][num]=1;
            boxes[box][num]=1;

        }
    }
    return true;
}
};
int main(){
    vector<vector<char>>board(9,vector<char>(9));
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>board[i][j];
        }
    }
    Solution s;
    if(s.isValid(board)){
        cout<<"Valid Sudoku"<<endl;
    }else{
        cout<<"Invalid Sudoku"<<endl;
    }
    return 0;
}