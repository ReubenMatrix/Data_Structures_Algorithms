#include<vector>
#include<iostream>
#include<string>
using namespace std;

string solution(string s){
    vector<int> lastIndex(26);

    for(int i = 0; i < s.size(); i++){
        lastIndex[s[i] - 'a'] = i;
    }


    vector<bool> inStack(26, false);
    string st;

    for(int i = 0; i < s.size(); i++){
        char ch = s[i];

        if(inStack[ch - 'a']){
            continue;
        }

        while (!st.empty() && st.back() > ch && lastIndex[st.back() - 'a'] > i)
        {
            inStack[st.back() - 'a'] = false;
            st.pop_back();
        }


        st.push_back(ch);
        inStack[ch - 'a'] = true;
        
    }

    return st;
}



int main() {
    string s = "cbacdcbc";

    cout << solution(s);

    return 0;
}