#include<iostream>
using namespace std;


int solution(int n){
    if(n == 0){
        return 0;
    }

    return 1 + solution(n / 10);
}


int main(){
    cout << solution(12345);
    return 0;
}