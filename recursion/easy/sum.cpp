#include<iostream>
using namespace std;

int solution(int i, int n){
    if(i == n){
        return n;
    }

    return i + solution(i + 1, n);
}


int main(){
    cout << solution(0,7);
    return 0;
}