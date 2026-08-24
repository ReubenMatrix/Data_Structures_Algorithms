#include<iostream>;
#include<queue>;
using namespace std;

void solution(){
    queue<int> qu;
    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.emplace(4);

    cout << qu.back();
    cout << qu.front();
    qu.pop();

}