# Last updated: 8/26/2026, 9:58:58 AM
class Solution:
    def findMissingElements(self, nums: List[int]) -> List[int]:

        nums.sort()

        ans = []

        for i in range(1, len(nums)):
            for j in range(nums[i - 1] + 1, nums[i]):
                ans.append(j)

        return ans
