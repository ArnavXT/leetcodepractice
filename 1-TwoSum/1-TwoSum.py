# Last updated: 8/6/2026, 8:01:38 PM
1class Solution:
2    def twoSum(self, nums: List[int], target: int) -> List[int]:
3        L = {}
4        for i in range(len(nums)):
5            rem = target - nums[i]
6            if rem in L:
7                return [L[rem], i]
8            L[nums[i]] = i 
9