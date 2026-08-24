#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

bool solution(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        for(int j = i + 1; j < arr.size(); j++){
            if(arr[i] == arr[j]){
                return true;
            }
        }
    }

    return false;
}



bool optimalSolution(vector<int> arr){
    unordered_set<int> st;

    for(int i = 0; i < arr.size(); i++){
        if(st.find(arr[i]) != st.end()){
            return true;
        }

        st.insert(arr[i]);
    }

    return false;
}


int main(){
    vector<int> arr = {4, 2, 9, 0, 4, 8};
    cout << solution(arr) << endl;
    cout << optimalSolution(arr);

    return 0;
}