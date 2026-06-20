#include<iostream>
#include<vector>
#include<stack>
using namespace std;


vector<int> bruteSolution(vector<int> prices){
    vector<int> span(prices.size());

    for(int i = 0; i < prices.size(); i++){
        span[i] = 1;

        for(int j = i - 1; j >= 0; j--){
            if(prices[j] <= prices[i]){
                span[i] ++;
            }else{
                break;
            }
        }
    }

    return span;
}


class StockSpanner{
    private:
        stack<pair<int, int>> st;

    public:
        int next(int price){
            int span = 1;

            while(!st.empty() && st.top().first <= price){
                span += st.top().second;
                st.pop();
            }

            st.push({price, span});
            return span;
        }
};


int main(){
    vector<int> prices = {100, 80, 60, 70, 60, 75, 85};
    vector<int> ans = bruteSolution(prices);

    for (int x : ans) {
        cout << x << " ";
    }

    cout << endl;


    StockSpanner sp;

    vector<int> prices2 = {100, 80, 60, 70, 60, 75, 85};

    for (int price : prices2) {
        cout << sp.next(price) << " ";
    }

    return 0;
}