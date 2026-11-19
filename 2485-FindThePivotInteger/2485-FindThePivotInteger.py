# Last updated: 11/19/2026, 5:56:04 PM
class Solution:
    def pivotInteger(self, n: int) -> int:
        sum = n * (n+1)//2
        a = math.sqrt(sum)
        if a - math.ceil(a) == 0:
            return int(a)
        return -1