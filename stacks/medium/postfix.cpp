#include <iostream>
#include <stack>
using namespace std;

int solution(string s)
{
    stack<int> st;

    for (char ch : s)
    {
        if (isdigit(ch))
        {
            st.push(ch - '0');
        }

        else
        {
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();

            switch (ch)
            {
            case '+':
                st.push(a + b);
                break;

            case '-':
                st.push(a - b);
                break;

            case '*':
                st.push(a * b);
                break;

            case '/':
                st.push(a / b);
                break;
            }
        }
    }

    return st.top();
}


int main() {
    string exp = "231*+9-";
    cout << solution(exp);
}