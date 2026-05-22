#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void solution(vector<int> arr, int target){
    for(int i = 0; i < arr.size(); i++){
        for(int j = i + 1 ; j < arr.size(); j++){
            if(arr[i] + arr[j] == target){
                cout << i + 1 << j + 1 << endl;
                return;
            }
        }
    }
    cout << -1 << -1;
}



void optimalSolution(vector<int> arr, int target){
    unordered_map<int, int> map;

    for (int i = 0; i < arr.size(); i++)
    {
        int needed = target - arr[i];

        if(map.find(needed) != map.end()){
            cout << map[needed] + 1 << i + 1;
            return;
        }

        map[arr[i]] = i;
    }
    cout << -1 << -1;
}


int main(){
    vector<int> arr = {2, 7, 11, 15};
    solution(arr, 9);
    optimalSolution(arr, 9);
    return 0;
}