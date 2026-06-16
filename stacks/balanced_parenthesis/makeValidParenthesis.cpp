#include<iostream>
#include<stack>
using namespace std;

int solution(string s){
    int open = 0;
    int close = 0;

    for(char c : s){
        if(c == '('){
            open ++;
        }
        else{
            if(open > 0){
                open --;
            }else{
                close ++;
            }
        }
    }

    return open + close;
}


int main(){
    string s = "((())";
    cout << solution(s);
    return 0;
}