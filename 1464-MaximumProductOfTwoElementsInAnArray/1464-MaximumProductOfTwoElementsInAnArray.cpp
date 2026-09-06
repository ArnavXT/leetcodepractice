// Last updated: 9/6/2026, 12:31:03 PM
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        return (nums[0]-1) * (nums[1]-1);
    }
};