#include<iostream>
#include<vector>
using namespace std;

int bruteSolution(vector<int> arr, int target){
    int len = INT_MAX;

    for(int i = 0; i < arr.size(); i++){
        int currSum = 0;
        for(int j = i; j < arr.size(); j++){
            currSum += arr[j];

            if(currSum >= target){
                len = min(len, j - i + 1);
            }
        }
    }

    return len;
}


int optimalSolution(vector<int> arr, int target){
    int left = 0;
    int currSum = 0;
    int len = INT_MAX;

    for(int right = 0; right < arr.size(); right++){
        currSum += arr[right];

        while(currSum >= target){
            len = min (len, right - left + 1);
            currSum -= arr[left];
            left++;
        }
    }

    return len;
}


int main(){
    vector<int> arr = {2,3,1,2,4,3};
    cout << bruteSolution(arr, 7) << endl;
    cout << optimalSolution(arr, 7);
    return 0;
}