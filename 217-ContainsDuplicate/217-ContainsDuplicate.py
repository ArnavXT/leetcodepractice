# Last updated: 10/19/2026, 11:25:41 AM
class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:
        return len(nums) != len(set(nums))