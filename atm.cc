#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	string res;
	cin >> t;
	while(t--) {
	    int p, m;
	    cin >> p >> m;
	    while(p--) {
	        int w;
	        cin >> w;
	        if(w <= m) {
	            m -= w;
	            res = res + '1';
	        } else {
	            res = res + '0';
	        }
	        cout << res << endl;
	        res = '';
	    }
	}
	return 0;
}

