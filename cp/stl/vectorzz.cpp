#include<iostream>
#include<vector>
using namespace std;


void solution(){
    vector<int> ans;

    ans.push_back(1);
    ans.emplace_back(2);


    vector<pair<int, int>> ans2;
    ans2.push_back({1,3});


    vector<int> ans3(5,100);
    vector<int> ans4(5);

    ans3.erase(ans3.begin(), ans3.begin() + 1);

    

}