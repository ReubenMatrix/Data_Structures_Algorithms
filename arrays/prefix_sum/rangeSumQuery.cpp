#include<iostream>
#include<vector>
using namespace std;

vector<int> prefixes;


void NumArray(vector<int> arr){
    prefixes.push_back(arr[0]);

    for(int i = 1; i < arr.size(); i++){
        prefixes.push_back(arr[i] + prefixes[i - 1]);
    }
}

int sumRange(int left, int right){
    if(left == 0){
        return prefixes[right];
    }

    return prefixes[right] - prefixes[left - 1];
}



int main(){
    vector<int> arr = {1, 2, 3, 4, 5};

    NumArray(arr);


    cout << "Sum from index 0 to 2: " << sumRange(0, 2) << endl;
    cout << "Sum from index 1 to 3: " << sumRange(1, 3) << endl;
    cout << "Sum from index 2 to 4: " << sumRange(2, 4) << endl;

    return 0;
}