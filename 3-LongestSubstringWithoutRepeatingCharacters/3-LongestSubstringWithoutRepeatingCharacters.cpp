// Last updated: 7/16/2026, 4:39:44 PM
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int j = 0;
        int max_length = 0;
        int n = s.length();

        map<char, int> count;
        while (j<n){
            count[s[j]]++;
            while (count[s[j]] > 1) {
                count[s[i]]--;
                i++;
            }
            max_length = max(max_length,j-i+1);
            j++;
        };
    return max_length;  
    };
};