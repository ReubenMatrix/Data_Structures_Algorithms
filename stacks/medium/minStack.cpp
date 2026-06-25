#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class MinStack{
    private:
        stack<int> st;
        stack<int> minSt;

    public:
        MinStack(){}

        void push(int val){
            st.push(val);

            if(minSt.empty() || val <= minSt.top()){
                minSt.push(val);
            }
        }

        void pop(){
            if(st.empty()){
                return;
            }

            if(st.top() == minSt.top()){
                minSt.pop();
            }

            st.pop();
        }

        int top(){
            return st.top();
        }


        int getMin(){
            return minSt.top();
        }
};


int main() {
    MinStack ms;

    ms.push(-2);
    ms.push(0);
    ms.push(-3);

    cout << ms.getMin() << endl;

    ms.pop();

    cout << ms.top() << endl;    
    cout << ms.getMin() << endl; 

    return 0;
}