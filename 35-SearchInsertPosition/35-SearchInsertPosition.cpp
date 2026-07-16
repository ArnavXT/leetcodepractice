// Last updated: 7/16/2026, 4:39:12 PM
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i = 0; i<nums.size();i++){
            if (nums[i]>=target){
                return i;
            }
        }
        return nums.size();
    }
};