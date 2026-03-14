// Reverse an array arr[]. Reversing an array means rearranging the elements such that the first element becomes the last, 
// the second element becomes second last and so on.

#include<iostream>
#include<vector>
#include <cmath>
using namespace std;

void solution(vector<int> arr){
    int n = arr.size();
    int mid = floor(n / 2);
    
    for(int i = 0; i <  mid; i++){
        swap(arr[i] , arr[n - i - 1]);
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

//Time Complexity: O(N / 2)
//Space Complexity: O(1)

int main(){
    vector<int> arr = {1, 4, 3, 2, 6, 5};
    solution(arr);
}