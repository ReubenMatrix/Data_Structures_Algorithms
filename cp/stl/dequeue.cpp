#include<iostream>
#include<deque>
using namespace std;

void solution(){
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(3);
    dq.emplace_front(4);


    dq.pop_back();
    dq.pop_front();

    dq.back();
    dq.front();
}