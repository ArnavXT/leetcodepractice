// Last updated: 8/26/2026, 9:59:26 AM
class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.length();
        int mid=n/2;
        sort(s.begin(),s.begin()+mid);
        sort(s.end()-mid,s.end());
        reverse(s.end()-mid,s.end());
        return s;
    }
};