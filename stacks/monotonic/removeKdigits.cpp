#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;


string solution(string num, int k){
    stack<char> st;

    for(char digit : num){
        if(!st.empty() && k > 0 && st.top() > digit){
            st.pop();
            k--;
        }
        st.push(digit);
    }


    while(k > 0){
        st.pop();
        k--;
    }


    string ans;
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }


    reverse(ans.begin(), ans.end());

    return ans;
}


int main() {
    string num = "1432219";
    int k = 3;

    cout << solution(num, k);
    return 0;
}
