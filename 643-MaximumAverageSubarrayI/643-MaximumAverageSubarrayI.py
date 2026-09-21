# Last updated: 9/21/2026, 11:56:48 PM
1class Solution:
2    def findMaxAverage(self, nums: list[int], k: int) -> float:
3        a = sum(nums[:k])
4        ms = a
5
6        for i in range(k, len(nums)):
7            a = a + nums[i] - nums[i-k]
8            ms = max(ms, a)
9        return ms/k