// Last updated: 7/18/2026, 12:51:38 PM
1class Solution {
2public:
3    string addBinary(string a, string b) {
4        int i = a.length() - 1;
5        int j = b.length() - 1;
6        string res = "";
7        int carry = 0;
8
9        while(i >= 0 || j >= 0 || carry ==1){
10            if(i >= 0)
11                carry += a[i] - '0';
12                i--;
13            if (j >= 0)
14                carry += b[j] - '0';
15                j--;
16
17            res += carry%2 + '0';
18            carry = carry/2;
19        }
20        reverse(res.begin(), res.end());
21        return res;
22    }
23};