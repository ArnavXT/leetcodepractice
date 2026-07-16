// Last updated: 7/16/2026, 4:39:33 PM
class Solution {
public:
    bool isPalindrome(int x){
        if(x<0 || (x % 10 == 0 && x != 0)){
            return false;
        }
        int rev_half =0;

        while(x> rev_half){
            int digit = x % 10;
            rev_half = (rev_half * 10) + digit;
            x /= 10;
        }
        return x == rev_half || x == rev_half / 10;
    }
};