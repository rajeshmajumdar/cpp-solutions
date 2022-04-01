/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Implement strStr()
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        char* p = strstr(haystack.c_str(), needle.c_str());
        if (p == NULL) return -1;
        return p - haystack.c_str();
    }
};
// @lc code=end

