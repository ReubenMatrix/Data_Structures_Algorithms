// Given a sorted array arr[] of size n, the goal is to rearrange the array so that all distinct elements appear at the beginning in sorted order. 
// Additionally, return the length of this distinct sorted subarray.

#include<iostream>
#include<vector>
using namespace std;


vector<int> solution(vector<int> arr){
    vector<int> ans;

    ans.push_back(arr[0]);

    for(int i = 1; i < arr.size() - 1; i++){
        if(arr[i] != arr[i - 1]){
            ans.push_back(arr[i]);
        }

    }

    return ans;
}

// Time Complexity: O(N)
// Space Complexity: O(N)


int optimalSolution(vector<int> arr){
    int j = 0;

    for(int i = 1; i < arr.size(); i++){
        if(arr[i] != arr[j]){
            j++;
            arr[j] = arr[i];
        }
    }

    return j + 1;
}

// Time Complexity: O(N)
// Space Complexity: O(1)



int main(){

    vector<int> arr = {2, 2, 2, 2, 2};
    vector<int> ans = solution(arr);
    int ans2 = optimalSolution(arr);

    cout << ans.size() << endl;
    cout << ans2 << endl;
}