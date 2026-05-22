#include<iostream>
#include<vector>
using namespace std;


vector<int> solution(vector<int> A, vector<int> B){
    int l = 0;
    int r = 0;
    int i = 0;

    vector<int> ans(A.size() + B.size());

    while(l < A.size() && r < B.size()){
        if(A[l] < B[r]){
            ans[i] = A[l];
            l++;
            i++;
        }else{
            ans[i] = B[r];
            r++;
            i++;
        }

    }


    while(l < A.size()){

        ans[i] = A[l];
        l++;
        i++;
    }

 
    while(r < B.size()){

        ans[i] = B[r];
        r++;
        i++;
    }

    return ans;
}

int main(){
    vector<int> arr1 = {1, 2, 3};
    vector<int> arr2 = {5, 6, 7, 8};
    vector<int> ans = solution(arr1, arr2);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i];
    }

    return 0;
}