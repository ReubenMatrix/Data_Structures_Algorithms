// Given an array arr[], the task is to generate all the possible subarrays of the given array.

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> solution(vector<int> arr){
    vector<vector<int>> ans;

    for(int i = 0; i < arr.size(); i++){
        for(int j = i; j < arr.size(); j++){
            vector<int> row;

            for(int k = i; k <= j; k++){
                row.push_back(arr[k]);
            }

            ans.push_back(row);
        }
        
    }

    return ans;
}

// Time Complexity: O(N³)
// Space Complexity: O(N³)


void optimalSolution(vector<int> arr, int start, int end){
    if(end == arr.size()){
        return;
    }

    if(start > end){
        optimalSolution(arr, 0, end + 1);
    }
    else{
        for(int i = start; i <= end; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        optimalSolution(arr, start + 1, end);
    }
}
// Time Complexity: O(N³)
// Space Complexity: O(N)



int main(){
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans = solution(arr);
    optimalSolution(arr,0,0);

    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}