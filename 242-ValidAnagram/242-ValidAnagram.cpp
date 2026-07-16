// Last updated: 7/16/2026, 4:38:16 PM
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s == t;

    }
};