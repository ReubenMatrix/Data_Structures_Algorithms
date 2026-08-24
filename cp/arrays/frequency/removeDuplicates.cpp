#include <iostream>
#include <unordered_map>
using namespace std;

void solution(int arr[], int n) {
    unordered_map<int, bool> mp;

    for (int i = 0; i < n; i++) {
        if (mp.find(arr[i]) == mp.end()) {
            cout << arr[i] << " ";
            mp[arr[i]] = true;
        }
    }
}

int main() {

    int n = 8;

    int arr[] = {
        10, 20, 10, 30, 20, 40, 30, 50
    };

    solution(arr, n);

    return 0;
}