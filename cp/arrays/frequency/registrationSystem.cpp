// https://codeforces.com/problemset/problem/4/C


#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

string solution(unordered_map<string, int>& mp, string name){
    if(mp.find(name) == mp.end()){
        mp.insert({name, 1});
        return "OK";
    }


    int num = mp[name];
    while (mp.find(name + to_string(num)) != mp.end())
    {
        num ++;
    }


    string newName = name + to_string(num);
    mp[name] = num + 1;
    mp[newName] = 1;
    return newName;

}

int main() {

    int n = 5;

    string names[] = {
        "bob",
        "bob",
        "bob",
        "alice",
        "bob"
    };

    unordered_map<string, int> mp;

    for(int i = 0; i < n; i++) {
        cout << solution(mp, names[i]) << endl;
    }

    return 0;
}