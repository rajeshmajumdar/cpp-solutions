#include <iostream>
#include <vector>

using namespace std;

void solution(vector<int>& arr) {
    next_permutation(arr.begin(), arr.end());
    for(int x: arr) { cout << x << endl; }
}

int main() {
    int arr[] = {3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> input(arr, arr+n);
    solution(input);
    return 0;
}