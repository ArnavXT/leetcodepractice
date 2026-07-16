// Last updated: 7/16/2026, 4:39:05 PM
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int i = n-1;
        int count;
        while(i>=0){
            if(s[i]!= ' '){
                int j = i;
                while(j>=0 && s[j]!= ' ') j--;
                return i-j;
            }
            i--;
        }
        return 0;
    }
};