// Last updated: 7/16/2026, 4:38:46 PM
class Solution {
public:
    bool isPalindrome(string s) {
        int r = s.length() - 1;
        int l = 0;

        while(l < r) {
            if(!isalnum(s[l])){   
                 l++;
            }else if (!isalnum(s[r])){
                 r--;
            }else if (tolower(s[l]) != tolower(s[r])) {
                return false;
            }else{
                    l++;
                    r--;
                }
        }
        return true;
    }
};