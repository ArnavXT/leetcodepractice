# Last updated: 8/26/2026, 10:02:06 AM
from collections import Counter
class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        ans = []
        numsmax = max(nums1, nums2)
        numsmin = min(nums1,nums2)

        c = Counter(numsmin)
        for i in numsmax:
            if i in c:
                if c[i]>0:
                    ans.append(i)
                    c[i] -= 1
        return ans
