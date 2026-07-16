// Last updated: 7/16/2026, 4:39:01 PM
class Solution {
public:
    int mySqrt(int x) {
        int n =x;
        int mid= -1;
        if(n == 0 || n ==1) return n;
        int start = 1; 
        int end = n;
        while(start<= end){
            mid = start + (end-start)/2;
            long long square = static_cast<long long>(mid)* mid;
            if(x < square){
                end = mid-1;
            }else if(x > square){
                start = mid+1;
            }else{
                return mid;
            }
        }

        return static_cast<int>(std::round(end));
        }
    };