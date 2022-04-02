#include <iostream>
#include <vector>

using namespace std;

string solution(vector<int>& arr) {
    vector<char> time(5);
    if(find(arr.begin(), arr.end(), '0') == arr.end() && find(arr.begin(), arr.end(), '1') == arr.end() && find(arr.begin(), arr.end(), '2') == arr.end()) return "";

}

int main() {
    int input[] ={1, 2, 3, 4};
    int n = sizeof(input) / sizeof(input[0]);
    vector<int> arr(input, input+n);
    cout << solution(arr) << endl;
    return 0;
}