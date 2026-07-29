// Last updated: 7/29/2026, 11:59:16 PM
1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4        sort(nums.begin(), nums.end(), greater<int>());
5        return (nums[0]-1) * (nums[1]-1);
6    }
7};