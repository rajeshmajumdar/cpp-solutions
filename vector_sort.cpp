#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int tests; 
    cin >> tests;
    vector<int> inputs(tests, 0);

    for(int i=0; i < tests; i++) {
        cin >> inputs[i]; 
    }

    sort(inputs.begin(), inputs.end());

    for(int i=0; i < tests; i++) {
        cout << inputs[i] << " ";
    }
    
    return 0;
}
