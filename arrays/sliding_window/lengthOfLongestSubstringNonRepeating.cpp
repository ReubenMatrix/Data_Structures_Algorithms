#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int bruteSolution(string s){
    int n = s.size();
    int maxLen = 0;

    for(int i = 0; i < n; i++){
        vector<int> charHash (256,0);

        for(int j = i; j < n; j++){
            if(charHash[s[j]] == 1) break;

            charHash[s[j]] = 1;
            int len = j - i + 1;
            maxLen = max(maxLen, len);
        }
    }

    return maxLen;
}


int optimalSolution(string s){
    unordered_map<char,int> lastPos;
    int left = 0;
    int maxLen = 0;

    for(int right = 0; right < s.size(); right++){
        char currentChar = s[right];

        if(lastPos.find(currentChar) != lastPos.end() && lastPos[currentChar] >= left){
            left = lastPos[currentChar] + 1;
        }

        lastPos[currentChar] = right;
        int length = right - left + 1;
        maxLen = max(length, maxLen);
    }

    return maxLen;

}


int main(){
    string  S = "abcddabac" ;
    cout << bruteSolution(S) << endl;
    cout << optimalSolution(S);
    return 0;
}