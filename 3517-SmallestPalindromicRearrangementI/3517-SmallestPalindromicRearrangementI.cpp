// Last updated: 7/28/2026, 10:10:31 PM
1class Solution {
2public:
3    string smallestPalindrome(string s) {
4        int n=s.length();
5        int mid=n/2;
6        sort(s.begin(),s.begin()+mid);
7        sort(s.end()-mid,s.end());
8        reverse(s.end()-mid,s.end());
9        return s;
10    }
11};