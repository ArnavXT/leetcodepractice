// Last updated: 7/16/2026, 4:36:33 PM
class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        int n = nums.size();
        vector<int> sMin(n);
        sMin[n-1] = nums[n-1];
        for(int i = n-2; i >= 0; i--) {
            sMin[i] = min(nums[i], sMin[i+1]);
        }

        long long maxScore = numeric_limits<long long>::lowest();
        long long windowSum = 0;

        for (int i = 0; i < n - 1; i++) {
            windowSum += nums[i];
            long long currentScore = windowSum - sMin[i+1];
            maxScore = max(maxScore, currentScore);
        }

        return maxScore;
    }
};