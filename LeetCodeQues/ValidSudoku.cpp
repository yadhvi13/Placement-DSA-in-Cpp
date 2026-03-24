#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<string> seen;
        
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    string num(1, board[i][j]);
                    
                    string row = num + " in row " + to_string(i);
                    string col = num + " in col " + to_string(j);
                    string box = num + " in box " + to_string(i/3) + "-" + to_string(j/3);
                    
                    if (seen.count(row) || seen.count(col) || seen.count(box)) {
                        return false;
                    }
                    
                    seen.insert(row);
                    seen.insert(col);
                    seen.insert(box);
                }
            }
        }
        
        return true;
    }
};

int main() {
    Solution sol;
    
    vector<vector<char>> board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };
    
    if (sol.isValidSudoku(board))
        cout << "Valid Sudoku" << endl;
    else
        cout << "Invalid Sudoku" << endl;

    return 0;
}