# Last updated: 9/6/2026, 12:30:32 PM
class Solution:
    def minimumDeletions(self, nums):
        n = len(nums)

        minIndex = nums.index(min(nums))
        maxIndex = nums.index(max(nums))

        left = min(minIndex, maxIndex)
        right = max(minIndex, maxIndex)

        front = right + 1

        back = n - left

        frontBack = (left + 1) + (n - right)

        return min(front, back, frontBack)