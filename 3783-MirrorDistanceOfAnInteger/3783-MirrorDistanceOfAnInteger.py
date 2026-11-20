# Last updated: 11/20/2026, 8:20:56 PM
class Solution:
    def mirrorDistance(self, n: int) -> int:
        m = int(str(n)[::-1])-n
        if m < 0:
            result = -1 * m
            return result
        else:
            return m