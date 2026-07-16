// Last updated: 7/16/2026, 4:38:09 PM
class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0,j = s.size()-1;
        while(i<j){
            char temp = s[j];
            s[j] = s[i];
            s[i] = temp;
            i++;
            j--;
        }
    }
};