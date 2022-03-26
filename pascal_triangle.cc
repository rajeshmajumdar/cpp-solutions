#include <iostream>
#include <vector>

using namespace std;

vector< vector<int> > solution(int num) {
    vector<int> row;
    vector< vector<int> > result;

    if(num == 1) {
        row.push_back(1);
        result.push_back(row);
    } else if(num == 2) {
        row.push_back(1);
        result.push_back(row);
        row.clear();
        row.push_back(1);
        row.push_back(1);
        result.push_back(row);
    } else {
        row.push_back(1);
        result.push_back(row);
        row.clear();
        row.push_back(1);
        row.push_back(1);
        result.push_back(row);
        row.clear();

        for(int a=2; a < num; ++a) {
            row.push_back(1);
            int sum = 0;
            int size = result[a-1].size();
            for(int i=1; i < size; ++i) {
                sum = result[a-1][i] + result[a-1][i-1];
                row.push_back(sum);
            }
            row.push_back(1);
            result.push_back(row);
            row.clear();
        }
    }

    return result;
}

int main() {
    int num = 5;
    vector< vector<int> > mat = solution(num);
    cout << '[';
    for(int i=0; i<mat.size(); i++) {
        cout << '[';
        for(int j=0;  j<mat[i].size(); j++) {
            cout << mat[i][j] << (j == mat[i].size()-1 ? ']' : ',');
        }
        cout << (i == mat.size() - 1 ? ']' : ',');
    }
    cout << endl;
}