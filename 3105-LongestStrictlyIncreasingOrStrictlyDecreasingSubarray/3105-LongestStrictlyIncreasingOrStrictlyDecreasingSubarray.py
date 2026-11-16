# Last updated: 11/16/2026, 7:13:25 PM
class Solution:
    def longestMonotonicSubarray(self, nums: list[int]) -> int:
        n = len(nums)
        ans = 1
        for i in range(n):
            for j in range(i + 1, n):
                inc = True
                dec = True
                for k in range(i, j):
                    if nums[k] >= nums[k + 1]:
                        inc = False
                    if nums[k] <= nums[k + 1]:
                        dec = False
                if inc or dec:
                    ans = max(ans, j - i + 1)
        return ans