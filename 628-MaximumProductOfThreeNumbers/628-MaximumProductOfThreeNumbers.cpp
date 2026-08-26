// Last updated: 8/26/2026, 10:01:51 AM
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        int productL = nums[n - 1] * nums[n-2] * nums[n-3];
        int proSmall = nums[n - 1] * nums[0] * nums[1];

        return max(productL, proSmall);
    }
};