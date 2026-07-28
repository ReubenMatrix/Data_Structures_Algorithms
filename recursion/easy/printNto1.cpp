#include<iostream>
using namespace std;

void solution(int i){
    if(i == 0){
        return;
    }

    cout << i << " ";
    solution(i - 1);

}


int main() {
    int n = 6;

    solution(9);

    return 0;
}