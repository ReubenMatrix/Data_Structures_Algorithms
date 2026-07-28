#include<iostream>
using namespace std;

void solution(int i, int n){
    if(i > n){
        return;
    }

    cout << i << " ";
    solution(i + 1, n);

}


int main() {
    int n = 6;

    solution(1, n);

    return 0;
}