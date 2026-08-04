# Last updated: 8/4/2026, 12:44:24 PM
1class Solution:
2    def commonFactors(self, a: int, b: int) -> int:
3        count = 0        
4        temp = min(a,b)
5        for i in range(1, temp + 1):
6            if a % i == 0 and b% i == 0:
7                count+=1
8        return count
9        