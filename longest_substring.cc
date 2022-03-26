#include <iostream>
#include <map>
#include <vector>

using namespace std;

int solution(string s) {
    multimap<int, string> resMap;
    vector<char> subString;
    for(int i=0; i < s.size(); i++) {
        if(find(subString.begin(), subString.end(), s[i]) != subString.end()) {
            int size = subString.size();
            string res(subString.begin(), subString.end());
            resMap.insert(make_pair(size, res));
            subString.clear();
            subString.push_back(s[i]);
        } else {
            subString.push_back(s[i]);
        }
    }
    return resMap.rbegin()->first;
}

int main() {
    string s = "c";
    cout << solution(s) << endl;;
}