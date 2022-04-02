/*
You are given a string that represents time in the format hh:mm. Some of the digits are blank (represented by ?). 
Fill in ? such that the time represented by this string is the maximum possible.
Maximum time: 23:59, minimum time: 00:00. You can assume that input string is always valid.

Input: "?4:5?"
Output: "14:59"

Input: "23:5?"
Output: "23:59"
*/

#include <iostream>

using namespace std;

string solution(string time) {
    for(int i=0; i < time.size(); i++) {
        if(time[i] == '?') {
            switch (i) {
                case 0:
                    if((int)time[i+1] - '0' < 4 || time[i+1] == '?'){
                        time.replace(0, 1, "2");
                    } else {
                        time.replace(0, 1, "1");
                    }
                    break;
                case 1:
                    if((int)time[i-1] - '0' == 2) {
                        time.replace(1, 1, "3");
                    } else {
                        time.replace(1, 1, "9");
                    }
                    break;
                case 3:
                    time.replace(3, 1, "5");
                    break;
                case 4:
                    time.replace(4, 1, "9");
                    break;          
                default:
                    break;
            }
        }
    }
    return time;
}

int main() {
    string time = "2?:22";
    cout << solution(time) << endl;
    return 0;
}