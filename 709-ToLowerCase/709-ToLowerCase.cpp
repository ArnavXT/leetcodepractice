// Last updated: 9/6/2026, 12:32:24 PM
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0; i<s.size(); i++){
            s[i]=tolower(s[i]);
        }
        return s;
    }
};