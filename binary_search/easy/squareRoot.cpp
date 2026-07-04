#include<iostream>
#include<vector>
using namespace std;

int bruteSolution(int x){
    if(x == 0){
        return 0;
    }

    int res = 1;
    for(int i = 1; i <= x; i++){
        if(i * i > x){
            return res;
        }
        res = i;
    }
    return res;
}


int optimalSolution(int x){
    int left = 0;
    int right = x/2;
    int res = 0;

    while(left <= right){
        int mid = left + ((right - left) / 2);

        if((long long)mid * mid == x){
            return mid;
        }
        else if ((long long)mid * mid > x)
        {
            right = mid - 1;
        }
        else{
            left = mid + 1;
            res = left;
        }
    }
    return res;
}


int main(){
    int x = 9;
    cout << bruteSolution(x);
    cout << optimalSolution(x);
    return 0; 
}