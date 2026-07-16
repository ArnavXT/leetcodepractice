# Last updated: 7/16/2026, 4:39:37 PM
class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        ans=0
        i=0
        j=len(height)-1
        while (i < j):
            if height[i]<=height[j]:
                area = height[i]*(j - i)
                i += 1
            else:
                area = height[j]*(j - i)
                j -= 1
            if area > ans:
                 ans = area
        return ans