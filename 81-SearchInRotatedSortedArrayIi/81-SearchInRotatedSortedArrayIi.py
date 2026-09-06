# Last updated: 9/6/2026, 12:33:22 PM
class Solution:
    def search(self, nums: List[int], target: int) -> bool:
        for i in range(len(nums)):
            if nums[i] == target:
                return True
        return False