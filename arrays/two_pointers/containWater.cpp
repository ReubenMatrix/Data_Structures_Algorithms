#include<iostream>
#include<vector>
#include<math.h>
using namespace std;


int solution(vector<int> arr){
    int area = 0;
    int left = 0;
    int right = arr.size() - 1;

    while(left < right){
        int currArea = (right - left) * min(arr[left], arr[right]);
        area = max(area, currArea);
        
        if(arr[left] < arr[right]){
            left++;
        }else{
            right--;
        }
    }

    return area;

}


int main(){
    vector<int> arr = {1,8,6,2,5,4,8,3,7};
    cout << solution(arr);

    return 0;
}