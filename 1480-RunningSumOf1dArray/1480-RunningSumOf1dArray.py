# Last updated: 10/19/2026, 11:24:22 AM
class Solution:
    def runningSum(self, nums: list[int]) -> list[int]:
        for i in range(1,len(nums)):
            nums[i] += nums[i-1]
        return nums