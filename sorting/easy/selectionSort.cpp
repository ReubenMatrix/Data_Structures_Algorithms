#include<iostream>
#include<vector>
using namespace std;

void solution(vector<int>& arr){
    for(int i = 0; i < arr.size() - 1; i++){
        int mini = i;

        for(int j = i + 1; j < arr.size(); j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }

        swap(arr[i], arr[mini]);
    }
}



int main(){
    vector<int> arr = {64, 25, 12, 22, 11};
    solution(arr);

      for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}