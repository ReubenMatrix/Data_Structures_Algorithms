#include<iostream>
using namespace std;

bool solution(int n){
    int dup = n;
    int revNum = 0;

    while(n > 0){
        int digit = n % 10;
        n = n / 10;
        revNum = (revNum * 10) + digit;
    }

    if(revNum == dup){
        return true;
    }

    return false;
}

int main(){
    int n = 1001001;
    cout << solution(n);
    return 0;
}