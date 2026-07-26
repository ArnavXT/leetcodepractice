// Last updated: 7/26/2026, 11:56:53 AM
1class Solution {
2public:
3    int maximumProduct(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5        int n = nums.size();
6
7        int productL = nums[n - 1] * nums[n-2] * nums[n-3];
8        int proSmall = nums[n - 1] * nums[0] * nums[1];
9
10        return max(productL, proSmall);
11    }
12};