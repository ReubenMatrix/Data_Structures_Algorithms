#include<iostream>
#include<vector>
#include<unordered_map>
#include<stack>
using namespace std;


vector<int> solution(vector<int> arr1, vector<int> arr2){
    unordered_map<int, int> mp;

    stack<int> st;
    vector<int> ans;

    for(int i = arr2.size() - 1; i >= 0; i--){
        while(!st.empty() && st.top() <= arr2[i]){
            st.pop();
        }

        mp[arr2[i]] = st.empty() ? -1 : st.top();
        st.push(arr2[i]);
    }

        for (int num : arr1)
    {
        ans.push_back(mp[num]);
    }

    return ans;
}


int main()
{
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};

    vector<int> ans = solution(nums1, nums2);

    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}