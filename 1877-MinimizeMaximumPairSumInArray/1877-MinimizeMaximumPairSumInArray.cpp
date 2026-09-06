// Last updated: 9/6/2026, 12:30:44 PM
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int l = 0, r = n-1, maxsum=0;
        while(l<r){
            int s = nums[l]+ nums[r];
            maxsum = max(maxsum, s);
            l++; r--;
        }
        return maxsum;
    }
};