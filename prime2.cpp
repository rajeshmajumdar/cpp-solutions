#include <iostream>
using namespace std;

bool isPrime(int n) {
	if (n <  2) return false;
	if (n == 2) return true;
	if (n % 2 == 0) return false;
	for (int i = 3; i * i <= n; i += 2)
		if(n % i == 0) return false;
	return true;
}

int main() {
	long long m, n, input;
	cin >> input;
	while (input--) {
		cin >> m >> n;	
		for (int i=m; i<=n; i++) {
			if(isPrime(i)) {
				cout << i << endl;
			}
		}
	}
	return 0;
}