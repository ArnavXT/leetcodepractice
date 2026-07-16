// Last updated: 7/16/2026, 4:37:53 PM
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0; i<s.size(); i++){
            s[i]=tolower(s[i]);
        }
        return s;
    }
};