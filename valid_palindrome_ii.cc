/*
We need to find a palindrome, by deleting at most one character. So the typical reverse method wouldn't work here, so what 
can we do here.

One thing I am thinking about is to use two pointers.
*/

#include <iostream>
using namespace std;

bool valid(string& s, int i, int j, int d) {
    return i >= j || (s[i] == s[j] ? valid(s, i + 1, j - 1, d) : d > 0 && (valid(s, i + 1, j, d - 1) || valid(s, i, j - 1, d - 1)));
}

bool solution(string s) {
    return valid(s, 0, s.length() - 1, 1);
}

int main() {
    string test = "aguokepatgbnvfqmgmlcupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupuculmgmqfvnbgtapekouga";

    cout << solution(test) << endl;
    return 0;
}