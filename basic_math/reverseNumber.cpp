#include<iostream>
using namespace std;

int solution(int n){
    int revNum = 0;

    while(n > 0){
        int digit = n % 10;
        n = n / 10;
        revNum = (revNum * 10) + digit;
    }

    return revNum;
}

int main(){
    int n = 593234000;
    cout << solution(n);
    return 0;
}