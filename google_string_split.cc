#include <iostream>
#include <unordered_map>

using namespace std;

int solution(string s) {
    unordered_map<char, int> lHashMap, rHashMap;
    for(auto x: s) {
        lHashMap[x]++;
    }
    int res = 0;
    for(int i=0; i < s.size(); i++) {
        lHashMap[s[i]]--;
        if(lHashMap[s[i]] == 0) lHashMap.erase(s[i]);
        rHashMap[s[i]]++;
        if(lHashMap.size() == rHashMap.size()) res++;
    }
    return res;
}

int main() {
    string s;
    s = "bac";
    cout << solution(s) << endl;
    return 0;
}