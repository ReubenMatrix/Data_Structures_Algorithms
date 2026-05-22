#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> solution(vector<int> arr, int target){
    sort(arr.begin(), arr.end());

    
    vector<vector<int>> ans;

    for(int i = 0; i < arr.size() - 3; i++){
        for(int j = i + 1; j < arr.size() - 2; j++){
            for(int k = j + 1; k < arr.size() - 1; k++){
                for(int l = k + 1; l < arr.size(); l++){
                int sum = arr[i] + arr[j] + arr[k] + arr[l];

                if(sum == target){
                    ans.push_back({arr[i], arr[j], arr[k], arr[l]});
                }
            }
            }
        }
    }

    return ans;


}

vector<vector<int>> optimalSolution(vector<int> arr, int target){
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());

    for(int i = 0; i < arr.size() - 2; i++){
        for(int j = i + 1; j < arr.size() - 1; j++){
            int low = j + 1; 
            int high = arr.size() - 1;

            while(low < high){

            int sum = arr[i] + arr[j] + arr[low] + arr[high];

            if(sum == target){
                ans.push_back({arr[i], arr[j], arr[low], arr[high]});
                low++;
                high--;
            }else if(sum > target){
                high --;
            }else{
                low ++;
            }
        }
        }
    }

    return ans;

}




int main(){

    vector<int> arr = {-1, 0, 1, 2, -1, -4};

    int target = 2;

    vector<vector<int>> ans = solution(arr, target);

    for(int i = 0; i < ans.size(); i++){

        for(int j = 0; j < ans[i].size(); j++){

            cout << ans[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}