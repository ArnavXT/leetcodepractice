# Last updated: 8/7/2026, 6:33:07 PM
1class Solution:
2    def maxSubArray(self, nums: List[int]) -> int:
3        maxSum = nums[0]
4        currSum = nums[0]
5
6        for i in range(1, len(nums)):
7            currSum = max(nums[i], currSum + nums[i])
8            maxSum = max(currSum, maxSum)
9        return maxSum