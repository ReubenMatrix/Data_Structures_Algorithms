#include<iostream>
using namespace std;

void solution(int n){
    while(n > 0){
        int digit = n % 10;
        n = n / 10;
        cout << digit << "";
    }
}

int main(){
    int n = 314578;
    solution(n);
    return 0;
}