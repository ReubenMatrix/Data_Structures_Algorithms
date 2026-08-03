#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solution(int index, vector<int> &arr, int target, vector<int> &curr, vector<vector<int>> &ans)
{

    if (target == 0)
    {
        ans.push_back(curr);
        return;
    }

    if (index == arr.size() || target < 0)
        return;

    curr.push_back(arr[index]);
    solution(index + 1, arr, target - arr[index], curr, ans);
    curr.pop_back();

    while (index + 1 < arr.size() && arr[index] == arr[index + 1])
    {
        index++;
    }

    solution(index + 1, arr, target, curr, ans);
}

int main()
{
    vector<int> arr = {10, 1, 2, 7, 6, 1, 5};
    int target = 8;

    sort(arr.begin(), arr.end());

    vector<vector<int>> ans;
    vector<int> curr;

    solution(0, arr, target, curr, ans);

    for (auto &v : ans)
    {

        for (int x : v)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}