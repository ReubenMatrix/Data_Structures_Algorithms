#include<iostream>
using namespace std;

void Pair(){
    pair<int, int> p = {1, 5};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> p2 = {1, {2, 3}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;


    pair<int, int> p3[] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    cout << p3[0].second;

}


int main(){
    Pair();

    return 0;
}

