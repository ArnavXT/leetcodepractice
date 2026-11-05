# Last updated: 11/5/2026, 8:22:28 PM
class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        '''if n != 0 and n != 1 and n%2 != 0:
            return False'''
        for i in range(31):
            ans = 2 ** i
            if ans == n:
                return True
        return False
