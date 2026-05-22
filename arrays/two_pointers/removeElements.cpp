#include<iostream>
#include<vector>
using namespace std;


vector<int> solution(vector<int> arr, int val){
    int idx = 0;

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] != val){
            arr[idx] = arr[i];
            idx++;
        }
    }
    arr.resize(idx);
    return arr;
}


int main(){
    vector<int> arr = {3, 2, 2, 3};
    vector<int> ans = solution(arr, 3);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i];
    }

    return 0;
}