# Last updated: 10/13/2026, 11:07:52 PM
1class Solution:
2    def singleNumber(self, nums: list[int]) -> int:
3        c = Counter(nums)
4        for i in nums:
5            if c[i] == 1:
6                return i