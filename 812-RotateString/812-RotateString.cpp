// Last updated: 7/16/2026, 4:37:51 PM
class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()){
            return false;
        }
        return (s + s).find(goal) != string::npos;
        }
};