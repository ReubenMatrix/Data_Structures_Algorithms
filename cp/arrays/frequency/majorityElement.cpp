#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

void solution(vector<int> arr){
    unordered_map<int, int> mp;

    for(auto x : arr){
        mp[x] ++;
    }

    int n = arr.size() / 2;

    for(auto x : mp){
        if(x.second > n){
            cout << x.first << endl;
        }
    }
}



int optimalSolution(vector<int> arr){
    int count = 0;
    int candidate = 0;

    for(auto x : arr){
        if(count == 0){
            candidate = x;
        }

        if(x == candidate){
            count ++;
        }else {
            count --;
        }
    }

    return candidate;
}

int main(){
    vector<int> arr = {2,2,1,1,1,2,2};
    solution(arr);

    int ans = optimalSolution(arr);
    cout << ans;

    return 0;
}