#include <vector>
#include <iostream>

using namespace std;

// these two arrays are sorted, and also we need to sort the merged array.
// with a time complexity O(log(m+n))

// the challenge is to merge and sort the array in the given time complexity.

double solution(vector<int>& nums1, vector<int>& nums2) {
    
}

int main() {
    vector<int> A;
    vector<int> B;

    A.push_back(1);
    A.push_back(2);

    B.push_back(3);
    B.push_back(4);

    cout << solution(A, B) << endl;
}