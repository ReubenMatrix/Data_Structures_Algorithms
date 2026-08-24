#include<iostream>
#include<stack>
using namespace std;

void solution(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.emplace(6);

    cout<< st.top();
    cout<< st.size();

}