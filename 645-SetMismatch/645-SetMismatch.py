# Last updated: 10/19/2026, 11:25:04 AM
class Solution:
    def findErrorNums(self, nums: list[int]) -> list[int]:
        n = len(nums)
        expected = n * ( n + 1) // 2
        actual = sum(nums)
        unique = sum(set(nums))
        missing = actual - unique
        dup = expected - unique
        return [missing, dup]