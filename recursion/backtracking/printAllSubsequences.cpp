#include<vector>
#include<iostream>
using namespace std;

void solution(int index, vector<int>& arr, vector<int>& ds){
    if(index == arr.size()){
        if(ds.empty()){
            cout << "{}";
        }
        else{
            for(int x : ds){
                cout << x << " ";
            }
        }
        cout << endl;
        return;
    }


    ds.push_back(arr[index]);
    solution(index + 1, arr, ds);

    ds.pop_back();
    solution(index + 1, arr, ds);
}


int main() {
    vector<int> arr = {1, 2, 3};
    vector<int> ds;

    solution(0, arr, ds);

    return 0;
}