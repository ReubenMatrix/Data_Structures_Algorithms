#include<iostream>
#include<cmath>
using namespace std;

int solution(int n){
    int count = 0;

    while(n > 0){
        int digit = n % 10;
        count ++;
        n = n / 10;
    }

    return count;
}


//Time Complexity: O(log10(N))


int solution2(int n){
    int count = (int)log10(n) + 1;
    return count;
}

int main(){
    int n = 23678;
    cout << solution(n) << endl;
    cout << solution2(n);
    return 0;
}