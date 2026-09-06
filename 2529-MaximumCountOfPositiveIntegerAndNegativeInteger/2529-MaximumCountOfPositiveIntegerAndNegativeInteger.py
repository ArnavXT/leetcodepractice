# Last updated: 9/6/2026, 12:30:14 PM
class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        pos = 0
        neg = 0
        for i in nums:
            if i > 0:
                pos += 1
            elif i < 0:
                neg +=1
        return max(pos,neg)


        