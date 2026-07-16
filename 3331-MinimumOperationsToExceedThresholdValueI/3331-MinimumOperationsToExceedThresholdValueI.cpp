// Last updated: 7/16/2026, 4:36:49 PM
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int i = 0;
        int count = 0;
        int n = nums.size();

        while (i < n){
            if (nums[i]< k){
                count++;
            }
            i++;
        }
        return count;
        
    }
};