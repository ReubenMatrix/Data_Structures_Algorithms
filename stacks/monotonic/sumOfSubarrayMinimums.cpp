#include<vector>
#include<stack>
#include<iostream>
using namespace std;

int bruteSolution(vector<int> arr){
    int sum = 0;

    for(int i = 0; i < arr.size(); i++){
        int mini = INT_MAX;

        for(int j = i; j < arr.size(); j++){
            mini = min(mini, arr[j]);
            sum += mini;
        }
    }

    return sum;
}



int optimalSolution(vector<int> arr){
    int mod = 1e9 + 7;
    vector<int> pse(arr.size());
    vector<int> nse(arr.size());
    stack<int> st;

    for(int i = 0; i < arr.size(); i++){
        while(!st.empty() && arr[st.top()] > arr[i]){
            st.pop();
        }

        pse[i] = st.empty() ? -1 : st.top();
        st.push(i);
    }


    while(!st.empty()){
        st.pop();
    } 


    for(int i = arr.size() - 1; i >= 0; i--){
        while(!st.empty() && arr[st.top()] >= arr[i]){
            st.pop();
        }

        nse[i] = st.empty() ? arr.size() : st.top();
        st.push(i);

    }


    long long ans = 0;

    for (int i = 0; i < arr.size(); i++) {
        long long left = i - pse[i];
        long long right = nse[i] - i;
        ans = (ans + (arr[i] * left % mod) * right) % mod;
    }

    return ans;
}



int main(){
    vector<int> arr = {3, 1, 2, 4};

    cout << bruteSolution(arr)<< endl;
    cout << optimalSolution(arr);

    return 0;
}