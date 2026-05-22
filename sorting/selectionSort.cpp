#include<vector>
#include<iostream>
using namespace std;

vector<int> solution(vector<int> arr){
    int n = arr.size();

    for(int i = 0; i <= n - 2; i ++){
        int mini = i;

        for(int j = i + 1; j < n - 1; j ++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }

        swap(arr[i], arr[mini]);
    }
    return arr;

}


int main(){
    vector<int> arr = {2, 3, 6, 1, 7};
    vector<int> ans = solution(arr);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] ;
    }

    return 0;

}