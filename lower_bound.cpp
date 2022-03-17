#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int tests, nQuery;
    cin >> tests;
    vector<int> inputs(tests, 0);
    for(int i=0; i < tests; i++) {
        cin >> inputs[i];
    }

    cin >> nQuery;
    vector<int> queries(nQuery, 0);
    for(int i=0; i < nQuery; i++) {
        cin >> queries[i];
    }

    for(int i=0; i < nQuery; i++) {
        auto findIt = find(inputs.begin(), inputs.end(), queries[i]);
        if (findIt != inputs.end()) {
            int index = distance(inputs.begin(), findIt);
            cout << "Yes " << index + 1 << endl;
        } else {
            auto lbIt = lower_bound(inputs.begin(), inputs.end(), queries[i]);
            int index = distance(inputs.begin(), lbIt);
            cout << "No " << index + 1 << endl;
        }
    }



    return 0;
}
