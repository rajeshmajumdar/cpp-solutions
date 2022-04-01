/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n == 0) return "";
        if (n == 1) return s;
        int max = 1, start=0;
        for(int i=0; i < n; i++) {
            int high = i + 1;
            int low = i - 1;
            while(high < n && s[high] == s[i]) high++;
            while(low >= 0 && s[low] == s[i]) low--;
            while(low >= 0 && high < n && s[high] == s[low]) {
                high++;
                low--;
            }
            int len = high-low-1;
            if(max < len) {
                max = len;
                start = low+1;
            }
        }

        return s.substr(start, max);
    }
};
// @lc code=end

