#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
    vector<int> st;

public:
    void push(int x) {
        st.push_back(x);
    }

    void pop() {
        if (!st.empty()) {
            st.pop_back();
        }
    }

    int top() {
        if (st.empty()) {
            return -1;
        }
        return st.back();
    }

    bool empty() {
        return st.empty();
    }

    int size() {
        return st.size();
    }
};

int main() {
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top: " << st.top() << endl;

    st.pop();

    cout << "Top: " << st.top() << endl;  

    cout << "Size: " << st.size() << endl; 

    cout << "Empty: " << st.empty() << endl; 

    return 0;
}