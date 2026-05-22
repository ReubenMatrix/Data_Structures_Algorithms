#include<iostream>
#include<vector>
using namespace std;

vector<int> solution(vector<int> arr){
    int n = arr.size();

    for(int i = 0; i < n - 1; i++){
        bool swapped = false;

        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j] , arr[j + 1]);
                swapped = true;
            }
        }

        if(!swapped){
            break;
        }
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