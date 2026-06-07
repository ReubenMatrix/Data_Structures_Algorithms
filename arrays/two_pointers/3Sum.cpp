#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> solution(vector<int> arr)
{
    if (arr.size() < 3)
    {
        return {};
    };

    sort(arr.begin(), arr.end());

    vector<vector<int>> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        int low = i + 1;
        int high = arr.size() - 1;

        if (i > 0 && arr[i] == arr[i - 1])
            continue;

        while (low < high)
        {

            int sum = arr[low] + arr[i] + arr[high];

            if (sum == 0)
            {
                ans.push_back({arr[i], arr[low], arr[high]});
                low++;
                high--;
            }

            if (sum > 0)
            {
                high--;
            }
            else if (sum < 0)
            {
                low++;
            };
        }
    }

    return ans;
}

int main()
{

    vector<int> arr = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> ans = solution(arr);

    for (int i = 0; i < ans.size(); i++)
    {

        for (int j = 0; j < ans[i].size(); j++)
        {

            cout << ans[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}