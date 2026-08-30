#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solution(vector<int> arr){
    int maxProfit = 0;
    
    for(int i = 0; i < arr.size(); i++){
        for(int j = i + 1; j < arr.size(); j++){
            int profit = arr[j] - arr[i];
            maxProfit = max(maxProfit, profit);
        }
    }

    return maxProfit;
}


int optimalSolution(vector<int> arr){
    int minPrice = arr[0];
    int maxProfit = 0;

    for(int i = 0; i < arr.size(); i++){
        minPrice = min(minPrice, arr[i]);

        int profit = arr[i] - minPrice;

        maxProfit = max(maxProfit, profit);
    }

    return maxProfit;
}

int main(){
    vector<int> arr = {10, 1, 5, 6, 7, 1};
    cout << solution(arr) << endl;
    cout << optimalSolution(arr) << endl;

    return 0;
}

