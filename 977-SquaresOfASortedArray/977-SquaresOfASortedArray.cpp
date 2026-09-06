// Last updated: 9/6/2026, 12:31:46 PM
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i = 0;i<nums.size();i++){
           nums[i] = nums[i]*nums[i];
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};