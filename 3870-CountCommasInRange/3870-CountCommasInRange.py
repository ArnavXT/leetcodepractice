# Last updated: 9/20/2026, 12:40:02 AM
class Solution:
    def countCommas(self, n: int) -> int:
        if n <= 999:
            return 0
        return n - 999