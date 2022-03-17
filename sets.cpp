#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int queries, type, val;
    set<int> mySet;
    cin >> queries;
    while(queries--) {
        cin >> type >> val;
        switch(type) {
            case 1:
                // so we add to the set
                mySet.insert(val);
                break;
            case 2:
                // we delete the val
                mySet.erase(val);
                break;
            case 3:
                // here we print 'Yes' if we find the val else 'No'
                auto it = mySet.find(val);
                if (it != mySet.end()) {
                    cout << "Yes" << endl;
                } else {
                    cout << "No" << endl;
                }
                break;
        }
    }  
    return 0;
}