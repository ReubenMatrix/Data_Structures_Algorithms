// https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/1

#include<iostream>
#include<vector>
using namespace std;

vector<int> solution(vector<int> arr){
    vector<int> freq(arr.size(), 0);


    for(auto x : arr){
        freq[x - 1] ++;
    }

    return freq;
}



int main(){
    vector<int> arr = {2, 3, 2, 3, 5};
    vector<int> res = solution(arr);

    for(auto x : res){
        cout << x << " ";
    }

    return 0;
}