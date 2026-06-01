#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


vector<vector<int>> solution(vector<vector<int>> arr, vector<int> interval){
    vector<vector<int>> ans;
    int i = 0;
    int n = arr.size();

    while(i < n && arr[i][1] < interval[0]){
        ans.push_back(arr[i]);
        i++;
    }

    while(i < n && arr[i][0] <= interval[1]){
        interval[0] = min(interval[0], arr[i][0]);
        interval[1] = max(interval[1], arr[i][1]);
        i++;
    }

    ans.push_back(interval);

    while(i < n){
        ans.push_back(arr[i]);
        i++;
    }

    return ans;
}



int main(){
      vector<vector<int>> arr = {{1,3},{6,9}};
    vector<int> interval = {2,5};

    vector<vector<int>> result = solution(arr, interval);

    for (auto interval : result) {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }

    return 0;
}