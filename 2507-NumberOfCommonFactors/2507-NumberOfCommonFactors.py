# Last updated: 8/26/2026, 10:00:11 AM
class Solution:
    def commonFactors(self, a: int, b: int) -> int:
        count = 0        
        temp = min(a,b)
        for i in range(1, temp + 1):
            if a % i == 0 and b% i == 0:
                count+=1
        return count
        