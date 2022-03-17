#include <iostream>
#include <string>
using namespace std;

int printArithmetic(string first, string second, char operation) {
    int firstSize = first.size();
    int secondSize = second.size();

    int resultSize = 0;

    if(firstSize > secondSize) {
        int diff = firstSize - secondSize;
        second = string(diff, ' ') + second;
    } else if(firstSize < secondSize) {
        int diff = secondSize - firstSize;
        first = string(diff, ' ') + first;
    }

    if(operation != '*') {
        resultSize = second.size() + 1;
        cout << ' ' << first << endl << operation << second << endl << string((second.size()+1), '-') << endl;
    } else {
        if (secondSize != 1) {
            resultSize = second.size() * 2;
            cout << string((second.size()), ' ') << first << endl << string((second.size()-1), ' ') << operation << second << endl << string((second.size()-1), ' ') << string((second.size()+1), '-') << endl;
        }
    }

    return resultSize;
}

void printCalculation(string first, string second, char operation, int rSize) {
    int firstInteger = stoi(first);
    int secondInteger = stoi(second);

    int firstSize = first.size();
    int secondSize = second.size();

    if (operation != '*') {
        long long int result = firstInteger + secondInteger;
        string resString = to_string(result);
        if(resString.size() == second.size()) {
            cout << ' ' << result << endl;
        } else {
            cout << result << endl;
        }
    } else if (operation == '*') {
        int totalSpaces, totalDashes;
        for (int i=second.size()-1; i >= 0; i--) {
            int secondToken = second[i] - '0';
            int result = firstInteger * secondToken;
            int spaces = 0;
            string resString = to_string(result);

            if (secondToken == 0) {
                if (i != second.size() - 1) {
                    int diff = (second.size() - i);
                    spaces = rSize - diff;
                } else if (i == second.size() - 1) {
                    spaces = rSize - 1;
                }
                cout << string(spaces, ' ') << result << endl;
            } else {
                if (i != second.size() - 1) {
                    int diff = (second.size() - i) - 1;
                    spaces = rSize - (diff + resString.size());
                } else if (i == second.size() - 1) {
                    spaces = rSize - resString.size();
                }
                cout << string(spaces, ' ') << result << endl;
            }
            if(i == 0) {
                totalSpaces = spaces;
                totalDashes = spaces + resString.size();
            }
        }
        long long int result = firstInteger * secondInteger;
        string resString = to_string(result);
        cout << string(totalSpaces+1, ' ') << string(totalDashes, '-') << endl;

        if ((totalSpaces + totalDashes) == (resString.size()-1)) {
            cout << result << endl;
        } else if ((totalSpaces + totalDashes) > resString.size()){
            int diff = (totalSpaces + totalDashes) - (resString.size() - 1);
            cout << string(diff, ' ') << result << endl;
        }
    }
}

int main() {
    int tests;
    cin >> tests;
    cout << endl;
    while(tests--) {
        string input;
        string first, second;
        int resSize;
        char operation;

        cin >> input;

        for (int i=0; i<input.size(); i++) {
            if (input[i] == '*' || input[i] == '+' || input[i] == '-') {
                first = input.substr(0, i);
                second = input.substr(i+1, input.size());
                operation = input[i];
            }
        }
        resSize = printArithmetic(first, second, operation);
        printCalculation(first, second, operation, resSize);
    }

    return 0;
}