#include<iostream>
#include<vector>
#include<unordered_set> 
using namespace std;

bool solution(vector<int> arr, int k){
    for(int i = 0; i < arr.size(); i++){
        for(int j = i + 1; j < arr.size(); j++){
            if(j - i > k){
                break;
            }

            if(arr[i] == arr[j]){
                return true;
            }
        }
    }

    return false;
}


bool optimalSolution(vector<int> arr, int k){
    unordered_set<int> st;

    for(int i = 0; i < arr.size(); i++){
        if(st.find(arr[i]) != st.end()){
            return true;
        }

        st.insert(arr[i]);

        if(i > k){
            st.erase(arr[i - k]);
        }
    }

    return false;
}

int main(){
    vector<int> arr = {1, 2, 3, 1};
    int k = 3;

    cout << solution(arr, k) << endl;
    cout << optimalSolution(arr, k) << endl;
    return 0;
}