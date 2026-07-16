// Last updated: 7/16/2026, 4:38:20 PM
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 0) return false;
        while(n>0){
            if(n==1) return true;
            if(n %2 != 0)break;
            n /=2;
        }
        return false;
    }
};