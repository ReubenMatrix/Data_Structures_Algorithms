//Given an array arr[], the task is to print every alternate element of the array starting from the first element.

#include<iostream>
#include<vector>
using namespace std;


vector<int> solution(vector<int> arr){
    int n = arr.size();
    vector<int> res;

    for(int i = 0; i <= n - 1; i+=2){
        res.push_back(arr[i]);
    }

    return res;
}

//Time Complexity: O(N)
//Space Complexity: O(N)


int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    vector<int> ans = solution(arr);

    for (int i = 0; i <= ans.size() - 1; i++)
    {
        cout << ans[i] << " ";
    }
    
    
}