#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// My Code - 3 Helper Functiions - More Modular - Optimal
class Solution {
private:
    bool isValidRow(vector<vector<char>>& board, int row){
        vector<int> rowMap(10, 0);

        for(int i = 0; i < 9; i++){
            if(board[row][i] == '.') continue;
            if(rowMap[board[row][i] - '0']) return false;
            rowMap[board[row][i] - '0'] = 1;
        }

        return true;
    }

    bool isValidCol(vector<vector<char>>& board, int col){
        vector<int> colMap(10, 0);

        for(int i = 0; i < 9; i++){
            if(board[i][col] == '.') continue;
            if(colMap[board[i][col] - '0']) return false;
            colMap[board[i][col] - '0'] = 1;
        }

        return true;
    }

    bool isValidBox(vector<vector<char>>& board, int startRow, int startCol){
        vector<int> boxMap(10, 0);

        for(int row = startRow; row < startRow + 3; row++){
            for(int col = startCol; col < startCol + 3; col++){
                if(board[row][col] == '.') continue;
                if(boxMap[board[row][col] - '0']) return false;
                boxMap[board[row][col] - '0'] = 1;
            }
        } 

        return true;
    }

public:
    bool isValidSudoku(vector<vector<char>>& board){
        for(int i = 0; i < 9; i++){
            if(!isValidRow(board, i)) return false;
            if(!isValidCol(board, i)) return false;
        }

        for(int row = 0; row <= 6; row += 3){
            for(int col = 0; col <= 6; col += 3){
                if(!isValidBox(board, row, col)) return false;
            }
        }

        return true;
    }
};

// Technique:
// Hashing (Sudoku Validation)

// Approach:
// Validate each row, column, and 3x3 subgrid separately.
// Use frequency arrays to detect duplicate digits.
// Ignore empty cells represented by '.'.
// If any duplicate is found in a row, column,
// or subgrid, return false.
// Otherwise, the Sudoku board is valid.

// TC: O(9 * 9) = O(1)
// Sudoku board size is fixed (9x9)

// SC: O(1)
// Fixed-size frequency arrays used

// Verdict: Optimal


// AI Code - More Elegant - Optimal

int main()
{
    // Main Function placeholder for testing
    return 0;
}