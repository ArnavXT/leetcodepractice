// Last updated: 9/6/2026, 12:30:23 PM
class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int i = 0;
        int j = 0;
        
        int whiteCount = 0;        
        int min_sum = n; 

        while (j < n) {
            if (blocks[j] == 'W') {
                whiteCount++;
            }
            if (j - i + 1 < k) {
                j++;
            } 
            else if (j-i+1 == k) {
                min_sum = min(min_sum, whiteCount);
                
                if (blocks[i] == 'W') {
                    whiteCount--;
                }
                i++;
                j++;
            }
        }
        
        return min_sum;
    }
};