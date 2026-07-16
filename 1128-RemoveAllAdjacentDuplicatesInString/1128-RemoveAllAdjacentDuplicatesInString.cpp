// Last updated: 7/16/2026, 4:37:30 PM
class Solution {
public:
    string removeDuplicates(string s) {
        string temp = "";
        int i = 0;
        
        while (i < s.length()) {
            if (temp.empty() || s[i] != temp.back()) {
                temp.push_back(s[i]);
            } else {
                temp.pop_back();
            }
            i++;
        }
        
        return temp;
    }
};