# Last updated: 8/28/2026, 10:54:28 PM
1class Solution:
2    def productExceptSelf(self, nums: List[int]) -> List[int]:
3        ans = []
4        product = math.prod(nums)
5        nzero = 0
6        if 0 in nums:
7            nz =  nums.copy()
8            nz.remove(0)
9            nzero = math.prod(nz) if nz else 0
10        for i in nums:
11            if i != 0:
12                ans.append(product // i)
13            else:
14                ans.append(nzero)
15        return ans