#include<iostream>
#include<vector>
using namespace std;

int solution(vector<int>& arr, int i){
    if(i == arr.size() - 1){
        return arr[i];
    }

    int maxInRemaining = solution(arr, i + 1);
    return max(arr[i], maxInRemaining); 
}


int main(){
    vector<int> arr = {1, 6, 8, 2, 3, 9};
    cout << solution(arr,0);
    return 0;
}