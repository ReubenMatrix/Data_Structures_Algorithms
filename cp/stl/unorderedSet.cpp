#include<iostream>
#include<unordered_set>
using namespace std;

void solution(){
    unordered_set<int> st;

    st.insert(10);
    st.insert(20);
    st.insert(30);
    st.insert(50);
    st.insert(30);
    st.insert(15);

    for(auto x : st){
        cout << x << " ";
    }
    cout << endl;

    cout << st.size() << endl;

    if(st.find(20) != st.end()){
        cout << true << endl;
    }


    st.erase(20);

    
    for(auto x : st){
        cout << x << " ";
    }
    cout << endl;

    cout << st.size();
}


int main(){
    solution();
    return 0;
}