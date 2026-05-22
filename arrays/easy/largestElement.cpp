#include<vector>
#include<iostream>
using namespace std;


int solution(vector<int> arr){
    int largest = arr[0];

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    return largest;
}


int main(){
    vector<int> arr = {4, 5, 2, 8, 6, 9};
    cout << solution(arr);
}