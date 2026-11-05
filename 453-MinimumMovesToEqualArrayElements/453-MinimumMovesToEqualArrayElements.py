# Last updated: 11/5/2026, 8:22:07 PM
class Solution:
    def minMoves(self, nums: list[int]) -> int:
        m = min(nums)
        return sum(x - m for x in nums)