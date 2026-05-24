#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


int solution(vector<int> arr, int target){
    int count = 0;

    for(int i = 0; i < arr.size(); i++){
        for (int j = i; j < arr.size(); j++){
            int sum = 0;
            for(int k = i; k <= j; k++){
                sum = sum + arr[k];
            }
            if(sum == target){
                count++;
            }
        }
    }

    return count;
}


int optimalSolution(vector<int> arr, int target){
    unordered_map<int, int> mp;

    mp[0] = 1;

    int prefix = 0;
    int count = 0;

    for(int i = 0; i < arr.size(); i++){
        prefix = prefix + arr[i];

        if(mp.find(prefix - target) != mp.end()){
            count += mp[prefix - target];
        }

        mp[prefix]++;
    }

    return count;
}



int main(){
    vector<int> arr = {1,2,3};
    cout << solution(arr, 3);

    vector<int> arr2 = {1,1,1};
    cout << optimalSolution(arr2, 3);

    return 0;
}

