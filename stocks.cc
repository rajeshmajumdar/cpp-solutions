#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices) {
    int min = INT_MAX;
    int max = 0;
    int diff = 0;
        
    for(int i = 0; i < prices.size(); i++){
        if(prices[i] < min){
            min = prices[i];
        }
        diff = prices[i] - min;
        if(max < diff){
            max = diff;
        }
    }
    return max;
}

int main() {
    vector<int> prices;
    prices.push_back(2);
    prices.push_back(6);
    prices.push_back(4);
    prices.push_back(3);
    prices.push_back(1);
    
    cout << maxProfit(prices) << endl;
}