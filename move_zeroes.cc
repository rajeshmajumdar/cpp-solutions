#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
    if (nums.size() > 1) {
        for(int i=0; i<nums.size(); i++) {
            if (nums[i] == 0) {
                for(int j=i; j < nums.size(); j++) {
                    nums[j] = nums[j+1];
                }
            nums[nums.size()-1] = 0;
            }
        } 
    }

    for(const int &x: nums) {
        cout << x << endl;
    }
}

int main() {
    vector<int> nums;
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(0);

    moveZeroes(nums);

    return 0;
}