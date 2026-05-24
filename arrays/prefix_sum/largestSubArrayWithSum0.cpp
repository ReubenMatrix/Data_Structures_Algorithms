#include<iostream>
#include<vector>
#include<unordered_map>
#include<math.h>
using namespace std;

int solution(vector<int> arr){
    unordered_map<int,int> mp;

    int sum = 0;
    int maxi = 0;

    for(int i = 0; i < arr.size(); i++){
        sum = sum + arr[i];

        if(sum == 0){
            maxi = i + 1;
        }

        if(mp.find(sum) != mp.end()){
            maxi = max(maxi, i - mp[sum]);
        } else {
            mp[sum] = i;
        }
    }

    return maxi;
}


int main(){
    vector<int> arr = {15, -2, 2, -8, 1, 7, 10, 23};

    cout << solution(arr) << endl;

    return 0;
}