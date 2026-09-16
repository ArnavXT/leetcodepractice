# Last updated: 9/16/2026, 11:46:20 PM
1class Solution:
2    def titleToNumber(self, columnTitle: str) -> int:
3        ans = 0
4
5        for ch in columnTitle:
6            ans = ans * 26 + (ord(ch) - ord('A') + 1)
7        return ans