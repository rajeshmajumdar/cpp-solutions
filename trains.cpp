#include <iostream>

using namespace std;

template <typename T, size_t N>
constexpr size_t arraySize(T (&)[N]) noexcept {
    return N;
}

inline int convertTime(string s) {
    string h = s.size() == 4 ? s.substr(0, 1) : s.substr(0, 2);
    string m = s.size() == 4 ? s.substr(2, 2) : s.substr(3, 2);
    return stoi(h + m);
}

int main() {
    string arrival[6] = {"9:00", "9:40", "9:50", "11:00", "15:00", "18:00"};
    string departure[6] = {"9:10", "12:00", "11:20", "11:30", "19:00", "20:00"};

    int count = 1;

    for(int i = 0; i < arraySize(arrival); i++) {
        if(arrival[i+1] < departure[i]) {
            count++;
        }
    }

    cout << count << endl;
}