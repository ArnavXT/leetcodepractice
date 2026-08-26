// Last updated: 8/26/2026, 10:00:44 AM
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        return (nums[0]-1) * (nums[1]-1);
    }
};