#include<iostream>
#include<vector>
using namespace std;

int solution(vector<int> arr, int target){
    int res = INT_MAX;

    for(int i = 0; i < arr.size(); i++){
        int currSum = 0;
        for(int j = i; j < arr.size(); j++){
            currSum += arr[j];

            if(currSum >= target){
                res = min(res, j - i + 1);
                break;
            }

        }
    }


    return res;
}



int optimalSolution(vector<int> arr, int target){
    int l = 0; 
    int total = 0;
    int res = INT_MAX;

    for(int r = 0; r < arr.size(); r++){
        total += arr[r];

        while(total >= target){
            res = min(res, r - l + 1);
            total -= arr[l];
            l++;
        }
    }

    return res;

}



int main() {
    vector<int> arr = {2, 3, 1, 2, 4, 3};
    int target = 7;

    int ans = solution(arr, target);

    cout << ans << endl;
    cout << optimalSolution(arr, target) << endl;

    return 0;
}