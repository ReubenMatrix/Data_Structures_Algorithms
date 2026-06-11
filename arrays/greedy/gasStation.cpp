#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> gas, vector<int> cost) {
  int totalGas = 0, totalCost = 0;
        for (int i = 0; i < gas.size(); i++) {
            totalGas += gas[i];
            totalCost += cost[i];
        }

        if (totalGas < totalCost) {
            return -1;
        }

        int currentGas = 0;
        int start = 0;

        for (int i = 0; i < gas.size(); i++) {
            currentGas += gas[i] - cost[i];
            if (currentGas < 0) {
                currentGas = 0;
                start = i + 1;
            }
        }

        return start; 
}

int main() {
    vector<int> gas  = {1,2,3,4,5};
    vector<int> cost = {3,4,5,1,2};

    cout << solution(gas, cost);

    return 0;
}