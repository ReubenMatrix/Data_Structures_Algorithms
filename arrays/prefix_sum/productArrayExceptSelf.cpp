#include<iostream>
#include<vector>
using namespace std;

vector<int> solution(vector<int> arr){
    vector<int> ans(arr.size(), 1);

    int prefix = 1;
    for(int i = 0; i < arr.size(); i++){
        ans[i] = prefix;
        prefix *= arr[i];
    }


    int suffix = 1;
     for(int i = arr.size() - 1; i >= 0; i--){
        ans[i] *= suffix;
        suffix *= arr[i];
    }

    return ans;

}


int main(){
    vector<int> arr = {1, 2, 3, 4};

    vector<int> result = solution(arr);

    for(int num : result){
        cout << num << " ";
    }

    return 0;
}