#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int bruteSolution(vector<int> arr, vector<int> dep){
    int n = arr.size();
    int minCount = 0;

    for(int i = 0; i < n; i++){
        int count = 1;

        for(int j = i + 1; j < n; j ++){
            if((arr[i] >= arr[j] && arr[i] <= dep[j]) || (arr[j] >= arr[i] && arr[j] <= dep[i])){
                count ++;
            }
        }
        minCount = max(count, minCount);
    }

    return minCount;
}


int optimalSolution(vector<int> arr, vector<int> dep){
    int n = arr.size();
    int i = 0;
    int j = 0;
    int platforms = 0;
    int maxPlatforms = 0;

    while(i < n && j < n){
        if(arr[i] <= dep [j]){
            platforms++;
            maxPlatforms = max(maxPlatforms, platforms);
            i++;
        }else{
            platforms--;
            j++;
        }

    }

    return maxPlatforms;
}


int main() {
    vector<int> arr = {900, 940, 950, 1100, 1500, 1800};
    vector<int> dep = {910, 1200, 1120, 1130, 1900, 2000};

    cout << bruteSolution(arr, dep)  << endl;


    vector<int> arr1 = {900, 940, 950, 1100, 1500, 1800};
    vector<int> dep1 = {910, 1200, 1120, 1130, 1900, 2000};

    cout << optimalSolution(arr1, dep1);

    return 0;
}