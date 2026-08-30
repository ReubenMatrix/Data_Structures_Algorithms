#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


bool solution(string s1, string s2){
    if(s1.length() > s2.length()){
        return false;
    }

    vector<int> freq1 (26, 0);
    vector<int> freq2 (26, 0);

    for(char c : s1){
        freq1[c - 'a']++;
    }

    int windowSize = s1.length();

    for(int i = 0; i < windowSize; i ++){
        freq2[s2[i] - 'a']++;
    }

    if(freq1 == freq2){
        return true;
    }


    for(int right = windowSize; right < s2.length(); right ++){
        freq2[s2[right] - 'a']++;

        int left = right - windowSize;
        freq2[s2[left] - 'a']--;


        if(freq1 == freq2){
            return true;
        }
    }

    return false;
}



int main(){
    string s1 = "abc";
    string s2 = "lecabee";

    cout << solution(s1,s2);

    return 0;
}