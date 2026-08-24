#include<iostream>
#include<unordered_map>
using namespace std;

void solution(){
    unordered_map<int, int> mp;

    mp.insert({10, 100});
    mp[20] = 200;
    mp[30] = 300;
    mp.insert({40, 400});

    if(mp.find(20) != mp.end()){
        cout << true << endl;
    }

    cout << mp.size() << endl;

    for(auto x : mp){
        cout << x.first << " " << x.second << endl;
    }
}


int main(){
    solution();
    return 0;
}