# Last updated: 9/6/2026, 12:29:55 PM
class Solution:
    def missingInteger(self, nums: List[int]) -> int:
        count = nums[0]
        for i in range(1, len(nums)):
            if nums[i]-1 == nums[i-1]:
                count += nums[i]
            else:
                break
        while True:
            if count in nums:
                count += 1
            else:
                return count