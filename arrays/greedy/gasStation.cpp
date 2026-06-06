#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int>& gas, vector<int>& cost) {
    int totalGas = 0;
    int tank = 0;
    int start = 0;

    for (int i = 0; i < gas.size(); i++) {
        int diff = gas[i] - cost[i];

        totalGas += diff;
        tank += diff;

        if (tank < 0) {
            start = i + 1;
            tank = 0;
        }
    }

    return totalGas >= 0 ? start : -1;
}

int main() {
    vector<int> gas  = {1,2,3,4,5};
    vector<int> cost = {3,4,5,1,2};

    cout << solution(gas, cost);

    return 0;
}