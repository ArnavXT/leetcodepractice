# Last updated: 9/28/2026, 7:22:34 PM
1class Solution:
2    def maxDepth(self, s: str) -> int:
3        c_count = 0
4        max_count = 0
5        #total_count = 0
6        for char in s:
7            if char == "(":
8                c_count += 1
9                max_count = max(c_count,max_count)
10                #total_count += 1
11            elif char == ")":
12                c_count -= 1
13                
14        return max_count
15
16        