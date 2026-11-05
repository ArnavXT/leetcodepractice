# Last updated: 11/5/2026, 8:19:38 PM
class Solution:
    def minMoves(self, nums: List[int]) -> int:
        mx = max(nums)
        res = 0
        for x in nums:
            res += mx - x
        return res