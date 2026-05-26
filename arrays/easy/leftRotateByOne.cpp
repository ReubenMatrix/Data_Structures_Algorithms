#include<iostream>
#include<vector>
using namespace std;

vector<int> solution(vector<int> arr){
    int element = arr[0];

    for(int i = 1; i < arr.size(); i++){
        arr[i - 1] = arr[i];
    }

    arr[arr.size() - 1] = element;
    return arr;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> ans = solution(arr);

    for(int num : ans){
        cout << num;
    }

    return 0;
}