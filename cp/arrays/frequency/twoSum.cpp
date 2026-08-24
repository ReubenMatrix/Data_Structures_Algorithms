#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


vector<int> solution(vector<int> arr, int target){
    for(int i = 0; i < arr.size(); i++){
        for(int j = i + 1; j < arr.size(); j++){
            if(arr[i] + arr[j] == target){
                return {i,j};
            }
        }
    }

    return {};
}



vector<int> optimalSolution(vector<int> arr, int target){
    unordered_map<int, int> mp;

    for(int i = 0; i < arr.size(); i++){
        int complement = target - arr[i];

        if(mp.find(complement) != mp.end()){
            return {mp[complement] , i};
        }

        mp[arr[i]] = i;
    }

    return {};
}


int main(){
    vector<int> arr = {1, 4, 3, 6, 8, 3};
    vector<int> ans =  solution(arr, 7);
    for(auto x : ans){
        cout << x << " ";
    }

    cout << endl;

    vector<int> optimalAns = optimalSolution(arr, 7);

    for (auto x : optimalAns) {
        cout << x << " ";
    }

    return 0;

}