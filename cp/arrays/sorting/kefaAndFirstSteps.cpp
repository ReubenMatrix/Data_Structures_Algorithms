//   https://codeforces.com/problemset/problem/580/A



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> arr) {
    int current = 1;
    int maximum = 1;

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] >= arr[i - 1]) {
            current++;
        } else {
            current = 1;
        }

        maximum = max(maximum, current);
    }

    return maximum;
}

int main() {
    vector<int> arr = {2, 2, 3, 1, 2, 2};

    cout << solution(arr) << endl;

    return 0;
}