// Given an array of integers arr[], move all the zeros to the end of the array
// while maintaining the relative order of all non-zero elements.

#include <iostream>
#include <vector>
using namespace std;

void solution(vector<int> arr)
{
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != 0)
        {
            ans.push_back(arr[i]);
        }
    }
    while (ans.size() < arr.size())
    {
        ans.push_back(0);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

// Time Complexity: O(N)
// Space Complexity: O(N)


int main()
{
    vector<int> arr = {1, 0, 2, 0, 5};
    solution(arr);
}