// Last updated: 9/6/2026, 12:31:14 PM
class Solution {
public:
    int subtractProductAndSum(int n) {
        int p = 1;
        int s = 0;
        while(n != 0){
        int digits = (n % 10);
        p *= digits;
        s += digits;
        n /= 10;
        }
        return p - s;
        }
};