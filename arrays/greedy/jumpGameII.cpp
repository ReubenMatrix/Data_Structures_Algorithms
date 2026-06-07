#include<iostream>
#include<vector>
#include<math.h>
using namespace std;


int solution(vector<int> arr){
    int jumps = 0;
    int currentEnd = 0;
    int farthest = 0;

    for(int i = 0; i < arr.size() - 1; i++){
        farthest = max(farthest, i + arr[i]);

        if(i == currentEnd){
            jumps++;
            currentEnd = farthest;
        }
    }

    return jumps;
}


int main() {
    vector<int> nums = {2, 3, 1, 1, 4};

    cout << solution(nums);

    return 0;
}