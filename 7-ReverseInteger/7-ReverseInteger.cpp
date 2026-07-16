// Last updated: 7/16/2026, 4:39:36 PM
class Solution {
public:
    int reverse(int x) {
        long num = 0;
        while(x){
            if(num> INT_MAX/10 || num<INT_MIN/10 ) return 0;
            num = num * 10 + x%10;
            x = x/10;
            
        }
        return num;
    }
};