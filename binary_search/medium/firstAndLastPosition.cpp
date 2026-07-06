#include<iostream>
#include<vector>
using namespace std;

int first(vector<int> arr, int target){
    int left = 0;
    int right = arr.size() - 1;
    int ans = -1;

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(arr[mid] == target){
            ans = mid;
            right = mid - 1;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return ans;
}



int last(vector<int> arr, int target){
    int left = 0;
    int right = arr.size() - 1;
    int ans = -1;

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(arr[mid] == target){
            ans = mid;
            left = mid + 1;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return ans;
}


vector<int> solution(vector<int> arr, int target){
    return {first(arr,target) , last(arr,target)};
}

int main(){
    vector<int> arr = {5, 7, 7, 8, 8, 10};
    int target = 8;

    vector<int> ans = solution(arr, target);

    cout << ans[0] << ans[1];

    return 0;
}