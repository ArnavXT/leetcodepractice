// Last updated: 9/6/2026, 12:29:44 PM
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