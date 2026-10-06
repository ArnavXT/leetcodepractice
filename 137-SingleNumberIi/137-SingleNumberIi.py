# Last updated: 10/6/2026, 2:16:07 PM
class Solution:
    def singleNumber(self, nums: list[int]) -> int:
        c = Counter(nums)
        for i in nums:
            if c[i] == 1:
                return i