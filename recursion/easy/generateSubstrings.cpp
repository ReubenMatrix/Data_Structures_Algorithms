#include<iostream>
#include<vector>
using namespace std;

void solution(string& s, int start){
    if(start == s.size()){
        return;
    }

    string temp = "";

    for(int i = start; i < s.size(); i++){
        temp += s[i];
        cout << temp << endl;
    }

    solution(s, start + 1);
}



int main(){
    string s = "abc";
    solution(s, 0);
    return 0;
}