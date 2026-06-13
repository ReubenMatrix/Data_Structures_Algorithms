#include <iostream>
#include <vector>
using namespace std;

void solution(vector<vector<int>>& arr)
{
    bool firstRowZero = false;
    bool firstColZero = false;

    int n = arr.size();
    int m = arr[0].size();

    // Check first row
    for (int j = 0; j < m; j++)
    {
        if (arr[0][j] == 0)
        {
            firstRowZero = true;
            break;
        }
    }

    // Check first column
    for (int i = 0; i < n; i++)
    {
        if (arr[i][0] == 0)
        {
            firstColZero = true;
            break;
        }
    }

    // Mark rows and columns
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                arr[i][0] = 0;
                arr[0][j] = 0;
            }
        }
    }

    // Zero rows
    for (int i = 1; i < n; i++)
    {
        if (arr[i][0] == 0)
        {
            for (int j = 1; j < m; j++)
            {
                arr[i][j] = 0;
            }
        }
    }

    // Zero columns
    for (int j = 1; j < m; j++)
    {
        if (arr[0][j] == 0)
        {
            for (int i = 1; i < n; i++)
            {
                arr[i][j] = 0;
            }
        }
    }

    // Handle first row
    if (firstRowZero)
    {
        for (int j = 0; j < m; j++)
        {
            arr[0][j] = 0;
        }
    }

    // Handle first column
    if (firstColZero)
    {
        for (int i = 0; i < n; i++)
        {
            arr[i][0] = 0;
        }
    }
}



int main()
{
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    solution(matrix);

    for (auto row : matrix)
    {
        for (int num : row)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}