#include<iostream>
#include<vector>
using namespace std;


bool canJump(int index, vector<int> arr){
    int n = arr.size();

    if(index >= n - 1){
        return true;
    }

    for(int jump = 1; jump <= arr[index]; jump++){
        if(canJump(index + jump, arr)){
            return true;
        }
    }

    return false;
}


bool bruteSolution(vector<int> arr){
    return canJump(0, arr);

}



bool optimalSolution(vector<int>& nums) {
    int goal = nums.size() - 1;

    for(int i = nums.size() - 1; i >= 0; i--) {
        if(i + nums[i] >= goal) {
            goal = i;
        }
    }

    return goal == 0;
}



int main() {
    vector<int> nums = {2, 3, 1, 1, 4};

    cout << bruteSolution(nums) << endl;
    cout << optimalSolution(nums);

    return 0;
}