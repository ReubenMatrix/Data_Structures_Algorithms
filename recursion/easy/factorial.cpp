#include<iostream>
using namespace std;

int solution(int n){
    if(n == 0 || n == 1){
        return 1;
    }

    return n * solution(n - 1);
}


int main(){
    cout << solution(5);
    return 0;
}