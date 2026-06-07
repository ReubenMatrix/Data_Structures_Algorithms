#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int solution(vector<int>& prices) {
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for(int i = 0; i < prices.size(); i++) {
        minPrice = min(minPrice, prices[i]);
        maxProfit = max(maxProfit, prices[i] - minPrice);
    }

    return maxProfit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << solution(prices);

    return 0;
}