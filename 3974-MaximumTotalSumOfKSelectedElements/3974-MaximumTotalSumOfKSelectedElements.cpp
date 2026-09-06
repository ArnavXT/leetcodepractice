// Last updated: 9/6/2026, 12:28:35 PM
class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.rbegin(), nums.rend());
        long long ans = 0;
        for(int i = 0; i < k; i++){
            ans += max((long long)nums[i], (long long) nums[i] * (mul - i));
        }
        return ans;
    }
};