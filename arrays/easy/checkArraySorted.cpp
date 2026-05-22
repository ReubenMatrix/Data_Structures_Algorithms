#include<vector>
#include<iostream>
using namespace std;

bool solution(vector<int> arr){
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] < arr[i - 1]){
            return false;
        }
    }

    return true;
}


int main(){
    vector<int> arr = {1,3,5,2,8};
    cout << solution(arr);
    return 0;
}