/*
I am given an array, we need to find the min amplitude of the array with changing atmost 3 elements.

input: [-1, 3, -1, 8, 5, 4]
output: 2

explaination: if we change -1, -1 and 8 to 3, we get min amplitude i.e. 5-3 = 2
*/

#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int>& s) {
    if(s.size() <= 4) return 0;
    sort(s.begin(), s.end());
    int min = INT_MAX, diff;
    for(int i=3; i >= 0; i--) {
        diff = abs(s[i] - s[s.size()-abs(i-4)]);
        //cout << s[i] << '-' << s[s.size()-abs(i-4)] << '=' << diff << endl;
        if(diff < min) {
            min = diff;
        }
    }
    return min;
}

int main() {
    //int arr[] = {-1, 3, -1, 8, 5, 4};
    //int arr[] = {0, 1, 2, 3, 4};
    //int arr[] = {3, 7, 4, 5, 6, 4, 9, 11, 7, 4};
    int arr[] = {6,6,0,1,1,4,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> input(arr, arr+n);

    cout << solution(input) << endl;

    return 0;
}