#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int k, int x) {
    int n = arr.size();

    int right = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
    int left = right - 1;

    while (right - left - 1 < k) {

        if (left < 0) {
            right++;
        }
        else if (right >= n) {
            left--;
        }
        else if (x - arr[left] <= arr[right] - x) {
            left--;
        }
        else {
            right++;
        }
    }

    vector<int> res;

    for (int i = left + 1; i < right; i++) {
        res.push_back(arr[i]);
    }

    return res;
}

int main() {
    vector<int> arr = {2, 4, 5, 8};
    int k = 2;
    int x = 6;

    vector<int> ans = solution(arr, k, x);

    for (int num : ans) {
        cout << num << " ";
    }

    return 0;
}