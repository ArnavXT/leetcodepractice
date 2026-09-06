// Last updated: 9/6/2026, 12:29:17 PM
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