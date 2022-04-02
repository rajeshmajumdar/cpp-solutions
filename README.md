## CPP Solutions

These are the solutions from some of the coding questions from [SPOJ](https://www.spoj.com/problems/classical/), [Leetcode](https://leetcode.com) and from [Hackerrank](https://hackerrank.com).

For basics `Hackerrank` is better, but for algorithms and DS, I like `Leetcode` and `SPOJ`.


### Solutions
> **[Longest Palindrome Substring](5.longest-palindromic-substring.cpp)** - Leetcode

I don't remember the difficulty of the question though, now it seems `easy` to me. Anyhow the question was to find the longest substring of a substring which is palindromic.

----
- **Example**

Input : `"banana"`\
Output: `"anana"`\
Explaination: `The longest palindromic substring inside the given string is "anana". So we simply return it.`

----
- **Idea**

Now how I did it is I used a famous algorithm to solve this problem i.e. `expand-around-center`. Looking at the discussion form of this question, I realised there are more efficient solution to this problem but those are using principles of `Dynamic Programming` and I am not there yet.
* Time Complexity : `O(N^2)`
* Space Complexity: `O(N)`

----
- **Explaination**

First palindrome is nothing just the mirror image of itself. Like in our example output `anana` is mirror of it's reverse i.e. `anana`. That already solves the half of the problem now what we have to do is to iterate over the string and at `i` we expand to the `left` and `right` till we don't meet the condition i.e. it's not palindromic anymore, and also if we reach the end of the string we move to the next `i`.

> Iterating over the string.

```c
for(int i=0; i < s.size(); i++) {
    ...
}
```
> Expand to left and right

```c
int high = i+1;
int low = i-1;
// Here we check if we reached the end of the string.
// and also isPalindrome
while(high < n && s[high] == s[i]) high++;
while(low >= 0 && s[low] == s[i]) low--;
while(low >= 0 && high < n && s[high] == s[low]) {
    high++;
    low--;
}
```
> Lastly we get the starting index and the end index of the palindrome.

```c
int len = high-low-1;
if(max < len) {
    max = len;
    start = low + 1;
}

return s.substr(start, max);
```