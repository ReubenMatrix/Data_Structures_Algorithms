//  https://codeforces.com/problemset/problem/43/A

#include<iostream>
#include<unordered_map>
using namespace std;

string solution(int n, string goals[]){
    unordered_map<string, int> mp;

    for(int i = 0; i < n; i++){
        mp[goals[i]]++;
    }

    string winner;
    int maxGoals = 0;

    for(auto& x : mp){
        if(x.second > maxGoals){
            maxGoals = x.second;
            winner = x.first;
        }
    }

    return winner;
}


int main() {

    int n = 5;
    string goals[] = {
        "A",
        "ABA",
        "ABA",
        "A",
        "A"
    };

    cout << solution(n, goals);

    return 0;
}