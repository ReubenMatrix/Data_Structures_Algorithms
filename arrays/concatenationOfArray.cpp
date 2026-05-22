#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int> arr, int x)
{
    vector<int> ans;
    int times = 0;

    while (times < x)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            ans.push_back(arr[i]);
        }
        times++;
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3};
    int x = 2;
    vector<int> ans = solution(arr, x);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }

    return 0;
}