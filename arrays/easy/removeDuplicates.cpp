#include<iostream>
#include<vector>
#include<set>
using namespace std;

vector<int> solution(vector<int> arr){
    set<int> uniqueArr;

    for(int num : arr){
        uniqueArr.insert(num); 
    }

    int i = 0;
    for(int num : uniqueArr){
        arr[i] = num;
        i++;
    }
    arr.resize(i);
    return arr;
}


vector<int> optimalSolution(vector<int> arr){
    int i = 0;

    for(int j = 1; j < arr.size(); j++){
        if(arr[j] != arr[i]){
            i++;
            arr[i] = arr[j];
        }
    }
    arr.resize(i + 1);
    return arr;
}




int main(){
    vector<int> arr = {1, 3, 3, 5, 6, 7, 7};
    vector<int> ans = solution(arr);

    for(int num : ans){
        cout << num;
    }


    vector<int> arr2 = {1, 3, 3, 5, 6, 7, 7};
    vector<int> ans2 = optimalSolution(arr2);

    for(int num : ans2){
        cout << num;
    }

    return 0;
}
