#include<iostream>
#include<vector>
using namespace std;


vector<int> solution(vector<int> arr){
    int left = 0;
    int right = arr.size() - 1;

    vector<int> ans(arr.size());

    for(int i = arr.size() - 1; i >= 0; i--){
        if(abs(arr[left]) > abs(arr[right])){
            ans[i] = arr[left] * arr[left++];
        } else{
            ans[i] = arr[right] * arr[right--];
        }
    }

    return ans;
}


int main(){
    vector<int> arr = {-3, -2, 2, 3};
    vector<int> ans = solution(arr);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i];
    }

    return 0;

}