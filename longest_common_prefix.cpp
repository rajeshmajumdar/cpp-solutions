#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

bool check(string s) {
    stack<char> st;
    for (int i=0; i < s.size(); i++) {
        if((s[i] == '(') || (s[i] == '{') || (s[i] == '[')) {st.push(s[i]);}
        else {
            if((s[i] == ')') && (st.top() != '(')) {return false;}
            if((s[i] == '}') && (st.top() != '{')) {return false;}
            if((s[i] == ']') && (st.top() != '[')) {return false;}
            st.pop();
        }
    }
    return st.empty();
}

int main() {

    string s;
    cin >> s;
    bool flag = check(s);
    cout << (flag ? "YES" : "NO") << endl;
    return 0;
}