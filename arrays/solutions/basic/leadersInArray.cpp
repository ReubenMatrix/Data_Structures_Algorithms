// Given an array arr[] of size n, the task is to find all the Leaders in the array. 
// An element is a Leader if it is greater than or equal to all the elements to its right side.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> solution(vector<int> arr){
    vector<int> ans;
    int maxRight = arr[arr.size() - 1];

    for(int i = arr.size() - 1; i >= 0; i--){
        if(arr[i] >= maxRight){
            ans.push_back(arr[i]);
            maxRight = arr[i];
        }
    }

    reverse(ans.begin(), ans.end());

    return ans;
}


// Time Complexity: O(N)
// Space Complexity: O(N)


int main(){
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> ans = solution(arr);
    for(int i = 0; i <= ans.size() - 1; i++){
        cout << ans[i] << " ";
    }

}