# Last updated: 8/26/2026, 10:03:59 AM
class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        l = []
        for i in nums:
            if not l or i != l[-1]:
                l.append(i)
        for i in range(len(l)):
            nums[i] = l[i]
        return len(l)
        