// Given an integer array arr[] and an integer k, determine whether there exist two indices i and j such that arr[i] == arr[j] and |i - j| ≤ k.
// If such a pair exists, return 'Yes', otherwise return 'No'.

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool solution(vector<int> arr, int d)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j <= i + d && j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                return true;
            }
        }
    }
    return false;
}

// Time Complexity: O(N * d)
// Space Complexity: O(1)

bool optimalSolution(vector<int> arr, int d)
{
    unordered_set<int> window;

    for (int i = 0; i < arr.size(); i++)
    {
        if (window.count(arr[i]))
        {
            return true;
        }

        window.insert(arr[i]);

        if (window.size() > d)
        {
            window.erase(arr[i - d]);
        }
    }

    return false;
}

// Time Complexity: O(N)
// Space Complexity: O(d)

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int d = 3;
    cout << solution(arr, d) << endl;
    cout << optimalSolution(arr, d) << endl;
    return 0;
}
