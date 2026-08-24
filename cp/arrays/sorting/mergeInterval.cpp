//   https://leetcode.com/problems/merge-intervals/description/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr){
    sort(arr.begin(), arr.end());

    vector<vector<int>> ans;
    ans.push_back(arr[0]);

    for(int i = 1; i < arr.size(); i++){
        if(arr[i][0] <= ans.back()[1]){
            ans.back()[1] = max(ans.back()[1], arr[i][1]);
        }
        else{
            ans.push_back(arr[i]);
        }
    }

    return ans;
}


int main() {

    vector<vector<int>> arr = {
        {1, 3},
        {2, 6},
        {8, 10},
        {15, 18}
    };

    vector<vector<int>> ans = solution(arr);

    for (auto interval : ans) {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }

    return 0;
}