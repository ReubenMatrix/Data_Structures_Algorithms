#include <iostream>
#include <stack>
using namespace std;

int solution(string s)
{
    stack<int> st;

    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (isdigit(s[i]))
        {
            st.push(s[i] - '0');
        }

        else
        {
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();

            switch (s[i])
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
    string exp = "-+2*319";
    cout << solution(exp);
}