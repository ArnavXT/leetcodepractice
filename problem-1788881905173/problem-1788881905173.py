# Last updated: 9/8/2026, 9:08:25 PM
1class Solution:
2    def countCommas(self, n: int) -> int:
3        if n <= 999:
4            return 0
5        return n - 999