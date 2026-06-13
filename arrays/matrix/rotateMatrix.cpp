#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solution(vector<vector<int>>& arr){
    int n = arr.size();

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

    for(int i = 0; i < n; i++){
        reverse(arr[i].begin(), arr[i].end());
    }

}


int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    solution(matrix);

    for (auto row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}