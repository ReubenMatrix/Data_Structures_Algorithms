#include<iostream>
#include<cmath>
using namespace std;

void solution(int n){
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cout << i << endl;
        }
    }
}


//Time Complexity = O(N)


void solution2(int n){
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            cout << i << endl;

            if((n / i) != i){
                cout << (n / i) << endl;
            }
        }
    }
}



int main(){
    int n = 36;
    solution(n);
    solution2(n);
    return 0;
}