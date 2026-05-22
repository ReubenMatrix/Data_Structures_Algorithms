#include<iostream>
using namespace std;

bool solution(int n){
    int sum = 0;
    int dup = n;
    
    while(n > 0){
        int digit = n % 10;
        sum = sum + (digit * digit * digit);
        n = n / 10;
    }

    if(sum == dup){
        return true;
    }

    return false;
}


int main(){
    int n = 35;
    cout << solution(n);
    return 0;
}