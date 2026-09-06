// Last updated: 9/6/2026, 12:31:40 PM
class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int balance = 0;

        for(int i = 0; i < s.size();i++) 
        if (s[i] == '('){
            if(balance > 0){
                result += s[i];
            }
            balance++;
        } else {
            balance--;
            if(balance > 0)
                result += s[i];
        }
        return result;
    } 
};