//   https://leetcode.com/problems/merge-sorted-array/description/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


vector<int> solution(vector<int> arr1, int m, vector<int> arr2, int n){
    vector<int> temp;

    for(int i = 0; i < m; i++){
        temp.push_back(arr1[i]);
    }

    for(int j = 0; j < n; j++){
        temp.push_back(arr2[j]);
    }

    sort(temp.begin(), temp.end());

    return temp;
}



void optimalSolution(vector<int> arr1, int m, vector<int> arr2, int n){
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while(i >= 0 && j >= 0){
        if(arr1[i] > arr2[j]){
            arr1[k] = arr1[i];
            i--;
        }else{
            arr1[k] = arr2[j];
            j --;
        }
        k--;
    }

    while(j >= 0){
        arr1[k] = arr2[j];
        j--;
        k--;
    }


    for(auto x : arr1){
        cout << x << " ";
    }

}


int main(){
    vector<int> arr1 = {1,2,3,0,0,0};
    int m = 3;
    vector<int> arr2 = {2,5,6};
    int n = 3;

    vector<int> ans = solution(arr1, m, arr2, n);

    for(auto x : ans){
        cout << x << " ";
    }
    cout << endl;

    optimalSolution(arr1, m, arr2, n);


    return 0;
}