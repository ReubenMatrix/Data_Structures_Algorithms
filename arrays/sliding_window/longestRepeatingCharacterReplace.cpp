#include<iostream>
#include<vector>
using namespace std;


int bruteSolution(string s, int x){
    int maxLen = 0;

    for(int i = 0; i < s.size(); i++){
        vector<int> hash(26, 0);
        int maxFreq = 0;

        for(int j = i; j < s.size(); j++){
            hash[s[j] - 'A'] ++;
            maxFreq = max(maxFreq, hash[s[j] - 'A']);
            int window = j - i + 1;
            int replacements = window - maxFreq;

            if(replacements <= x){
                maxLen = max(maxLen, window);
            }
        }
    }

    return maxLen;
}


int optimalSolution(string s, int k){
    int left = 0;
    int maxFreq = 0;
    int maxLen = 0;
    vector<int> hash(26, 0);

    for(int right = 0; right < s.size(); right++){
        hash[s[right] - 'A']++;

        maxFreq = max(maxFreq, hash[s[right] - 'A']);

        int window = right - left + 1;

        while(window - maxFreq > k){
            hash[s[left]]--;
            left++;
        }

        maxLen = max(maxLen, window);
    }

    return maxLen;
}


int main(){
    string s = "ABAB";
    int k = 2;

    cout << bruteSolution(s, k) << endl;
    cout << optimalSolution(s,k);

    return 0;
}