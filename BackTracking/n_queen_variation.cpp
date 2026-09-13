#include<iostream>
#include<string>
#include<vector>
using namespace std;



void printBoard(vector<vector <char>> board){
    int n = board.size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << board[i][j] << " ";
        }
        cout<<endl;
    }
    cout<<"------------\n";
}

bool isSafeQueen(vector<vector<char>> board, int row, int col) {

    // horizontal 
    int n = board.size();
    for(int j = 0; j < n; j++){
        if(board[row][col] == 'Q'){
            return false;
        }
    }

    // vertical
    for(int i = 0; i < row; i++) {  // i < n bhi likh sakte hai lekin row likh kar more optimize kar diya hai
        if(board[i][col] == 'Q') {
            return false;
        }
    }

    // diagonal
    // 1. diagonal left
    for(int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if(board[i][j] == 'Q'){
            return false;
        }
    }
    //2. diagonal right
    for(int i = row, j = col; i >= 0 && j < n; i--, j++) {
        if(board[i][j] =='Q') {
            return false;
        }
    }

    return true;
} 


int nQueens(vector<vector<char>> board, int row){
    int n = board.size();

    // base case
    if(row == n) {
        printBoard(board);
        return 1;

    }
    int count = 0;  
    for(int j = 0; j < n; j++){
        if(isSafeQueen(board, row, j)) {
            board[row][j] = 'Q';
            count += nQueens(board, row+1);
            board[row][j] = '.';

        }
        
    }
    return count; //number of all possible solution
}

int main(){
    // Board Ready
    vector<vector <char>> board;
    int n = 4;

    for(int i = 0; i < n; i++){
        vector<char> newRow;
        for(int j = 0; j < n; j++){
            newRow.push_back('.');
        }
        board.push_back(newRow);
    }

    //printBoard(board);
    int count = nQueens(board, 0);
    cout<<"count: " <<count<<endl;
    return 0;
}

