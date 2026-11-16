# Last updated: 11/16/2026, 7:13:17 PM
class Solution:
    def minimumSumSubarray(self, nums: List[int], l: int, r: int) -> int:
        n = len(nums)
        ans = float('inf')
        for i in range(n):
            s = 0
            for j in range(i, min(n, i + r)):
                s += nums[j]
                if j - i + 1 >= l and s > 0:
                    ans = min(ans, s)
        return -1 if ans == float('inf') else ans
