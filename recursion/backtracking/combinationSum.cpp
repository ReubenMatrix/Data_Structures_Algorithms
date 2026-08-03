#include<iostream>
#include<vector>
using namespace std;

void solution(int index, vector<int>& arr, int target, vector<int>& curr, vector<vector<int>>& ans){
    if(index == arr.size()){
        if(target == 0){
            ans.push_back(curr);
        }
        return;
    }

    if(arr[index] <= target){
        curr.push_back(arr[index]);
        solution(index, arr, target - arr[index], curr, ans);
        curr.pop_back();
    }

    solution(index + 1, arr, target, curr, ans);
}


int main() {
    vector<int> arr = {2, 3, 6, 7};
    int target = 7;

    vector<vector<int>> ans;
    vector<int> curr;

    solution(0, arr, target, curr, ans);

    for (auto &v : ans) {
        for (int x : v)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}