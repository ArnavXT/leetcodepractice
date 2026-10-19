# Last updated: 10/19/2026, 11:25:19 AM
class Solution:
    def thirdMax(self, nums: list[int]) -> int:
        nums=sorted(set(nums))
        if len(nums)<3:
            return nums[-1]
        else:
            return nums[-3]
            