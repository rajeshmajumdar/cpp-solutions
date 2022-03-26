#include <iostream>
#include <vector>

using namespace std;

vector< vector<int> > reshape(vector< vector<int> >& mat, int r, int c) {
    vector< vector<int> > newMat(r, vector<int>(c, 0));
    int rows = mat.size();
    int columns = mat[0].size();
    
    if((mat.size() * mat[0].size()) != (r * c)) return mat;
    
    int row_num = 0, col_num = 0;
    for(int i=0; i < rows; ++i) {

        for(int j=0; j < columns; ++j) {
            newMat[row_num][col_num] = mat[i][j];
            col_num++;
            if(col_num == c) {
                col_num = 0;
                row_num++;
            }
        }
    }

    return newMat;
}

int main() {
    vector< vector<int> > mat;
    int v1[] = {1, 2};
    int v2[] = {3, 4}; 
    mat.push_back(vector<int>(v1, v1 + sizeof(v1) / sizeof(int)));
    mat.push_back(vector<int>(v2, v2 + sizeof(v2) / sizeof(int)));
    
    int r = 2, c = 2;
    auto newMat = reshape(mat, r, c);

    for(int i=0; i < newMat.size(); i++) {
        cout << '[';
        for(int j=0; j < newMat[i].size(); j++) {
            cout << newMat[i][j] << (j == newMat[i].size()-1 ? ']' : ',');
        }
        cout << endl;
    }
}