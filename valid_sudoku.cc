#include <iostream>
#include <vector>

using namespace std;

bool checkRow(vector<int> row) {
    for(int i=row.size()-1; i>=0; i--) {
        row.pop_back();
        auto it = find(row.begin(), row.end(), row[i]);
        if(it != row.end()) {
            return false;   
        }
    }
    return true;
}

bool isValid(vector< vector<char> >& board) {
    vector<int> rows;
    vector<int> cols;

    int i = 0, a = 3, j = 0;

    // checking boxes
    
    // for(int a = 3; a < 9; a+=3) {
    //     for(int i = ; ii < aa+3; ii++) {
    //         for(int jj = j; jj < aa+6; jj++) {
    //             if(board[i][j] != '.') {
    //                 rows.push_back((int)board[i][j] - '0');
    //             }
    //             for(const int x: rows) {
    //                 cout << x << ' ';
    //             }
    //             rows.clear();
    //         }
    //     }
    //     i += 3;
    //     j += 3;
    // }

    //checking rows & columns
    for(int i=0; i < board.size(); i++) {
        for(int j=0; j < board.size(); j++) {
            if(board[i][j] != '.') {
                rows.push_back((int)board[i][j] - '0');
            }
            if(board[j][i] != '.') {
                cols.push_back((int)board[j][i] - '0');
            }
        }
        if(!checkRow(rows)) return false;
        rows.clear();
        if(!checkRow(cols)) return false;
        cols.clear();
    }


    return true;
}

int main() {
    vector< vector<char> > sudoku;
    char row1[] = {'.','.','.','.','5','.','.','1','.'};
    char row2[] = {'.','4','.','3','.','.','.','.','.'};
    char row3[] = {'.','.','.','.','.','3','.','.','1'};
    char row4[] = {'8','.','.','.','.','.','.','2','.'};
    char row5[] = {'.','.','2','.','7','.','.','.','.'};
    char row6[] = {'.','1','5','.','.','.','.','.','.'};
    char row7[] = {'.','.','.','.','.','2','.','.','.'};
    char row8[] = {'.','2','.','9','.','.','.','.','.'};
    char row9[] = {'.','.','4','.','.','.','.','.','.'};

    int n = sizeof(row1) / sizeof(row1[0]);

    vector<char> r1(row1, row1 + n);
    sudoku.push_back(r1);
    vector<char> r2(row2, row1 + n);
    sudoku.push_back(r2);
    vector<char> r3(row3, row1 + n);
    sudoku.push_back(r3);
    vector<char> r4(row4, row1 + n);
    sudoku.push_back(r4);
    vector<char> r5(row5, row1 + n);
    sudoku.push_back(r5);
    vector<char> r6(row6, row1 + n);
    sudoku.push_back(r6);
    vector<char> r7(row7, row1 + n);
    sudoku.push_back(r7);
    vector<char> r8(row8, row1 + n);
    sudoku.push_back(r8);
    vector<char> r9(row9, row1 + n);
    sudoku.push_back(r9);

    cout << (isValid(sudoku) ? "true" : "false") << endl;

}

/*
[".",".",".",".","5",".",".","1","."],
[".","4",".","3",".",".",".",".","."],
[".",".",".",".",".","3",".",".","1"],
["8",".",".",".",".",".",".","2","."],
[".",".","2",".","7",".",".",".","."],
[".","1","5",".",".",".",".",".","."],
[".",".",".",".",".","2",".",".","."],
[".","2",".","9",".",".",".",".","."],
[".",".","4",".",".",".",".",".","."]
*/