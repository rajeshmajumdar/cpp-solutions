#include <bits/stdc++.h>

using namespace std;

double solution(vector<int>& nums1, vector<int>& nums2) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int s1 = nums1.size();
    int s2 = nums2.size();
    int i = 0, j1 = 0, j2 = 0;

    vector<int> finalArr;

    for(int i = 0 ; i < (s1+s2); i++) {
        while(s1 > 0 || s2 > 0) {
            if(s1 == 0) {
                finalArr.push_back(nums2[j2]);
                j2++;
                s2--;
            } else if (s2 == 0) {
                finalArr.push_back(nums1[j1]);
                j1++;
                s1--;
            } else {
                if(nums1[j1] > nums2[j2]) {
                    finalArr.push_back(nums2[j2]);
                    j2++;
                    s2--;
                } else {
                    finalArr.push_back(nums1[j1]);
                    j1++;
                    s1--;
                }
            }
        }
    }

    for(int x : finalArr) { cout << x << endl; }

    int fSize = finalArr.size();
    double res;
    if(fSize % 2 == 0) {
        res = (double)(finalArr[finalArr.size()/2] + finalArr[(finalArr.size()/2)-1]) / 2;
    } else {
        res = (double)finalArr[(finalArr.size()/2)];
    }

    return res;
}

int main() {
    int arr1[] = {3};
    int arr2[] = {-2, -1};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    vector<int> nums1(arr1, arr1+n1);
    vector<int> nums2(arr2, arr2+n2);

    cout << solution(nums1, nums2) << endl;
    return 0;
}