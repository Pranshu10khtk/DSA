#include<iostream>
using namespace std;

void printSudoku(int sudoku[][9]) {
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cout<<sudoku[i][j] << " ";
        }
        cout<<endl;
    }
}

// isSafe

bool isSafe(int sudoku[9][9], int row, int col, int digit) {

    // vertical
    for(int i = 0; i <= 8; i++) {
        if(sudoku[i][col] == digit) {
            return false;
        }
    }

    // horizontal
    for(int j = 0; j <= 8; j++) {
        if(sudoku[row][j] == digit) {
            return false;
        }
    }

    //3x3 grid
    int startRow = (row/3) * 3; 
    int startCol = (col/3) * 3;;

    for(int i = startRow; i <= startRow + 2; i++) {
        for(int j = startCol; j <= startCol + 2; j++) {
            if(sudoku[i][j] == digit) {
                return false;
            }
        }
    }
    return true;
}

bool sudokuSolver(int sudoku[9][9], int row, int col) {

    // base case
    if(row == 9) {
        //sudoku solve
        printSudoku(sudoku);
        return true;
    }
    // calculate nextrow and colum
    int nextrow = row;
    int nextcol = col+1;
    if(col + 1 == 9){
        nextrow = row+1;
        nextcol = 0;
    }

    // If cell already contains a number
    if(sudoku[row][col] != 0){
        return sudokuSolver(sudoku, nextrow, nextcol);
    }

    // Try digits 1 to 9
    for(int digit = 1; digit <= 9; digit++){
        if(isSafe(sudoku, row, col, digit)){
            sudoku[row][col] = digit; // digit woh hai jisko hum place karana chahte hai as a digit
            if(sudokuSolver(sudoku, nextrow, nextcol)) {
                return true;
            }
            // Backtracking
            sudoku[row][col] = 0;
        }
    }
    return false;
}

int main() {
    int suduko[9][9] = {{0, 0, 8, 0, 0, 0, 0, 0, 0},
                        {4, 9, 0, 1, 5, 7, 0, 0, 2},
                        {0, 0, 3, 0, 0, 4, 1, 9, 0},
                        {1, 8, 5, 0, 6, 0, 0, 2, 0},
                        {0, 0, 0, 0, 2, 0, 0, 6, 0},
                        {9, 6, 0, 4, 0, 5, 3, 0, 0},
                        {0, 3, 0, 0, 7, 2, 0, 0, 4},
                        {0, 4, 9, 0, 3, 0, 0, 5, 7},
                        {8, 2, 7, 0, 0, 9, 0, 1, 3}};
    sudokuSolver(suduko, 0, 0);
    cout<<"sudoku solved!"<<endl;
    return 0;
}

  
