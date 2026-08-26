#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solution(vector<int> g, vector<int> s){
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    int i = 0;
    int j = 0;
    int count = 0;

    while(i < g.size() && j < s.size()){
        if(s[j] > g[i]){
            count ++;
            i++;
            j++;
        }
        else{
            j++;
        }
    }


    return count;
}


int main() {
    vector<int> g = {1, 2, 3};
    vector<int> s = {1, 1};

    cout << solution(g, s) << endl;

    return 0;
}