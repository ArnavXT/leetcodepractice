# Last updated: 10/19/2026, 11:23:43 AM
class Solution:
    def sumOfSquares(self, nums: List[int]) -> int:
        res = 0
        n = len(nums)
        '''for i, val in enumerate(nums, start=1):
            if n % i == 0:
                res += n * n'''
        for i in range(n):
            if n % (i + 1) == 0:
                res += nums[i] * nums[i]
        return res
