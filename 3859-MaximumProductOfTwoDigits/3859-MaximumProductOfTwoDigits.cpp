// Last updated: 8/26/2026, 9:59:18 AM
class Solution {
public:
    int maxProduct(int n) {
        int large = 0;
        int secondL = 0;

        while(n > 0){
            int curr = n % 10;

            if (curr > large){
                secondL = large;
                large = curr;
            } else if (curr > secondL){
                secondL = curr;
            }
            n /= 10;
        }
        return large * secondL;
    }
};