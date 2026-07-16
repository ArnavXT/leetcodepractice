// Last updated: 7/16/2026, 4:36:50 PM
class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int first = nums[0];
        nums.erase(nums.begin()+0);
        sort(nums.begin(),nums.end());
        return first+nums[0]+nums[1];
    }
};