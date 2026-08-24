#include<iostream>
#include<list>
using namespace std;

void solution(){
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_back(5);
}