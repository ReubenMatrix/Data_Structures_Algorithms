#include<iostream>
#include<vector>
using namespace std;

vector<int> solution(vector<int> arr){
    vector<int> ans(arr.size(), 1);

    for(int i = 1; i < arr.size(); i++){
        if(arr[i] > arr[i - 1]){
            ans[i] = ans[i - 1] + 1;
        }
    }

    for(int i = arr.size() - 2; i >=0; i--){
        if(arr[i] > arr[i + 1]){
            ans[i] = max(ans[i], ans[i + 1] + 1);
        }
    }

    return ans;
}



int main() {
    vector<int> ratings = {1, 0, 2};

    vector<int> candies = solution(ratings);

    for (int candy : candies) {
        cout << candy << " ";
    }

    return 0;
}