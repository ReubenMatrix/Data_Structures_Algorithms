//      https://leetcode.com/problems/3sum/description/



#include<vector>
#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

vector<vector<int>> solution(vector<int> arr){
    set<vector<int>> st;

    for(int i = 0; i < arr.size(); i++){
        for(int j = i + 1; j < arr.size(); j++){
            for(int k = j + 1; k < arr.size(); k++){
                if(arr[i] + arr[j] + arr[k] == 0){
                    vector<int> triplet = {arr[i] , arr[j], arr[k]};
                    sort(triplet.begin(),  triplet.end());
                    st.insert(triplet);
                }
            }
        }
    }


    return vector<vector<int>>(
        st.begin(),
        st.end()
    );
}


vector<vector<int>> optimalSolution(vector<int> arr){
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;

    for(int i = 0; i < arr.size() - 2; i++){
        int left = i + 1;
        int right = arr.size() - 1;

        while(left < right){
            int sum = arr[i] + arr[left] + arr[right];

            if(sum == 0){
                ans.push_back({arr[i], arr[left], arr[right]});

                left++;
                right --;


                while(left < right && arr[left] == arr[left - 1]){
                    left ++;
                }

                while(left < right && arr[right] == arr[right + 1]){
                    right --;
                }
            }
            else if(sum < 0){
                left ++;
            }
            else{
                right --;
            }
        }
    }

    return ans;
}

int main() {

    vector<int> arr = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> ans = solution(arr);

    for(auto triplet : ans) {

        for(int i = 0; i < triplet.size(); i++) {
            cout << triplet[i] << " ";
        }
        cout << endl;
    }



    vector<vector<int>> ans2 = optimalSolution(arr);

    for(auto triplet : ans2) {

        for(int i = 0; i < triplet.size(); i++) {
            cout << triplet[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
