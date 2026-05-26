#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int k){
    k = k % arr.size();

    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());
    return arr;
}   

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 2;
    vector<int> ans = solution(arr, k);

    for(int num : ans){
        cout << num;
    }

    return 0;
}