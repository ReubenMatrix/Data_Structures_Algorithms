#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;


bool solution(vector<vector<int>> arr){
    sort(arr.begin(), arr.end());

    for(int i = 0; i < arr.size() - 1; i++){
        if(arr[i][1] > arr[i + 1][0]){
            return false;
        }
    }

    return true;
}


int main(){
    vector<vector<int>> arr = {{0,15},{5,10},{15,20}};
    cout << solution(arr);
    return 0;
}