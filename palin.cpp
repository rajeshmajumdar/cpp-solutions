#include <iostream>

using namespace std;

bool allNines(string input) {
    for(int i=0; i<input.size(); i++) {
        if(input[i] != '9') {
            return false;
        }
    }
    return true;
}

bool allZ(string input) {
    for(int i=0; i<input.size(); i++) {
        if(input[i] != '0') {
            return false;
        }
    }
    return true;
}

int main() {
    int tests;
    cin >> tests;
    while(tests--) {
        string input;
        cin >> input;

        if(allNines(input)) {
            cout << 1;
            for (int i=0; i < input.size() - 1; i++) {
                cout << 0;
            }
            cout << 1 << endl;
            continue;
        }

        if(allZ(input)) {
            cout << 1;
            for (int i=0; i < input.size() - 2; i++) {
                cout << 0;
            }
            cout << 1 << endl;
            continue;
        }

        int left, right;
        left = right = input.size() / 2;
        if (input.size() % 2 == 0) {
            left--;
        }

        while (left >= 0 && input[left] == input[right]) {
            left--;
            right++;
        }

        if (left < 0 || input[left] < input[right]) {
            left = right = input.size() / 2;
            if (input.size() % 2 == 0) {
                left--;
            }
            int carry = 1;

            while(left >= 0) {
                int num = (input[left] - '0') + carry;
                carry = num / 10;
                input[left] = (num % 10) + '0';
                input[right] = input[left];
                left--;
                right++;
            }
        } else {
            while (left >= 0) {
                input[right] = input[left];
                left--;
                right++;
            }
        }

        cout << input << endl;

    }
}