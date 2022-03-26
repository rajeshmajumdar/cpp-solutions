#include <iostream>

using namespace std;

int countOccurence(int a, int b) {
    int res = 0;
    int orig = b;

    while((a/b) > 0) {
        res += (a/b);
        b *= orig;
    }
    return res;
}

int main() {
    int n, tcase;
    cin >> n;
    while(n--) {
        cin >> tcase;      
        cout << min(countOccurence(tcase, 5), countOccurence(tcase, 2)) << endl;
    }
}

