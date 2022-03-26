#include <iostream>
#include <vector>

using namespace std;

void rotate(vector<int> nums, int k) {
    k += 1;
    while(k--) {
        int temp = nums[0], i;
        for(i = 0; i < nums.size(); i++)
            nums[i] = nums[i+1];
        nums[nums.size()-1] = temp;
    }

    for(const int &x: nums) {
        cout << x << endl;
    }
}

int main() {
    vector<int> nums;
    nums.push_back(-1);
    nums.push_back(-100);
    nums.push_back(3);
    nums.push_back(99);
    int k = 2;

    rotate(nums, k);
    return 0;
}