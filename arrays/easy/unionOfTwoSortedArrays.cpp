#include<iostream>
#include<vector>
using namespace std;

vector<int> solution(vector<int> arr1, vector<int> arr2){
    int i = 0;
    int j = 0;

    vector<int> ans;

    while(i < arr1.size() && j < arr2.size()){

        if(arr1[i] <= arr2[j]){

            if(ans.empty() || ans.back() != arr1[i]){
                ans.push_back(arr1[i]);
            }

            i++;
        }
        else{

            if(ans.empty() || ans.back() != arr2[j]){
                ans.push_back(arr2[j]);
            }

            j++;
        }
    }

    while(i < arr1.size()){

        if(ans.empty() || ans.back() != arr1[i]){
            ans.push_back(arr1[i]);
        }

        i++;
    }

    while(j < arr2.size()){

        if(ans.empty() || ans.back() != arr2[j]){
            ans.push_back(arr2[j]);
        }

        j++;
    }

    return ans;
}

int main(){

    vector<int> arr1 = {1, 2, 2, 3, 4, 5};
    vector<int> arr2 = {2, 3, 4, 4, 5, 6};

    vector<int> ans = solution(arr1, arr2);

    for(int num : ans){
        cout << num << " ";
    }

    return 0;
}