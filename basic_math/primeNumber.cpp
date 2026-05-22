#include<iostream>
#include<cmath>
using namespace std;


bool solution(int n){
    int count = 0;

    for(int i = 1;  i <= sqrt(n); i++){
        if(n % 1 == 0){
            count ++;
            if((n / i) != i ){
                count ++;
            }
        }
    }

    if(count > 2){
        return false;
    }
    return true;
}



int main(){
    int n = 12;
    cout << solution(n);
    return 0;
}