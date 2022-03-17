#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int tests, eIndex, lIndex, rIndex;
    cin >> tests;
    vector<int> inputs(tests, 0);

    for(int i=0; i < tests; i++) {
        cin >> inputs[i];
    }

    cin >> eIndex;
    eIndex = eIndex - 1;
    inputs.erase(inputs.begin() + eIndex);

    cin >> lIndex >> rIndex;
    lIndex = lIndex - 1;
    rIndex = rIndex - 1;
    inputs.erase(inputs.begin()+lIndex, inputs.begin()+rIndex);

    cout << inputs.size() << endl;

    for(int const &i: inputs) {
        cout << i << " ";
    }


    return 0;
}
