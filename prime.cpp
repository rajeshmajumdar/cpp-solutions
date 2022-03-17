#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int n) {
	if (n <= 1) return false;
	else if (n == 2) return true;
	else if (n % 2 == 0) return false;
	else {
		bool prime = true;
		int divisor = 3;
		int upperLimit = sqrt(n) + 1;
		while(divisor <= upperLimit) {
			if(n % divisor == 0) {
				return false;
			}
			divisor += 2;
		}
		return prime;
	}

}

int main() {
	int m, n, input;
	cin >> input;
	for (int i=0; i<input; i++) {
		cin >> m >> n;
		for (int j=m; j <= n; j++) {
			if(isPrime(j)) {
				cout << j << endl;
			}
		}
	}

	return 0;
}
