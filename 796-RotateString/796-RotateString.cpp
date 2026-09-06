// Last updated: 9/6/2026, 12:32:16 PM
class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()){
            return false;
        }
        return (s + s).find(goal) != string::npos;
        }
};