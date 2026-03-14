// Given an array arr[], check if it is sorted in ascending order or not. 
// Equal values are allowed in an array and two consecutive equal values are considered sorted.

#include<iostream>
#include<vector>
using namespace std;


bool solution(vector<int> arr){
    for(int i = 1; i <= arr.size() - 1; i++){
        if(arr[i] < arr[i - 1]){
            return false;
        }
    }
    return true;
}

// Time Complexity: O(N)
// Space Complexity: O(1)

int main(){
    vector<int> arr = {10, 20, 30, 40, 50};
    bool ans = solution(arr);
    cout << ans;
}