#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> solution(vector<int> arr){
    unordered_map<int, int> freq;

    for(int n : arr){
        freq[n]++;
    }

    int index = 0;

    while(freq[0]--){
        arr[index] = 0;
        index++;
    }

    while(freq[1]--){
        arr[index] = 1;
        index++;
    }

    while(freq[2]--){
        arr[index] = 2;
        index++;
    }


    return arr;

}


vector<int> optimalSolution(vector<int> arr){

    int low = 0;
    int mid = 0;
    int high = arr.size() - 1;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }

        else if(arr[mid] == 1){
            mid++;
        }

        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    return arr;
}

int main() {

    vector<int> arr = {2, 0, 2, 1, 1, 0, 1};

    vector<int> arr2 = {2, 0, 2, 1, 1, 0, 1};

    vector<int> ans = solution(arr);
    vector<int> ans2 = optimalSolution(arr2);

    for(int num : ans){
        cout << num << " ";
    }

    cout << " " << endl;


     for(int num : ans2){
        cout << num << " ";
    }

    return 0;
}