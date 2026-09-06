// Last updated: 9/6/2026, 12:28:47 PM
class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0){
            return 0;
        }
        long long x =0;
        int sum = 0;
        long long mul = 1;
        while(n>0){
            int digit = n % 10;
            n /=10;
        if(digit != 0){
            sum += digit;
                x += digit * mul;
                mul *= 10;
        }
        }
        return x * sum;
    }
};