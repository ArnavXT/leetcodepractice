# Last updated: 9/6/2026, 12:32:52 PM
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        ans = []
        product = math.prod(nums)
        nzero = 0
        if 0 in nums:
            nz =  nums.copy()
            nz.remove(0)
            nzero = math.prod(nz) if nz else 0
        for i in nums:
            if i != 0:
                ans.append(product // i)
            else:
                ans.append(nzero)
        return ans