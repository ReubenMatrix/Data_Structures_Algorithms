    #include<iostream>
    #include<stack>
    #include<string>
    using namespace std;

    bool solution(string s){
        stack<char> ans;

        for(char c : s){
            if(c == '(' || c == '[' || c == '{'){
                ans.push(c);
            }
            else{
                if(ans.empty()){
                    return false;
                }

                if((c == ')' && ans.top() == '(') || (c == ']' && ans.top() == '[') ||  (c == '}' && ans.top() == '{')  ){
                    ans.pop();
                }else{
                    return false;
                }
            }
        }
        return true;
    }



    int main() {
        string s = "()[]{}";
        
        if (solution(s))
            cout << "Valid";
        else
            cout << "Invalid";

        return 0;
    }