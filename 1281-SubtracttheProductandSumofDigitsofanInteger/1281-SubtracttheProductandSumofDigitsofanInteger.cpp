// Last updated: 7/27/2026, 7:06:52 PM
1class Solution {
2public:
3    int subtractProductAndSum(int n) {
4        int p = 1;
5        int s = 0;
6        while(n != 0){
7        int digits = (n % 10);
8        p *= digits;
9        s += digits;
10        n /= 10;
11        }
12        return p - s;
13        }
14};