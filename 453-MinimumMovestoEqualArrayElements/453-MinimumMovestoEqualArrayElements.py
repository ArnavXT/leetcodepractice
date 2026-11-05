# Last updated: 11/5/2026, 10:42:23 AM
1class Solution:
2    def minMoves(self, nums: list[int]) -> int:
3        m = min(nums)
4        return sum(x - m for x in nums)