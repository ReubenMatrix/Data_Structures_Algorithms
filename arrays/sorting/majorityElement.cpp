#include<iostream>
#include<vector>
#include<math.h>
using namespace std;


int solution(vector<int> arr){
    int n = arr.size();

    int candidate = 0;
    int count = 0;

    for(int num : arr){
        if(count == 0){
            candidate = num;
        }

        if(num == candidate){
            count ++;
        }else{
            count--;
        }
    }

    return candidate;
}


int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    cout << solution(nums);

    return 0;
}