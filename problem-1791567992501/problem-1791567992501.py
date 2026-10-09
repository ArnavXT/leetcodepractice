# Last updated: 10/9/2026, 11:16:32 PM
1class Solution:
2    def minInsertions(self, s: str) -> int:
3        left = 0
4        right_needed = 0
5
6        for char in s:
7            if char == '(':
8                if right_needed % 2 != 0:
9                    left += 1
10                    right_needed -= 1
11
12                right_needed += 2
13            else:
14                right_needed -= 1
15
16                if right_needed < 0:
17                    left += 1
18                    right_needed += 2
19
20        return left + right_needed