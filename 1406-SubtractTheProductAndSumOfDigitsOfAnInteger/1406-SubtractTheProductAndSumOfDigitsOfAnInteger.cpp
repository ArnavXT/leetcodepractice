// Last updated: 8/26/2026, 10:00:51 AM
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