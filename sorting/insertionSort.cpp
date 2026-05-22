#include<iostream>
#include<vector>
using namespace std;

vector<int> solution(vector<int> arr){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        int j = i;

        while(j > 0 && arr[j - 1] > arr[j]){
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }

    return arr;
}


int main(){
    vector<int> arr = {2, 4, 5, 1, 8, 3, 4};
    vector<int> ans = solution(arr);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
    
}