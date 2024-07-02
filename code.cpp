#include<bits/stdc++.h>
using namespace std;

void print(int board[9][9], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool isValid(int board[9][9], int i, int j, int num, int n) {
    for (int p = 0; p < n; p++) {
        if (board[i][p] == num) {
            return false;
        }
    }

    for (int p = 0; p < n; p++) {
        if (board[p][j] == num) {
            return false;
        }
    }


    int square_roon= sqrt(n);
    int si = i - i % square_roon;
    int sj = j - j % square_roon;

    for (int p = si; p < si + square_roon; p++) {
        for (int q = sj; q < sj + square_roon; q++) {
            if (board[p][q] == num) {
                return false;
            }
        }
    }

    return true;
}

bool SudokuSolver(int board[9][9], int i, int j, int n) {
    
    if (i == n) {
        print(board, n);
        return true;
    }
    
    if (j == n) {
        return SudokuSolver(board, i + 1, 0, n);
    }
    
    if (board[i][j] != 0) {
        return SudokuSolver(board, i, j + 1, n);
    }
    
    for (int num = 1; num <= 9; num++) {
        
        if (isValid(board, i, j, num, n)) {
            board[i][j] = num;
            bool subans = SudokuSolver(board, i, j + 1, n);
            if (subans) {
                return true;
            }
           
            board[i][j] = 0;
        }
    }
    return false;
}

int main() {
    int n = 9;
    int board[9][9];

    cout << "Enter the Sudoku puzzle (0 for empty cells):" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
        }
    }

    if (!SudokuSolver(board, 0, 0, n)) {
        cout << "No solution exists for the given Sudoku puzzle." << endl;
    }

    return 0;
}
